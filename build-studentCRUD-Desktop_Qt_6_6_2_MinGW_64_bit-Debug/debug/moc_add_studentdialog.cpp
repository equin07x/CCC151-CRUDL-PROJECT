/****************************************************************************
** Meta object code from reading C++ file 'add_studentdialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../studentCRUD/add_studentdialog.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'add_studentdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSAdd_StudentDialogENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSAdd_StudentDialogENDCLASS = QtMocHelpers::stringData(
    "Add_StudentDialog",
    "write_student_csv",
    "",
    "on_Cancel_pushButton_clicked",
    "on_pushButton_clicked",
    "Check_Courses",
    "QString&",
    "courseCode"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSAdd_StudentDialogENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[18];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[29];
    char stringdata4[22];
    char stringdata5[14];
    char stringdata6[9];
    char stringdata7[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSAdd_StudentDialogENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSAdd_StudentDialogENDCLASS_t qt_meta_stringdata_CLASSAdd_StudentDialogENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "Add_StudentDialog"
        QT_MOC_LITERAL(18, 17),  // "write_student_csv"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 28),  // "on_Cancel_pushButton_clicked"
        QT_MOC_LITERAL(66, 21),  // "on_pushButton_clicked"
        QT_MOC_LITERAL(88, 13),  // "Check_Courses"
        QT_MOC_LITERAL(102, 8),  // "QString&"
        QT_MOC_LITERAL(111, 10)   // "courseCode"
    },
    "Add_StudentDialog",
    "write_student_csv",
    "",
    "on_Cancel_pushButton_clicked",
    "on_pushButton_clicked",
    "Check_Courses",
    "QString&",
    "courseCode"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAdd_StudentDialogENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x08,    1 /* Private */,
       3,    0,   39,    2, 0x08,    2 /* Private */,
       4,    0,   40,    2, 0x08,    3 /* Private */,
       5,    1,   41,    2, 0x08,    4 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 6,    7,

       0        // eod
};

Q_CONSTINIT const QMetaObject Add_StudentDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSAdd_StudentDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAdd_StudentDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAdd_StudentDialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Add_StudentDialog, std::true_type>,
        // method 'write_student_csv'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Cancel_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Check_Courses'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString &, std::false_type>
    >,
    nullptr
} };

void Add_StudentDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Add_StudentDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->write_student_csv(); break;
        case 1: _t->on_Cancel_pushButton_clicked(); break;
        case 2: _t->on_pushButton_clicked(); break;
        case 3: { bool _r = _t->Check_Courses((*reinterpret_cast< std::add_pointer_t<QString&>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *Add_StudentDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Add_StudentDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAdd_StudentDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Add_StudentDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
