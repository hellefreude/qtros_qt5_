/********************************************************************************
** Form generated from reading UI file 'main_window.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowDesign
{
public:
    QAction *action_Quit;
    QAction *action_Preferences;
    QAction *actionAbout;
    QAction *actionAbout_Qt;
    QWidget *centralwidget;
    QHBoxLayout *hboxLayout;
    QTabWidget *tab_manager;
    QWidget *tab;
    QPushButton *base_module;
    QPushButton *arm_module;
    QPushButton *head_module;
    QPushButton *action_module;
    QPushButton *none_module;
    QListView *view_logging;
    QPushButton *initial_pose;
    QPushButton *x_plus;
    QPushButton *x_minus;
    QPushButton *y_plus;
    QPushButton *y_minus;
    QPushButton *z_minus;
    QPushButton *z_plus;
    QPushButton *roll_minus;
    QPushButton *roll_plus;
    QPushButton *pitch_minus;
    QPushButton *yaw_minus;
    QPushButton *yaw_plus;
    QPushButton *pitch_plus;
    QLineEdit *motion_num_line_edit;
    QPushButton *motion_num_send_button;
    QPushButton *quit;
    QPushButton *m1;
    QPushButton *m2;
    QPushButton *m3;
    QWidget *tab_3;
    QPushButton *button_tracking;
    QPushButton *button_manual;
    QLabel *label_yaw;
    QTextEdit *head_yaw;
    QLabel *label_pitch;
    QTextEdit *head_pitch;
    QTextEdit *head_roll;
    QLabel *label_roll;
    QPushButton *button_manual_send;
    QPushButton *quit_2;
    QListView *view_logging_2;
    QWidget *tab_2;
    QGroupBox *groupBox_2;
    QLineEdit *people_x1_line_edit;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *people_y1_line_edit;
    QLineEdit *people_z1_line_edit;
    QLineEdit *people_y2_line_edit;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *people_x2_line_edit;
    QLineEdit *people_z2_line_edit;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLineEdit *people_y3_line_edit;
    QLabel *label_12;
    QLineEdit *people_x3_line_edit;
    QLineEdit *people_z3_line_edit;
    QLineEdit *people_y4_line_edit;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLineEdit *people_z4_line_edit;
    QLineEdit *people_x4_line_edit;
    QPushButton *dummy_send_button;
    QGroupBox *groupBox_3;
    QLabel *label_16;
    QLineEdit *box_size_line_edit;
    QLabel *label_17;
    QLineEdit *pixel_x_line_edit;
    QLabel *label_18;
    QLineEdit *pixel_y_line_edit;
    QLabel *label_19;
    QLabel *label_20;
    QLineEdit *box_width_line_edit;
    QLineEdit *box_height_line_edit;
    QLabel *label_21;
    QLabel *label_22;
    QLineEdit *img_width_line_edit;
    QLineEdit *img_height_line_edit;
    QPushButton *quit_3;
    QListView *view_logging_3;
    QMenuBar *menubar;
    QMenu *menu_File;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindowDesign)
    {
        if (MainWindowDesign->objectName().isEmpty())
            MainWindowDesign->setObjectName(QString::fromUtf8("MainWindowDesign"));
        MainWindowDesign->resize(578, 758);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindowDesign->setWindowIcon(icon);
        MainWindowDesign->setLocale(QLocale(QLocale::English, QLocale::Australia));
        action_Quit = new QAction(MainWindowDesign);
        action_Quit->setObjectName(QString::fromUtf8("action_Quit"));
        action_Quit->setShortcutContext(Qt::ApplicationShortcut);
        action_Preferences = new QAction(MainWindowDesign);
        action_Preferences->setObjectName(QString::fromUtf8("action_Preferences"));
        actionAbout = new QAction(MainWindowDesign);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionAbout_Qt = new QAction(MainWindowDesign);
        actionAbout_Qt->setObjectName(QString::fromUtf8("actionAbout_Qt"));
        centralwidget = new QWidget(MainWindowDesign);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        hboxLayout = new QHBoxLayout(centralwidget);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        tab_manager = new QTabWidget(centralwidget);
        tab_manager->setObjectName(QString::fromUtf8("tab_manager"));
        tab_manager->setMinimumSize(QSize(100, 0));
        tab_manager->setLocale(QLocale(QLocale::English, QLocale::Australia));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        base_module = new QPushButton(tab);
        base_module->setObjectName(QString::fromUtf8("base_module"));
        base_module->setGeometry(QRect(10, 120, 170, 40));
        arm_module = new QPushButton(tab);
        arm_module->setObjectName(QString::fromUtf8("arm_module"));
        arm_module->setGeometry(QRect(230, 20, 150, 30));
        head_module = new QPushButton(tab);
        head_module->setObjectName(QString::fromUtf8("head_module"));
        head_module->setGeometry(QRect(390, 20, 150, 30));
        action_module = new QPushButton(tab);
        action_module->setObjectName(QString::fromUtf8("action_module"));
        action_module->setGeometry(QRect(10, 170, 170, 40));
        none_module = new QPushButton(tab);
        none_module->setObjectName(QString::fromUtf8("none_module"));
        none_module->setGeometry(QRect(10, 70, 170, 40));
        view_logging = new QListView(tab);
        view_logging->setObjectName(QString::fromUtf8("view_logging"));
        view_logging->setGeometry(QRect(10, 380, 535, 270));
        initial_pose = new QPushButton(tab);
        initial_pose->setObjectName(QString::fromUtf8("initial_pose"));
        initial_pose->setGeometry(QRect(10, 20, 170, 40));
        x_plus = new QPushButton(tab);
        x_plus->setObjectName(QString::fromUtf8("x_plus"));
        x_plus->setGeometry(QRect(250, 60, 40, 40));
        x_minus = new QPushButton(tab);
        x_minus->setObjectName(QString::fromUtf8("x_minus"));
        x_minus->setGeometry(QRect(320, 60, 40, 40));
        y_plus = new QPushButton(tab);
        y_plus->setObjectName(QString::fromUtf8("y_plus"));
        y_plus->setGeometry(QRect(250, 110, 40, 40));
        y_minus = new QPushButton(tab);
        y_minus->setObjectName(QString::fromUtf8("y_minus"));
        y_minus->setGeometry(QRect(320, 110, 40, 40));
        z_minus = new QPushButton(tab);
        z_minus->setObjectName(QString::fromUtf8("z_minus"));
        z_minus->setGeometry(QRect(320, 160, 40, 40));
        z_plus = new QPushButton(tab);
        z_plus->setObjectName(QString::fromUtf8("z_plus"));
        z_plus->setGeometry(QRect(250, 160, 40, 40));
        roll_minus = new QPushButton(tab);
        roll_minus->setObjectName(QString::fromUtf8("roll_minus"));
        roll_minus->setGeometry(QRect(480, 60, 40, 40));
        roll_plus = new QPushButton(tab);
        roll_plus->setObjectName(QString::fromUtf8("roll_plus"));
        roll_plus->setGeometry(QRect(410, 60, 40, 40));
        pitch_minus = new QPushButton(tab);
        pitch_minus->setObjectName(QString::fromUtf8("pitch_minus"));
        pitch_minus->setGeometry(QRect(480, 110, 40, 40));
        yaw_minus = new QPushButton(tab);
        yaw_minus->setObjectName(QString::fromUtf8("yaw_minus"));
        yaw_minus->setGeometry(QRect(480, 160, 40, 40));
        yaw_plus = new QPushButton(tab);
        yaw_plus->setObjectName(QString::fromUtf8("yaw_plus"));
        yaw_plus->setGeometry(QRect(410, 160, 40, 40));
        pitch_plus = new QPushButton(tab);
        pitch_plus->setObjectName(QString::fromUtf8("pitch_plus"));
        pitch_plus->setGeometry(QRect(410, 110, 40, 40));
        motion_num_line_edit = new QLineEdit(tab);
        motion_num_line_edit->setObjectName(QString::fromUtf8("motion_num_line_edit"));
        motion_num_line_edit->setGeometry(QRect(10, 230, 170, 40));
        motion_num_send_button = new QPushButton(tab);
        motion_num_send_button->setObjectName(QString::fromUtf8("motion_num_send_button"));
        motion_num_send_button->setGeometry(QRect(10, 330, 170, 40));
        quit = new QPushButton(tab);
        quit->setObjectName(QString::fromUtf8("quit"));
        quit->setGeometry(QRect(425, 330, 120, 40));
        m1 = new QPushButton(tab);
        m1->setObjectName(QString::fromUtf8("m1"));
        m1->setGeometry(QRect(20, 280, 40, 40));
        m2 = new QPushButton(tab);
        m2->setObjectName(QString::fromUtf8("m2"));
        m2->setGeometry(QRect(75, 280, 40, 40));
        m3 = new QPushButton(tab);
        m3->setObjectName(QString::fromUtf8("m3"));
        m3->setGeometry(QRect(130, 280, 40, 40));
        tab_manager->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        button_tracking = new QPushButton(tab_3);
        button_tracking->setObjectName(QString::fromUtf8("button_tracking"));
        button_tracking->setGeometry(QRect(30, 50, 241, 51));
        button_manual = new QPushButton(tab_3);
        button_manual->setObjectName(QString::fromUtf8("button_manual"));
        button_manual->setGeometry(QRect(290, 50, 231, 51));
        label_yaw = new QLabel(tab_3);
        label_yaw->setObjectName(QString::fromUtf8("label_yaw"));
        label_yaw->setGeometry(QRect(300, 140, 31, 17));
        head_yaw = new QTextEdit(tab_3);
        head_yaw->setObjectName(QString::fromUtf8("head_yaw"));
        head_yaw->setGeometry(QRect(350, 130, 171, 31));
        label_pitch = new QLabel(tab_3);
        label_pitch->setObjectName(QString::fromUtf8("label_pitch"));
        label_pitch->setGeometry(QRect(300, 180, 41, 17));
        head_pitch = new QTextEdit(tab_3);
        head_pitch->setObjectName(QString::fromUtf8("head_pitch"));
        head_pitch->setGeometry(QRect(350, 170, 171, 31));
        head_roll = new QTextEdit(tab_3);
        head_roll->setObjectName(QString::fromUtf8("head_roll"));
        head_roll->setGeometry(QRect(350, 210, 171, 31));
        label_roll = new QLabel(tab_3);
        label_roll->setObjectName(QString::fromUtf8("label_roll"));
        label_roll->setGeometry(QRect(300, 220, 41, 17));
        button_manual_send = new QPushButton(tab_3);
        button_manual_send->setObjectName(QString::fromUtf8("button_manual_send"));
        button_manual_send->setGeometry(QRect(380, 260, 141, 31));
        quit_2 = new QPushButton(tab_3);
        quit_2->setObjectName(QString::fromUtf8("quit_2"));
        quit_2->setGeometry(QRect(425, 330, 120, 40));
        view_logging_2 = new QListView(tab_3);
        view_logging_2->setObjectName(QString::fromUtf8("view_logging_2"));
        view_logging_2->setGeometry(QRect(10, 380, 535, 270));
        tab_manager->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 10, 331, 281));
        people_x1_line_edit = new QLineEdit(groupBox_2);
        people_x1_line_edit->setObjectName(QString::fromUtf8("people_x1_line_edit"));
        people_x1_line_edit->setGeometry(QRect(40, 30, 80, 20));
        people_x1_line_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 30, 30, 20));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 60, 30, 20));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 90, 30, 20));
        people_y1_line_edit = new QLineEdit(groupBox_2);
        people_y1_line_edit->setObjectName(QString::fromUtf8("people_y1_line_edit"));
        people_y1_line_edit->setGeometry(QRect(40, 60, 80, 20));
        people_y1_line_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        people_z1_line_edit = new QLineEdit(groupBox_2);
        people_z1_line_edit->setObjectName(QString::fromUtf8("people_z1_line_edit"));
        people_z1_line_edit->setGeometry(QRect(40, 90, 80, 20));
        people_z1_line_edit->setCursorPosition(1);
        people_z1_line_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        people_y2_line_edit = new QLineEdit(groupBox_2);
        people_y2_line_edit->setObjectName(QString::fromUtf8("people_y2_line_edit"));
        people_y2_line_edit->setGeometry(QRect(180, 60, 80, 20));
        people_y2_line_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(150, 60, 30, 20));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(150, 30, 30, 20));
        people_x2_line_edit = new QLineEdit(groupBox_2);
        people_x2_line_edit->setObjectName(QString::fromUtf8("people_x2_line_edit"));
        people_x2_line_edit->setGeometry(QRect(180, 30, 80, 20));
        people_x2_line_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        people_z2_line_edit = new QLineEdit(groupBox_2);
        people_z2_line_edit->setObjectName(QString::fromUtf8("people_z2_line_edit"));
        people_z2_line_edit->setGeometry(QRect(180, 90, 80, 20));
        people_z2_line_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(150, 90, 30, 20));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 160, 30, 20));
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 130, 30, 20));
        people_y3_line_edit = new QLineEdit(groupBox_2);
        people_y3_line_edit->setObjectName(QString::fromUtf8("people_y3_line_edit"));
        people_y3_line_edit->setGeometry(QRect(40, 160, 80, 20));
        people_y3_line_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(10, 190, 30, 20));
        people_x3_line_edit = new QLineEdit(groupBox_2);
        people_x3_line_edit->setObjectName(QString::fromUtf8("people_x3_line_edit"));
        people_x3_line_edit->setGeometry(QRect(40, 130, 80, 20));
        people_x3_line_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        people_z3_line_edit = new QLineEdit(groupBox_2);
        people_z3_line_edit->setObjectName(QString::fromUtf8("people_z3_line_edit"));
        people_z3_line_edit->setGeometry(QRect(40, 190, 80, 20));
        people_z3_line_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        people_y4_line_edit = new QLineEdit(groupBox_2);
        people_y4_line_edit->setObjectName(QString::fromUtf8("people_y4_line_edit"));
        people_y4_line_edit->setGeometry(QRect(180, 160, 80, 20));
        people_y4_line_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(150, 130, 30, 20));
        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(150, 160, 30, 20));
        label_15 = new QLabel(groupBox_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(150, 190, 30, 20));
        people_z4_line_edit = new QLineEdit(groupBox_2);
        people_z4_line_edit->setObjectName(QString::fromUtf8("people_z4_line_edit"));
        people_z4_line_edit->setGeometry(QRect(180, 190, 80, 20));
        people_z4_line_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        people_x4_line_edit = new QLineEdit(groupBox_2);
        people_x4_line_edit->setObjectName(QString::fromUtf8("people_x4_line_edit"));
        people_x4_line_edit->setGeometry(QRect(180, 130, 80, 20));
        people_x4_line_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        dummy_send_button = new QPushButton(tab_2);
        dummy_send_button->setObjectName(QString::fromUtf8("dummy_send_button"));
        dummy_send_button->setGeometry(QRect(405, 280, 140, 40));
        groupBox_3 = new QGroupBox(tab_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(330, 10, 201, 291));
        label_16 = new QLabel(groupBox_3);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(10, 30, 60, 20));
        box_size_line_edit = new QLineEdit(groupBox_3);
        box_size_line_edit->setObjectName(QString::fromUtf8("box_size_line_edit"));
        box_size_line_edit->setGeometry(QRect(90, 30, 80, 20));
        box_size_line_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_17 = new QLabel(groupBox_3);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(10, 60, 60, 20));
        pixel_x_line_edit = new QLineEdit(groupBox_3);
        pixel_x_line_edit->setObjectName(QString::fromUtf8("pixel_x_line_edit"));
        pixel_x_line_edit->setGeometry(QRect(90, 60, 80, 20));
        pixel_x_line_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_18 = new QLabel(groupBox_3);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(10, 90, 60, 20));
        pixel_y_line_edit = new QLineEdit(groupBox_3);
        pixel_y_line_edit->setObjectName(QString::fromUtf8("pixel_y_line_edit"));
        pixel_y_line_edit->setGeometry(QRect(90, 90, 80, 20));
        pixel_y_line_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_19 = new QLabel(groupBox_3);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(10, 120, 80, 20));
        label_20 = new QLabel(groupBox_3);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(10, 150, 80, 20));
        box_width_line_edit = new QLineEdit(groupBox_3);
        box_width_line_edit->setObjectName(QString::fromUtf8("box_width_line_edit"));
        box_width_line_edit->setGeometry(QRect(90, 120, 80, 20));
        box_width_line_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        box_height_line_edit = new QLineEdit(groupBox_3);
        box_height_line_edit->setObjectName(QString::fromUtf8("box_height_line_edit"));
        box_height_line_edit->setGeometry(QRect(90, 150, 80, 20));
        box_height_line_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_21 = new QLabel(groupBox_3);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(10, 180, 80, 20));
        label_22 = new QLabel(groupBox_3);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(10, 210, 80, 20));
        img_width_line_edit = new QLineEdit(groupBox_3);
        img_width_line_edit->setObjectName(QString::fromUtf8("img_width_line_edit"));
        img_width_line_edit->setGeometry(QRect(90, 180, 80, 20));
        img_width_line_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        img_height_line_edit = new QLineEdit(groupBox_3);
        img_height_line_edit->setObjectName(QString::fromUtf8("img_height_line_edit"));
        img_height_line_edit->setGeometry(QRect(90, 210, 80, 20));
        img_height_line_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        quit_3 = new QPushButton(tab_2);
        quit_3->setObjectName(QString::fromUtf8("quit_3"));
        quit_3->setGeometry(QRect(425, 330, 120, 40));
        view_logging_3 = new QListView(tab_2);
        view_logging_3->setObjectName(QString::fromUtf8("view_logging_3"));
        view_logging_3->setGeometry(QRect(10, 380, 535, 270));
        tab_manager->addTab(tab_2, QString());

        hboxLayout->addWidget(tab_manager);

        MainWindowDesign->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindowDesign);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 578, 25));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        MainWindowDesign->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindowDesign);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindowDesign->setStatusBar(statusbar);

        menubar->addAction(menu_File->menuAction());
        menu_File->addAction(action_Preferences);
        menu_File->addSeparator();
        menu_File->addAction(actionAbout);
        menu_File->addAction(actionAbout_Qt);
        menu_File->addSeparator();
        menu_File->addAction(action_Quit);

        retranslateUi(MainWindowDesign);
        QObject::connect(quit, SIGNAL(clicked(bool)), MainWindowDesign, SLOT(close()));

        tab_manager->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindowDesign);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowDesign)
    {
        MainWindowDesign->setWindowTitle(QApplication::translate("MainWindowDesign", "QRosApp", 0, QApplication::UnicodeUTF8));
        action_Quit->setText(QApplication::translate("MainWindowDesign", "&Quit", 0, QApplication::UnicodeUTF8));
        action_Quit->setShortcut(QApplication::translate("MainWindowDesign", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        action_Preferences->setText(QApplication::translate("MainWindowDesign", "&Preferences", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainWindowDesign", "&About", 0, QApplication::UnicodeUTF8));
        actionAbout_Qt->setText(QApplication::translate("MainWindowDesign", "About &Qt", 0, QApplication::UnicodeUTF8));
        base_module->setText(QApplication::translate("MainWindowDesign", "Base Module", 0, QApplication::UnicodeUTF8));
        arm_module->setText(QApplication::translate("MainWindowDesign", "Arm Module", 0, QApplication::UnicodeUTF8));
        head_module->setText(QApplication::translate("MainWindowDesign", "Head Module", 0, QApplication::UnicodeUTF8));
        action_module->setText(QApplication::translate("MainWindowDesign", "Action Module", 0, QApplication::UnicodeUTF8));
        none_module->setText(QApplication::translate("MainWindowDesign", "None module", 0, QApplication::UnicodeUTF8));
        initial_pose->setText(QApplication::translate("MainWindowDesign", "Initial Pose", 0, QApplication::UnicodeUTF8));
        x_plus->setText(QApplication::translate("MainWindowDesign", "X +", 0, QApplication::UnicodeUTF8));
        x_minus->setText(QApplication::translate("MainWindowDesign", "X -", 0, QApplication::UnicodeUTF8));
        y_plus->setText(QApplication::translate("MainWindowDesign", "Y +", 0, QApplication::UnicodeUTF8));
        y_minus->setText(QApplication::translate("MainWindowDesign", "Y -", 0, QApplication::UnicodeUTF8));
        z_minus->setText(QApplication::translate("MainWindowDesign", "Z -", 0, QApplication::UnicodeUTF8));
        z_plus->setText(QApplication::translate("MainWindowDesign", "Z +", 0, QApplication::UnicodeUTF8));
        roll_minus->setText(QApplication::translate("MainWindowDesign", "R -", 0, QApplication::UnicodeUTF8));
        roll_plus->setText(QApplication::translate("MainWindowDesign", "R +", 0, QApplication::UnicodeUTF8));
        pitch_minus->setText(QApplication::translate("MainWindowDesign", "P -", 0, QApplication::UnicodeUTF8));
        yaw_minus->setText(QApplication::translate("MainWindowDesign", "yaw-", 0, QApplication::UnicodeUTF8));
        yaw_plus->setText(QApplication::translate("MainWindowDesign", "yaw+", 0, QApplication::UnicodeUTF8));
        pitch_plus->setText(QApplication::translate("MainWindowDesign", "P +", 0, QApplication::UnicodeUTF8));
        motion_num_send_button->setText(QApplication::translate("MainWindowDesign", "Send", 0, QApplication::UnicodeUTF8));
        quit->setText(QApplication::translate("MainWindowDesign", "Quit", 0, QApplication::UnicodeUTF8));
        m1->setText(QApplication::translate("MainWindowDesign", "M1", 0, QApplication::UnicodeUTF8));
        m2->setText(QApplication::translate("MainWindowDesign", "M2", 0, QApplication::UnicodeUTF8));
        m3->setText(QApplication::translate("MainWindowDesign", "M3", 0, QApplication::UnicodeUTF8));
        tab_manager->setTabText(tab_manager->indexOf(tab), QApplication::translate("MainWindowDesign", "SSONIBOT", 0, QApplication::UnicodeUTF8));
        button_tracking->setText(QApplication::translate("MainWindowDesign", "Tracking", 0, QApplication::UnicodeUTF8));
        button_manual->setText(QApplication::translate("MainWindowDesign", "Manual", 0, QApplication::UnicodeUTF8));
        label_yaw->setText(QApplication::translate("MainWindowDesign", "yaw", 0, QApplication::UnicodeUTF8));
        label_pitch->setText(QApplication::translate("MainWindowDesign", "pitch", 0, QApplication::UnicodeUTF8));
        label_roll->setText(QApplication::translate("MainWindowDesign", "roll", 0, QApplication::UnicodeUTF8));
        button_manual_send->setText(QApplication::translate("MainWindowDesign", "Send Manual", 0, QApplication::UnicodeUTF8));
        quit_2->setText(QApplication::translate("MainWindowDesign", "Quit", 0, QApplication::UnicodeUTF8));
        tab_manager->setTabText(tab_manager->indexOf(tab_3), QApplication::translate("MainWindowDesign", "Head", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MainWindowDesign", "Dummy People", 0, QApplication::UnicodeUTF8));
        people_x1_line_edit->setText(QApplication::translate("MainWindowDesign", "0", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindowDesign", "X1", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindowDesign", "Y1", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindowDesign", "Z1", 0, QApplication::UnicodeUTF8));
        people_y1_line_edit->setText(QApplication::translate("MainWindowDesign", "0", 0, QApplication::UnicodeUTF8));
        people_z1_line_edit->setText(QApplication::translate("MainWindowDesign", "0", 0, QApplication::UnicodeUTF8));
        people_y2_line_edit->setText(QApplication::translate("MainWindowDesign", "0", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindowDesign", "Y2", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindowDesign", "X2", 0, QApplication::UnicodeUTF8));
        people_x2_line_edit->setText(QApplication::translate("MainWindowDesign", "0", 0, QApplication::UnicodeUTF8));
        people_z2_line_edit->setText(QApplication::translate("MainWindowDesign", "0", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindowDesign", "Z2", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindowDesign", "Y3", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindowDesign", "X3", 0, QApplication::UnicodeUTF8));
        people_y3_line_edit->setText(QApplication::translate("MainWindowDesign", "0", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindowDesign", "Z3", 0, QApplication::UnicodeUTF8));
        people_x3_line_edit->setText(QApplication::translate("MainWindowDesign", "0", 0, QApplication::UnicodeUTF8));
        people_z3_line_edit->setText(QApplication::translate("MainWindowDesign", "0", 0, QApplication::UnicodeUTF8));
        people_y4_line_edit->setText(QApplication::translate("MainWindowDesign", "0", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindowDesign", "X4", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindowDesign", "Y4", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("MainWindowDesign", "Z4", 0, QApplication::UnicodeUTF8));
        people_z4_line_edit->setText(QApplication::translate("MainWindowDesign", "0", 0, QApplication::UnicodeUTF8));
        people_x4_line_edit->setText(QApplication::translate("MainWindowDesign", "0", 0, QApplication::UnicodeUTF8));
        dummy_send_button->setText(QApplication::translate("MainWindowDesign", "Dummy Send", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("MainWindowDesign", "Dummy Pixel", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("MainWindowDesign", "box size", 0, QApplication::UnicodeUTF8));
        box_size_line_edit->setText(QApplication::translate("MainWindowDesign", "0", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("MainWindowDesign", "pixel X", 0, QApplication::UnicodeUTF8));
        pixel_x_line_edit->setText(QApplication::translate("MainWindowDesign", "0", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("MainWindowDesign", "pixel Y", 0, QApplication::UnicodeUTF8));
        pixel_y_line_edit->setText(QApplication::translate("MainWindowDesign", "0", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("MainWindowDesign", "box width", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("MainWindowDesign", "box height", 0, QApplication::UnicodeUTF8));
        box_width_line_edit->setText(QApplication::translate("MainWindowDesign", "0", 0, QApplication::UnicodeUTF8));
        box_height_line_edit->setText(QApplication::translate("MainWindowDesign", "0", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("MainWindowDesign", "img width", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("MainWindowDesign", "img height", 0, QApplication::UnicodeUTF8));
        img_width_line_edit->setText(QApplication::translate("MainWindowDesign", "0", 0, QApplication::UnicodeUTF8));
        img_height_line_edit->setText(QApplication::translate("MainWindowDesign", "0", 0, QApplication::UnicodeUTF8));
        quit_3->setText(QApplication::translate("MainWindowDesign", "Quit", 0, QApplication::UnicodeUTF8));
        tab_manager->setTabText(tab_manager->indexOf(tab_2), QApplication::translate("MainWindowDesign", "Algorithm Check", 0, QApplication::UnicodeUTF8));
        menu_File->setTitle(QApplication::translate("MainWindowDesign", "&App", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindowDesign: public Ui_MainWindowDesign {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
