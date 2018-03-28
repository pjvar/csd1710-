/****************************************************************************
** Meta object code from reading C++ file 'matchmainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "matchmainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'matchmainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MatchMainWindow_t {
    QByteArrayData data[20];
    char stringdata[336];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MatchMainWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MatchMainWindow_t qt_meta_stringdata_MatchMainWindow = {
    {
QT_MOC_LITERAL(0, 0, 15), // "MatchMainWindow"
QT_MOC_LITERAL(1, 16, 19), // "on_action_triggered"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 14), // "on_image_click"
QT_MOC_LITERAL(4, 52, 20), // "on_tipButton_clicked"
QT_MOC_LITERAL(5, 73, 7), // "checked"
QT_MOC_LITERAL(6, 81, 23), // "on_prbtime_valueChanged"
QT_MOC_LITERAL(7, 105, 5), // "value"
QT_MOC_LITERAL(8, 111, 10), // "onConneted"
QT_MOC_LITERAL(9, 122, 14), // "onDisconnected"
QT_MOC_LITERAL(10, 137, 7), // "onError"
QT_MOC_LITERAL(11, 145, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(12, 174, 11), // "onReadyRead"
QT_MOC_LITERAL(13, 186, 22), // "on_resetButton_clicked"
QT_MOC_LITERAL(14, 209, 23), // "on_exitaction_triggered"
QT_MOC_LITERAL(15, 233, 23), // "on_sendEdit_textChanged"
QT_MOC_LITERAL(16, 257, 4), // "arg1"
QT_MOC_LITERAL(17, 262, 21), // "on_sendButton_clicked"
QT_MOC_LITERAL(18, 284, 26), // "on_restartaction_triggered"
QT_MOC_LITERAL(19, 311, 24) // "on_gameaction2_triggered"

    },
    "MatchMainWindow\0on_action_triggered\0"
    "\0on_image_click\0on_tipButton_clicked\0"
    "checked\0on_prbtime_valueChanged\0value\0"
    "onConneted\0onDisconnected\0onError\0"
    "QAbstractSocket::SocketError\0onReadyRead\0"
    "on_resetButton_clicked\0on_exitaction_triggered\0"
    "on_sendEdit_textChanged\0arg1\0"
    "on_sendButton_clicked\0on_restartaction_triggered\0"
    "on_gameaction2_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MatchMainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    1,   86,    2, 0x08 /* Private */,
       6,    1,   89,    2, 0x08 /* Private */,
       8,    0,   92,    2, 0x08 /* Private */,
       9,    0,   93,    2, 0x08 /* Private */,
      10,    1,   94,    2, 0x08 /* Private */,
      12,    0,   97,    2, 0x08 /* Private */,
      13,    0,   98,    2, 0x08 /* Private */,
      14,    0,   99,    2, 0x08 /* Private */,
      15,    1,  100,    2, 0x08 /* Private */,
      17,    0,  103,    2, 0x08 /* Private */,
      18,    0,  104,    2, 0x08 /* Private */,
      19,    0,  105,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MatchMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MatchMainWindow *_t = static_cast<MatchMainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_action_triggered(); break;
        case 1: _t->on_image_click(); break;
        case 2: _t->on_tipButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_prbtime_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->onConneted(); break;
        case 5: _t->onDisconnected(); break;
        case 6: _t->onError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 7: _t->onReadyRead(); break;
        case 8: _t->on_resetButton_clicked(); break;
        case 9: _t->on_exitaction_triggered(); break;
        case 10: _t->on_sendEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->on_sendButton_clicked(); break;
        case 12: _t->on_restartaction_triggered(); break;
        case 13: _t->on_gameaction2_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    }
}

const QMetaObject MatchMainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MatchMainWindow.data,
      qt_meta_data_MatchMainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MatchMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MatchMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MatchMainWindow.stringdata))
        return static_cast<void*>(const_cast< MatchMainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MatchMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
