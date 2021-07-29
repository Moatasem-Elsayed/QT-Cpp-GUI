/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Ela_Slaty_Project/mainwindow.h"
#include <QtNetwork/QSslError>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[32];
    char stringdata0[269];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 11), // "UpdateClock"
QT_MOC_LITERAL(23, 0), // ""
QT_MOC_LITERAL(24, 11), // "changeEvent"
QT_MOC_LITERAL(36, 7), // "QEvent*"
QT_MOC_LITERAL(44, 5), // "event"
QT_MOC_LITERAL(50, 28), // "on_commandLinkButton_clicked"
QT_MOC_LITERAL(79, 25), // "on_chbx_fagr_stateChanged"
QT_MOC_LITERAL(105, 4), // "arg1"
QT_MOC_LITERAL(110, 25), // "on_chbx_asha_stateChanged"
QT_MOC_LITERAL(136, 25), // "on_chbx_dohr_stateChanged"
QT_MOC_LITERAL(162, 24), // "on_chbx_asr_stateChanged"
QT_MOC_LITERAL(187, 26), // "on_chbx_mghrb_stateChanged"
QT_MOC_LITERAL(214, 13), // "iconActivated"
QT_MOC_LITERAL(228, 33), // "QSystemTrayIcon::ActivationRe..."
QT_MOC_LITERAL(262, 6) // "reason"

    },
    "MainWindow\0UpdateClock\0\0changeEvent\0"
    "QEvent*\0event\0on_commandLinkButton_clicked\0"
    "on_chbx_fagr_stateChanged\0arg1\0"
    "on_chbx_asha_stateChanged\0"
    "on_chbx_dohr_stateChanged\0"
    "on_chbx_asr_stateChanged\0"
    "on_chbx_mghrb_stateChanged\0iconActivated\0"
    "QSystemTrayIcon::ActivationReason\0"
    "reason"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x0a,    0 /* Public */,
       3,    1,   69,    2, 0x0a,    1 /* Public */,
       6,    0,   72,    2, 0x08,    3 /* Private */,
       7,    1,   73,    2, 0x08,    4 /* Private */,
       9,    1,   76,    2, 0x08,    6 /* Private */,
      10,    1,   79,    2, 0x08,    8 /* Private */,
      11,    1,   82,    2, 0x08,   10 /* Private */,
      12,    1,   85,    2, 0x08,   12 /* Private */,
      13,    1,   88,    2, 0x08,   14 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, 0x80000000 | 14,   15,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->UpdateClock(); break;
        case 1: _t->changeEvent((*reinterpret_cast< QEvent*(*)>(_a[1]))); break;
        case 2: _t->on_commandLinkButton_clicked(); break;
        case 3: _t->on_chbx_fagr_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_chbx_asha_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_chbx_dohr_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_chbx_asr_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_chbx_mghrb_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->iconActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QSystemTrayIcon::ActivationReason, std::false_type>


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
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
