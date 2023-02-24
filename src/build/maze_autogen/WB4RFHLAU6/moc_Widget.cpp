/****************************************************************************
** Meta object code from reading C++ file 'Widget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../View/Widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_s21__Scene_t {
    const uint offsetsAndSize[12];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_s21__Scene_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_s21__Scene_t qt_meta_stringdata_s21__Scene = {
    {
QT_MOC_LITERAL(0, 10), // "s21::Scene"
QT_MOC_LITERAL(11, 8), // "SetStepY"
QT_MOC_LITERAL(20, 0), // ""
QT_MOC_LITERAL(21, 4), // "rows"
QT_MOC_LITERAL(26, 8), // "SetStepX"
QT_MOC_LITERAL(35, 4) // "cols"

    },
    "s21::Scene\0SetStepY\0\0rows\0SetStepX\0"
    "cols"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_s21__Scene[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x0a,    1 /* Public */,
       4,    1,   29,    2, 0x0a,    3 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    5,

       0        // eod
};

void s21::Scene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Scene *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->SetStepY((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 1: _t->SetStepX((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject s21::Scene::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsScene::staticMetaObject>(),
    qt_meta_stringdata_s21__Scene.offsetsAndSize,
    qt_meta_data_s21__Scene,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_s21__Scene_t
, QtPrivate::TypeAndForceComplete<Scene, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>


>,
    nullptr
} };


const QMetaObject *s21::Scene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *s21::Scene::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_s21__Scene.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsScene::qt_metacast(_clname);
}

int s21::Scene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsScene::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_s21__CaveScene_t {
    const uint offsetsAndSize[18];
    char stringdata0[79];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_s21__CaveScene_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_s21__CaveScene_t qt_meta_stringdata_s21__CaveScene = {
    {
QT_MOC_LITERAL(0, 14), // "s21::CaveScene"
QT_MOC_LITERAL(15, 13), // "SetBirthLimit"
QT_MOC_LITERAL(29, 0), // ""
QT_MOC_LITERAL(30, 5), // "limit"
QT_MOC_LITERAL(36, 13), // "SetDeathLimit"
QT_MOC_LITERAL(50, 6), // "Create"
QT_MOC_LITERAL(57, 6), // "Update"
QT_MOC_LITERAL(64, 9), // "AutoTimer"
QT_MOC_LITERAL(74, 4) // "Draw"

    },
    "s21::CaveScene\0SetBirthLimit\0\0limit\0"
    "SetDeathLimit\0Create\0Update\0AutoTimer\0"
    "Draw"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_s21__CaveScene[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x0a,    1 /* Public */,
       4,    1,   53,    2, 0x0a,    3 /* Public */,
       5,    0,   56,    2, 0x0a,    5 /* Public */,
       6,    0,   57,    2, 0x0a,    6 /* Public */,
       7,    0,   58,    2, 0x0a,    7 /* Public */,
       8,    0,   59,    2, 0x0a,    8 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void s21::CaveScene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CaveScene *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->SetBirthLimit((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->SetDeathLimit((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->Create(); break;
        case 3: _t->Update(); break;
        case 4: _t->AutoTimer(); break;
        case 5: _t->Draw(); break;
        default: ;
        }
    }
}

const QMetaObject s21::CaveScene::staticMetaObject = { {
    QMetaObject::SuperData::link<Scene::staticMetaObject>(),
    qt_meta_stringdata_s21__CaveScene.offsetsAndSize,
    qt_meta_data_s21__CaveScene,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_s21__CaveScene_t
, QtPrivate::TypeAndForceComplete<CaveScene, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *s21::CaveScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *s21::CaveScene::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_s21__CaveScene.stringdata0))
        return static_cast<void*>(this);
    return Scene::qt_metacast(_clname);
}

int s21::CaveScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Scene::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
struct qt_meta_stringdata_s21__Widget_t {
    const uint offsetsAndSize[2];
    char stringdata0[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_s21__Widget_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_s21__Widget_t qt_meta_stringdata_s21__Widget = {
    {
QT_MOC_LITERAL(0, 11) // "s21::Widget"

    },
    "s21::Widget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_s21__Widget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void s21::Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject s21::Widget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_s21__Widget.offsetsAndSize,
    qt_meta_data_s21__Widget,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_s21__Widget_t
, QtPrivate::TypeAndForceComplete<Widget, std::true_type>



>,
    nullptr
} };


const QMetaObject *s21::Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *s21::Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_s21__Widget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int s21::Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
