/****************************************************************************
** Meta object code from reading C++ file 'CRealTimeFaultsWarnningDialog.h'
**
** Created: Wed Nov 19 11:34:56 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "CRealTimeFaultsWarnningDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CRealTimeFaultsWarnningDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CRealTimeFaultsWarnningDialog[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      31,   30,   30,   30, 0x08,
      57,   30,   30,   30, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CRealTimeFaultsWarnningDialog[] = {
    "CRealTimeFaultsWarnningDialog\0\0"
    "on_pushButton_2_clicked()\0"
    "on_pushButton_clicked()\0"
};

const QMetaObject CRealTimeFaultsWarnningDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CRealTimeFaultsWarnningDialog,
      qt_meta_data_CRealTimeFaultsWarnningDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CRealTimeFaultsWarnningDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CRealTimeFaultsWarnningDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CRealTimeFaultsWarnningDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CRealTimeFaultsWarnningDialog))
        return static_cast<void*>(const_cast< CRealTimeFaultsWarnningDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int CRealTimeFaultsWarnningDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButton_2_clicked(); break;
        case 1: on_pushButton_clicked(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
