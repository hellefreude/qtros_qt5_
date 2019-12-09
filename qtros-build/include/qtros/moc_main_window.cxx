/****************************************************************************
** Meta object code from reading C++ file 'main_window.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qtros_test/qtros/include/qtros/main_window.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main_window.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qtros__MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x0a,
      52,   46,   18,   18, 0x0a,
     104,   98,   18,   18, 0x0a,
     126,   18,   18,   18, 0x0a,
     151,   18,   18,   18, 0x0a,
     175,   18,   18,   18, 0x0a,
     200,   18,   18,   18, 0x0a,
     227,   18,   18,   18, 0x0a,
     253,   18,   18,   18, 0x0a,
     278,   18,   18,   18, 0x0a,
     298,   18,   18,   18, 0x0a,
     319,   18,   18,   18, 0x0a,
     339,   18,   18,   18, 0x0a,
     360,   18,   18,   18, 0x0a,
     380,   18,   18,   18, 0x0a,
     401,   18,   18,   18, 0x0a,
     424,   18,   18,   18, 0x0a,
     448,   18,   18,   18, 0x0a,
     472,   18,   18,   18, 0x0a,
     497,   18,   18,   18, 0x0a,
     519,   18,   18,   18, 0x0a,
     542,   18,   18,   18, 0x0a,
     578,   18,   18,   18, 0x0a,
     609,   18,   18,   18, 0x0a,
     641,   18,   18,   18, 0x0a,
     668,   18,   18,   18, 0x0a,
     697,   18,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_qtros__MainWindow[] = {
    "qtros::MainWindow\0\0on_actionAbout_triggered()\0"
    "state\0on_checkbox_use_environment_stateChanged(int)\0"
    "check\0on_quit_clicked(bool)\0"
    "on_base_module_clicked()\0"
    "on_arm_module_clicked()\0"
    "on_head_module_clicked()\0"
    "on_action_module_clicked()\0"
    "on_initial_pose_clicked()\0"
    "on_none_module_clicked()\0on_x_plus_clicked()\0"
    "on_x_minus_clicked()\0on_y_plus_clicked()\0"
    "on_y_minus_clicked()\0on_z_plus_clicked()\0"
    "on_z_minus_clicked()\0on_roll_plus_clicked()\0"
    "on_roll_minus_clicked()\0on_pitch_plus_clicked()\0"
    "on_pitch_minus_clicked()\0on_yaw_plus_clicked()\0"
    "on_yaw_minus_clicked()\0"
    "on_motion_num_send_button_clicked()\0"
    "on_dummy_send_button_clicked()\0"
    "on_button_manual_send_clicked()\0"
    "on_button_manual_clicked()\0"
    "on_button_tracking_clicked()\0"
    "updateLoggingView()\0"
};

void qtros::MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_actionAbout_triggered(); break;
        case 1: _t->on_checkbox_use_environment_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_quit_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_base_module_clicked(); break;
        case 4: _t->on_arm_module_clicked(); break;
        case 5: _t->on_head_module_clicked(); break;
        case 6: _t->on_action_module_clicked(); break;
        case 7: _t->on_initial_pose_clicked(); break;
        case 8: _t->on_none_module_clicked(); break;
        case 9: _t->on_x_plus_clicked(); break;
        case 10: _t->on_x_minus_clicked(); break;
        case 11: _t->on_y_plus_clicked(); break;
        case 12: _t->on_y_minus_clicked(); break;
        case 13: _t->on_z_plus_clicked(); break;
        case 14: _t->on_z_minus_clicked(); break;
        case 15: _t->on_roll_plus_clicked(); break;
        case 16: _t->on_roll_minus_clicked(); break;
        case 17: _t->on_pitch_plus_clicked(); break;
        case 18: _t->on_pitch_minus_clicked(); break;
        case 19: _t->on_yaw_plus_clicked(); break;
        case 20: _t->on_yaw_minus_clicked(); break;
        case 21: _t->on_motion_num_send_button_clicked(); break;
        case 22: _t->on_dummy_send_button_clicked(); break;
        case 23: _t->on_button_manual_send_clicked(); break;
        case 24: _t->on_button_manual_clicked(); break;
        case 25: _t->on_button_tracking_clicked(); break;
        case 26: _t->updateLoggingView(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qtros::MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qtros::MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_qtros__MainWindow,
      qt_meta_data_qtros__MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qtros::MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qtros::MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qtros::MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qtros__MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int qtros::MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
