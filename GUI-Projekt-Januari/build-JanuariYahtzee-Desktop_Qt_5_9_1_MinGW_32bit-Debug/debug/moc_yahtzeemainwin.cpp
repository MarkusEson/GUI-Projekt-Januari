/****************************************************************************
** Meta object code from reading C++ file 'yahtzeemainwin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../JanuariYahtzee/yahtzeemainwin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'yahtzeemainwin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_YahtzeeMainWin_t {
    QByteArrayData data[9];
    char stringdata0[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_YahtzeeMainWin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_YahtzeeMainWin_t qt_meta_stringdata_YahtzeeMainWin = {
    {
QT_MOC_LITERAL(0, 0, 14), // "YahtzeeMainWin"
QT_MOC_LITERAL(1, 15, 17), // "aButtonWasClicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 26), // "on_onePlayerButton_clicked"
QT_MOC_LITERAL(4, 61, 26), // "on_twoPlayerButton_clicked"
QT_MOC_LITERAL(5, 88, 28), // "on_threePlayerButton_clicked"
QT_MOC_LITERAL(6, 117, 27), // "on_fourPlayerButton_clicked"
QT_MOC_LITERAL(7, 145, 24), // "on_optionsButton_clicked"
QT_MOC_LITERAL(8, 170, 25) // "on_rollDiceButton_clicked"

    },
    "YahtzeeMainWin\0aButtonWasClicked\0\0"
    "on_onePlayerButton_clicked\0"
    "on_twoPlayerButton_clicked\0"
    "on_threePlayerButton_clicked\0"
    "on_fourPlayerButton_clicked\0"
    "on_optionsButton_clicked\0"
    "on_rollDiceButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_YahtzeeMainWin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void YahtzeeMainWin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        YahtzeeMainWin *_t = static_cast<YahtzeeMainWin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->aButtonWasClicked(); break;
        case 1: _t->on_onePlayerButton_clicked(); break;
        case 2: _t->on_twoPlayerButton_clicked(); break;
        case 3: _t->on_threePlayerButton_clicked(); break;
        case 4: _t->on_fourPlayerButton_clicked(); break;
        case 5: _t->on_optionsButton_clicked(); break;
        case 6: _t->on_rollDiceButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject YahtzeeMainWin::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_YahtzeeMainWin.data,
      qt_meta_data_YahtzeeMainWin,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *YahtzeeMainWin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *YahtzeeMainWin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_YahtzeeMainWin.stringdata0))
        return static_cast<void*>(const_cast< YahtzeeMainWin*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int YahtzeeMainWin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
