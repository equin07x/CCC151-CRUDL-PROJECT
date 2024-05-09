/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTableView *tableView;
    QLabel *Title;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *SurName;
    QLineEdit *FirstName;
    QLineEdit *MiddleName;
    QLabel *label_4;
    QLineEdit *IDNumber;
    QComboBox *YearLevel;
    QLabel *label_5;
    QComboBox *Gender;
    QLabel *label_6;
    QComboBox *CourseCode_2;
    QLabel *label_7;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *Add_Students;
    QLabel *label_8;
    QLineEdit *CourseCode;
    QLabel *label_9;
    QLineEdit *CourseName;
    QPushButton *Add_Courses;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QLineEdit *searchLineEdit;
    QPushButton *searchButton;
    QPushButton *searchcourses;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1272, 687);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(34, 34, 34);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(20, 120, 931, 461));
        tableView->setStyleSheet(QString::fromUtf8("QTableView\n"
"{\n"
"font: 900 11.5pt \"Segoe UI Variable Text Light\"  rgb(255, 201, 8);\n"
"color: rgb(204, 175, 58)\n"
"}"));
        Title = new QLabel(centralwidget);
        Title->setObjectName("Title");
        Title->setGeometry(QRect(110, -10, 651, 51));
        Title->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"font:23pt \"MS Reference Sans Serif\"rgb(255, 201, 8);\n"
"color: rgb(255, 170, 32);\n"
"}\n"
"QLabel:Hover\n"
"{\n"
"color:  rgb(35, 35, 35);\n"
"background-color: rgb(220, 182, 44);\n"
"}"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(750, 590, 171, 51));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"font: 900 8pt \"MS Reference Sans Serif\"rgb(255, 201, 8);\n"
"color: rgb(255, 170, 32);\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"color:  rgb(35, 35, 35);\n"
"background-color: rgb(220, 182, 44);\n"
"}"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(971, 2, 111, 31));
        label->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"font: 900 8pt \"MS Reference Sans Serif\"rgb(255, 201, 8);\n"
"color: rgb(255, 170, 32);\n"
"}"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(971, 68, 80, 16));
        label_2->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"font: 900 8pt \"MS Reference Sans Serif\"rgb(255, 201, 8);\n"
"color: rgb(255, 170, 32);\n"
"}"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(970, 130, 93, 16));
        label_3->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"font: 900 8pt \"MS Reference Sans Serif\"rgb(255, 201, 8);\n"
"color: rgb(255, 170, 32);\n"
"}"));
        SurName = new QLineEdit(centralwidget);
        SurName->setObjectName("SurName");
        SurName->setGeometry(QRect(970, 30, 281, 31));
        SurName->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"font: 900 8pt \"MS Reference Sans Serif\"rgb(255, 201, 8);\n"
"color: rgb(255, 170, 32);\n"
"}\n"
"QLineEdit:Hover\n"
"{\n"
"color:  rgb(35, 35, 35);\n"
"background-color: rgb(220, 182, 44);\n"
"}"));
        FirstName = new QLineEdit(centralwidget);
        FirstName->setObjectName("FirstName");
        FirstName->setGeometry(QRect(970, 90, 281, 31));
        FirstName->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"font: 900 8pt \"MS Reference Sans Serif\"rgb(255, 201, 8);\n"
"color: rgb(255, 170, 32);\n"
"}\n"
"QLineEdit:Hover\n"
"{\n"
"color:  rgb(35, 35, 35);\n"
"background-color: rgb(220, 182, 44);\n"
"}"));
        MiddleName = new QLineEdit(centralwidget);
        MiddleName->setObjectName("MiddleName");
        MiddleName->setGeometry(QRect(970, 150, 281, 31));
        MiddleName->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"font: 900 8pt \"MS Reference Sans Serif\"rgb(255, 201, 8);\n"
"color: rgb(255, 170, 32);\n"
"}\n"
"QLineEdit:Hover\n"
"{\n"
"color:  rgb(35, 35, 35);\n"
"background-color: rgb(220, 182, 44);\n"
"}"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(970, 190, 77, 16));
        label_4->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"font: 900 8pt \"MS Reference Sans Serif\"rgb(255, 201, 8);\n"
