/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Atelier_Connexion/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[18];
    char stringdata0[343];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 29), // "on_pushButton_ajouter_clicked"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 31), // "on_pushButton_supprimer_clicked"
QT_MOC_LITERAL(4, 74, 28), // "on_pushButton_update_clicked"
QT_MOC_LITERAL(5, 103, 28), // "on_pushButton_search_clicked"
QT_MOC_LITERAL(6, 132, 12), // "extractToPdf"
QT_MOC_LITERAL(7, 145, 29), // "on_pushButton_refresh_clicked"
QT_MOC_LITERAL(8, 175, 30), // "on_pushButton_search_2_clicked"
QT_MOC_LITERAL(9, 206, 12), // "addToHistory"
QT_MOC_LITERAL(10, 219, 6), // "action"
QT_MOC_LITERAL(11, 226, 11), // "serviceName"
QT_MOC_LITERAL(12, 238, 17), // "saveHistoryToFile"
QT_MOC_LITERAL(13, 256, 30), // "on_pushButton_search_3_clicked"
QT_MOC_LITERAL(14, 287, 30), // "on_pushButton_search_4_clicked"
QT_MOC_LITERAL(15, 318, 8), // "arduinoo"
QT_MOC_LITERAL(16, 327, 10), // "verifyCode"
QT_MOC_LITERAL(17, 338, 4) // "data"

    },
    "MainWindow\0on_pushButton_ajouter_clicked\0"
    "\0on_pushButton_supprimer_clicked\0"
    "on_pushButton_update_clicked\0"
    "on_pushButton_search_clicked\0extractToPdf\0"
    "on_pushButton_refresh_clicked\0"
    "on_pushButton_search_2_clicked\0"
    "addToHistory\0action\0serviceName\0"
    "saveHistoryToFile\0on_pushButton_search_3_clicked\0"
    "on_pushButton_search_4_clicked\0arduinoo\0"
    "verifyCode\0data"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

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
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    2,   91,    2, 0x08 /* Private */,
       9,    1,   96,    2, 0x28 /* Private | MethodCloned */,
      12,    0,   99,    2, 0x08 /* Private */,
      13,    0,  100,    2, 0x08 /* Private */,
      14,    0,  101,    2, 0x08 /* Private */,
      15,    0,  102,    2, 0x08 /* Private */,
      16,    1,  103,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   10,   11,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString,   17,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_ajouter_clicked(); break;
        case 1: _t->on_pushButton_supprimer_clicked(); break;
        case 2: _t->on_pushButton_update_clicked(); break;
        case 3: _t->on_pushButton_search_clicked(); break;
        case 4: _t->extractToPdf(); break;
        case 5: _t->on_pushButton_refresh_clicked(); break;
        case 6: _t->on_pushButton_search_2_clicked(); break;
        case 7: _t->addToHistory((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: _t->addToHistory((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->saveHistoryToFile(); break;
        case 10: _t->on_pushButton_search_3_clicked(); break;
        case 11: _t->on_pushButton_search_4_clicked(); break;
        case 12: _t->arduinoo(); break;
        case 13: { bool _r = _t->verifyCode((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


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
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
