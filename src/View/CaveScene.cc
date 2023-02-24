#include "Widget.h"

using namespace s21;

CaveScene::CaveScene(Ui::Widget *ui) noexcept : ui_(ui),
        cave_(new CaveController(ui->caveCols->value(), ui->caveRows->value(),
            ui->caveBirth->value(), ui->caveDeath->value())),
        Scene(ui->caveCols->value(), ui->caveRows->value(), ui->caveView) {
    addRect(0, 0, height_, width_);
}

void CaveScene::Create() {
    cave_->Create(ui_->caveCols->value(), ui_->caveRows->value(), ui_->caveChance->value(),\
                    ui_->caveBirth->value(), ui_->caveDeath->value());
    Draw();
}

void CaveScene::FromFile(std::string path) {
    auto size = cave_->FromFile(path, ui_->caveBirth->value(), ui_->caveDeath->value());
    ui_->caveRows->setValue(size.second);
    ui_->caveCols->setValue(size.first);
    Draw();
}

void CaveScene::Save(std::string path) {
    cave_->Save(path);
}

void CaveScene::Update() {
    cave_->Update();
    Draw();
}

void CaveScene::mouseMoveEvent(QGraphicsSceneMouseEvent *mouseEvent) {
    if (ui_->caveCreateMode->isChecked()) {
        CreateMod(mouseEvent);
    }
}

void CaveScene::mousePressEvent(QGraphicsSceneMouseEvent *mouseEvent) {
    if (ui_->caveCreateMode->isChecked()) {
        CreateMod(mouseEvent);
    } else {
        uint x = (uint)mouseEvent->scenePos().x() / step_x_;
        uint y = (uint)mouseEvent->scenePos().y() / step_y_;
        if (!cave_->GetLive(y, x)) {
            PathDraw(x, y);
        }
    }
}

void CaveScene::CreateMod(QGraphicsSceneMouseEvent *mouseEvent) {
    uint x = (uint)mouseEvent->scenePos().x() / step_x_;
    uint y = (uint)mouseEvent->scenePos().y() / step_y_;
    if (mouseEvent->modifiers() & Qt::ControlModifier) {
        if (cave_->SetAir(y, x)) {
            AddRect(x, y, Def::empty_color);
        }
    } else {
        if (cave_->SetWall(y, x)) {
            AddRect(x, y, Def::wall_color);
        }
    }
}

void CaveScene::AddRect(uint x, uint y, QColor color) {
    addRect(step_x_ * x, step_y_ * y, step_x_, step_y_, QPen(color), QBrush(color));
}

solve_stack CaveScene::ShortestPath(point start, point end) {
    return cave_->ShortestPath(start, end);
}

void CaveScene::Draw() {
    clear();
    uint x = ui_->caveCols->value();
    uint y = ui_->caveRows->value();
    addRect(0, 0, height_, width_);
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            AddRect(j, i, cave_->GetLive(i, j) ? Def::wall_color : Def::empty_color);
        }
    }
}

void CaveScene::AutoTimer() {
    if (timer_ != nullptr) {
        return StopTimer();
    }
    timer_ = new QTimer(this);
    connect(timer_, &QTimer::timeout, this, [&]{
        if (cave_->Update()) {
            StopTimer();
        } else {
            Draw();
        }
    });
    timer_->start(ui_->caveMs->value());
}

void CaveScene::StopTimer() {
    timer_->stop();
    delete timer_;
    timer_ = nullptr;
}