"color: rgb(255, 170, 32);\n"
"}"));
        IDNumber = new QLineEdit(centralwidget);
        IDNumber->setObjectName("IDNumber");
        IDNumber->setGeometry(QRect(970, 210, 281, 31));
        IDNumber->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"font: 900 8pt \"MS Reference Sans Serif\"rgb(255, 201, 8);\n"
"color: rgb(255, 170, 32);\n"
"}\n"
"QLineEdit:Hover\n"
"{\n"
"color:  rgb(35, 35, 35);\n"
"background-color: rgb(220, 182, 44);\n"
"}"));
        YearLevel = new QComboBox(centralwidget);
        YearLevel->setObjectName("YearLevel");
        YearLevel->setGeometry(QRect(970, 270, 281, 31));
        YearLevel->setStyleSheet(QString::fromUtf8("QComboBox\n"
"{\n"
"font: 900 8pt \"MS Reference Sans Serif\"rgb(255, 201, 8);\n"
"color: rgb(255, 170, 32);\n"
"}"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(970, 250, 79, 16));
        label_5->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"font: 900 8pt \"MS Reference Sans Serif\"rgb(255, 201, 8);\n"
"color: rgb(255, 170, 32);\n"
"}"));
        Gender = new QComboBox(centralwidget);
        Gender->setObjectName("Gender");
        Gender->setGeometry(QRect(970, 330, 281, 31));
        Gender->setStyleSheet(QString::fromUtf8("QComboBox\n"
"{\n"
"font: 900 8pt \"MS Reference Sans Serif\"rgb(255, 201, 8);\n"
"color: rgb(255, 170, 32);\n"
"}"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(970, 310, 61, 16));
        label_6->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"font: 900 8pt \"MS Reference Sans Serif\"rgb(255, 201, 8);\n"
"color: rgb(255, 170, 32);\n"
"}"));
        CourseCode_2 = new QComboBox(centralwidget);
        CourseCode_2->setObjectName("CourseCode_2");
        CourseCode_2->setGeometry(QRect(970, 390, 281, 31));
        CourseCode_2->setStyleSheet(QString::fromUtf8("QComboBox\n"
"{\n"
"font: 900 8pt \"MS Reference Sans Serif\"rgb(255, 201, 8);\n"
"color: rgb(255, 170, 32);\n"
"}\n"
""));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(970, 370, 51, 16));
        label_7->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"font: 900 8pt \"MS Reference Sans Serif\"rgb(255, 201, 8);\n"
"color: rgb(255, 170, 32);\n"
"}"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(30, 590, 171, 51));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"font: 900 8pt \"MS Reference Sans Serif\"rgb(255, 201, 8);\n"
"color: rgb(255, 170, 32);\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"color:  rgb(35, 35, 35);\n"
"background-color: rgb(220, 182, 44);\n"
"}"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(210, 590, 171, 51));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"font: 900 8pt \"MS Reference Sans Serif\"rgb(255, 201, 8);\n"
"color: rgb(255, 170, 32);\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"color:  rgb(35, 35, 35);\n"
"background-color: rgb(220, 182, 44);\n"
"}"));
        Add_Students = new QPushButton(centralwidget);
        Add_Students->setObjectName("Add_Students");
        Add_Students->setGeometry(QRect(1090, 430, 161, 31));
        Add_Students->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"font: 900 8pt \"MS Reference Sans Serif\"rgb(255, 201, 8);\n"
"color: rgb(255, 170, 32);\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"color:  rgb(35, 35, 35);\n"
"background-color: rgb(220, 182, 44);\n"
"}"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(970, 460, 111, 31));
        label_8->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"font: 900 8pt \"MS Reference Sans Serif\"rgb(255, 201, 8);\n"
"color: rgb(255, 170, 32);\n"
"}"));
        CourseCode = new QLineEdit(centralwidget);
        CourseCode->setObjectName("CourseCode");
        CourseCode->setGeometry(QRect(970, 490, 281, 31));
        CourseCode->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"font: 900 8pt \"MS Reference Sans Serif\"rgb(255, 201, 8);\n"
