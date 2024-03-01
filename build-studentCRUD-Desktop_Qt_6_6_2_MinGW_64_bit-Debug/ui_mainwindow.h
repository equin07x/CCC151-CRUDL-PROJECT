/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
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
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *addCourses;
    QTableView *tableView;
    QPushButton *loadStudents;
    QPushButton *addStudents;
    QPushButton *loadCourses;
    QPushButton *deleteStudents;
    QPushButton *deleteStudents_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        QFont font;
        font.setFamilies({QString::fromUtf8("Courier New")});
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(34, 34, 34);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(22, 22, 761, 541));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        addCourses = new QPushButton(widget);
        addCourses->setObjectName("addCourses");
        addCourses->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"font: 900 9pt \"Segoe UI Black\" rgb(255, 201, 8);\n"
"color: rgb(255, 170, 32);\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"color: rgb(255, 170, 32);\n"
"background-color: rgb(255, 201, 8);\n"
"}"));

        gridLayout->addWidget(addCourses, 1, 3, 1, 1);

        tableView = new QTableView(widget);
        tableView->setObjectName("tableView");
        tableView->setStyleSheet(QString::fromUtf8("font: 500 10pt \"Dubai Medium\";\n"
"selection-background-color: rgb(46, 46, 46);\n"
"gridline-color: rgb(39, 39, 39);\n"
"color: rgb(255, 209, 23);\n"
"background-color: qlineargradient(spread:pad, x1:0.909091, y1:0.988636, x2:0.977273, y2:0, stop:0.386364 rgba(14, 13, 13, 204), stop:1 rgba(161, 161, 161, 255));\n"
"border-color: rgb(34, 34, 34);\n"
"selection-color: rgb(255, 187, 78);\n"
"border-top-color: rgb(54, 54, 54);\n"
"border-right-color: rgb(42, 42, 42);"));

        gridLayout->addWidget(tableView, 2, 0, 1, 6);

        loadStudents = new QPushButton(widget);
        loadStudents->setObjectName("loadStudents");
        loadStudents->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"font: 900 9pt \"Segoe UI Black\" rgb(255, 201, 8);\n"
"color: rgb(255, 170, 32);\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"color: rgb(255, 170, 32);\n"
"background-color: rgb(255, 201, 8);\n"
"}"));

        gridLayout->addWidget(loadStudents, 1, 0, 1, 1);

        addStudents = new QPushButton(widget);
        addStudents->setObjectName("addStudents");
        addStudents->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"font: 900 9pt \"Segoe UI Black\" rgb(255, 201, 8);\n"
"color: rgb(255, 170, 32);\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"color: rgb(255, 170, 32);\n"
"background-color: rgb(255, 201, 8);\n"
"}"));

        gridLayout->addWidget(addStudents, 1, 2, 1, 1);

        loadCourses = new QPushButton(widget);
        loadCourses->setObjectName("loadCourses");
        loadCourses->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"font: 900 9pt \"Segoe UI Black\" rgb(255, 201, 8);\n"
"color: rgb(255, 170, 32);\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"color: rgb(255, 170, 32);\n"
"background-color: rgb(255, 201, 8);\n"
"}"));

        gridLayout->addWidget(loadCourses, 1, 1, 1, 1);

        deleteStudents = new QPushButton(widget);
        deleteStudents->setObjectName("deleteStudents");
        deleteStudents->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"font: 900 9pt \"Segoe UI Black\" rgb(255, 201, 8);\n"
"color: rgb(255, 170, 32);\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"color: rgb(255, 170, 32);\n"
"background-color: rgb(255, 201, 8);\n"
"}"));

        gridLayout->addWidget(deleteStudents, 1, 4, 1, 1);

        deleteStudents_2 = new QPushButton(widget);
        deleteStudents_2->setObjectName("deleteStudents_2");
        deleteStudents_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"font: 900 9pt \"Segoe UI Black\" rgb(255, 201, 8);\n"
"color: rgb(255, 170, 32);\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"color: rgb(255, 170, 32);\n"
"background-color: rgb(255, 201, 8);\n"
"}"));

        gridLayout->addWidget(deleteStudents_2, 1, 5, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Student Information Setup", nullptr));
        addCourses->setText(QCoreApplication::translate("MainWindow", "Add Courses", nullptr));
        loadStudents->setText(QCoreApplication::translate("MainWindow", "Load Students", nullptr));
        addStudents->setText(QCoreApplication::translate("MainWindow", "Add Students", nullptr));
        loadCourses->setText(QCoreApplication::translate("MainWindow", "Load Courses", nullptr));
        deleteStudents->setText(QCoreApplication::translate("MainWindow", "Remove Student", nullptr));
        deleteStudents_2->setText(QCoreApplication::translate("MainWindow", "Remove Course", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
