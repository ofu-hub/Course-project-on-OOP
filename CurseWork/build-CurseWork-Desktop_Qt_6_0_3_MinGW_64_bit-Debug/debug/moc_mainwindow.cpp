/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.0.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../CurseWork/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.0.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[40];
    char stringdata0[419];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 14), // "digits_numbers"
QT_MOC_LITERAL(26, 0), // ""
QT_MOC_LITERAL(27, 25), // "on_pushButton_dot_clicked"
QT_MOC_LITERAL(53, 10), // "operations"
QT_MOC_LITERAL(64, 15), // "math_operations"
QT_MOC_LITERAL(80, 24), // "on_pushButton_AC_clicked"
QT_MOC_LITERAL(105, 23), // "on_pushButton_C_clicked"
QT_MOC_LITERAL(129, 9), // "z_numbers"
QT_MOC_LITERAL(139, 10), // "ch_numbers"
QT_MOC_LITERAL(150, 25), // "on_pushButton_chC_clicked"
QT_MOC_LITERAL(176, 24), // "on_pushButton_zC_clicked"
QT_MOC_LITERAL(201, 26), // "on_pushButton_dotZ_clicked"
QT_MOC_LITERAL(228, 27), // "on_pushButton_dotCH_clicked"
QT_MOC_LITERAL(256, 22), // "on_action_AC_triggered"
QT_MOC_LITERAL(279, 24), // "on_action_Exit_triggered"
QT_MOC_LITERAL(304, 26), // "on_action_Author_triggered"
QT_MOC_LITERAL(331, 29), // "on_pushButton_equally_clicked"
QT_MOC_LITERAL(361, 24), // "on_action_Info_triggered"
QT_MOC_LITERAL(386, 32) // "on_action_ChangeOutput_triggered"

    },
    "MainWindow\0digits_numbers\0\0"
    "on_pushButton_dot_clicked\0operations\0"
    "math_operations\0on_pushButton_AC_clicked\0"
    "on_pushButton_C_clicked\0z_numbers\0"
    "ch_numbers\0on_pushButton_chC_clicked\0"
    "on_pushButton_zC_clicked\0"
    "on_pushButton_dotZ_clicked\0"
    "on_pushButton_dotCH_clicked\0"
    "on_action_AC_triggered\0on_action_Exit_triggered\0"
    "on_action_Author_triggered\0"
    "on_pushButton_equally_clicked\0"
    "on_action_Info_triggered\0"
    "on_action_ChangeOutput_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  122,    2, 0x08,    0 /* Private */,
       3,    0,  123,    2, 0x08,    1 /* Private */,
       4,    0,  124,    2, 0x08,    2 /* Private */,
       5,    0,  125,    2, 0x08,    3 /* Private */,
       6,    0,  126,    2, 0x08,    4 /* Private */,
       7,    0,  127,    2, 0x08,    5 /* Private */,
       8,    0,  128,    2, 0x08,    6 /* Private */,
       9,    0,  129,    2, 0x08,    7 /* Private */,
      10,    0,  130,    2, 0x08,    8 /* Private */,
      11,    0,  131,    2, 0x08,    9 /* Private */,
      12,    0,  132,    2, 0x08,   10 /* Private */,
      13,    0,  133,    2, 0x08,   11 /* Private */,
      14,    0,  134,    2, 0x08,   12 /* Private */,
      15,    0,  135,    2, 0x08,   13 /* Private */,
      16,    0,  136,    2, 0x08,   14 /* Private */,
      17,    0,  137,    2, 0x08,   15 /* Private */,
      18,    0,  138,    2, 0x08,   16 /* Private */,
      19,    0,  139,    2, 0x08,   17 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->digits_numbers(); break;
        case 1: _t->on_pushButton_dot_clicked(); break;
        case 2: _t->operations(); break;
        case 3: _t->math_operations(); break;
        case 4: _t->on_pushButton_AC_clicked(); break;
        case 5: _t->on_pushButton_C_clicked(); break;
        case 6: _t->z_numbers(); break;
        case 7: _t->ch_numbers(); break;
        case 8: _t->on_pushButton_chC_clicked(); break;
        case 9: _t->on_pushButton_zC_clicked(); break;
        case 10: _t->on_pushButton_dotZ_clicked(); break;
        case 11: _t->on_pushButton_dotCH_clicked(); break;
        case 12: _t->on_action_AC_triggered(); break;
        case 13: _t->on_action_Exit_triggered(); break;
        case 14: _t->on_action_Author_triggered(); break;
        case 15: _t->on_pushButton_equally_clicked(); break;
        case 16: _t->on_action_Info_triggered(); break;
        case 17: _t->on_action_ChangeOutput_triggered(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 18;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