"color: rgb(255, 170, 32);\n"
"}\n"
"QLineEdit:Hover\n"
"{\n"
"color:  rgb(35, 35, 35);\n"
"background-color: rgb(220, 182, 44);\n"
"}"));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(970, 530, 111, 31));
        label_9->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"font: 900 8pt \"MS Reference Sans Serif\"rgb(255, 201, 8);\n"
"color: rgb(255, 170, 32);\n"
"}"));
        CourseName = new QLineEdit(centralwidget);
        CourseName->setObjectName("CourseName");
        CourseName->setGeometry(QRect(970, 560, 281, 31));
        CourseName->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"font: 900 8pt \"MS Reference Sans Serif\"rgb(255, 201, 8);\n"
"color: rgb(255, 170, 32);\n"
"}\n"
"QLineEdit:Hover\n"
"{\n"
"color:  rgb(35, 35, 35);\n"
"background-color: rgb(220, 182, 44);\n"
"}"));
        Add_Courses = new QPushButton(centralwidget);
        Add_Courses->setObjectName("Add_Courses");
        Add_Courses->setGeometry(QRect(1090, 600, 161, 31));
        Add_Courses->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"font: 900 8pt \"MS Reference Sans Serif\"rgb(255, 201, 8);\n"
"color: rgb(255, 170, 32);\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"color:  rgb(35, 35, 35);\n"
"background-color: rgb(220, 182, 44);\n"
"}"));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(570, 590, 171, 51));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"font: 900 8pt \"MS Reference Sans Serif\"rgb(255, 201, 8);\n"
"color: rgb(255, 170, 32);\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"color:  rgb(35, 35, 35);\n"
"background-color: rgb(220, 182, 44);\n"
"}"));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(390, 590, 171, 51));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"font: 900 8pt \"MS Reference Sans Serif\"rgb(255, 201, 8);\n"
"color: rgb(255, 170, 32);\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"color:  rgb(35, 35, 35);\n"
"background-color: rgb(220, 182, 44);\n"
"}"));
        searchLineEdit = new QLineEdit(centralwidget);
        searchLineEdit->setObjectName("searchLineEdit");
        searchLineEdit->setGeometry(QRect(20, 40, 801, 71));
        searchLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"font: 900 16pt \"MS Reference Sans Serif\"rgb(255, 201, 8);\n"
"color: rgb(255, 170, 32);\n"
"}\n"
"QLineEdit:Hover\n"
"{\n"
"color:  rgb(35, 35, 35);\n"
"background-color: rgb(220, 182, 44);\n"
"}"));
        searchButton = new QPushButton(centralwidget);
        searchButton->setObjectName("searchButton");
        searchButton->setGeometry(QRect(830, 40, 121, 31));
        searchButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"font: 900 8pt \"MS Reference Sans Serif\"rgb(255, 201, 8);\n"
"color: rgb(255, 170, 32);\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"color:  rgb(35, 35, 35);\n"
"background-color: rgb(220, 182, 44);\n"
"}"));
        searchcourses = new QPushButton(centralwidget);
        searchcourses->setObjectName("searchcourses");
        searchcourses->setGeometry(QRect(830, 80, 121, 31));
        searchcourses->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"font: 900 8pt \"MS Reference Sans Serif\"rgb(255, 201, 8);\n"
"color: rgb(255, 170, 32);\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"color:  rgb(35, 35, 35);\n"
"background-color: rgb(220, 182, 44);\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1272, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Title->setText(QCoreApplication::translate("MainWindow", "SIMPLE STUDENT INFORMATION SYSTEM", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Delete Students", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Last Name", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "First Name", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Middle Name", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "ID Number", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Year Level", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Gender", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Course", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Load Students", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Load Courses", nullptr));
        Add_Students->setText(QCoreApplication::translate("MainWindow", "Add Student", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Course Code", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Course Name", nullptr));
        Add_Courses->setText(QCoreApplication::translate("MainWindow", "Add Course", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Delete Courses", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        searchButton->setText(QCoreApplication::translate("MainWindow", "Search Student", nullptr));
        searchcourses->setText(QCoreApplication::translate("MainWindow", "Search Courses", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
