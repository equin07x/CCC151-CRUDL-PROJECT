/********************************************************************************
** Form generated from reading UI file 'edit_students.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_STUDENTS_H
#define UI_EDIT_STUDENTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Edit_Students
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLineEdit *cLast_name;
    QLineEdit *cFirst_name;
    QLineEdit *cMiddle_name;
    QLineEdit *cID_number;
    QComboBox *cYearLevel;
    QComboBox *cGender;
    QComboBox *cCourse;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Edit_Students)
    {
        if (Edit_Students->objectName().isEmpty())
            Edit_Students->setObjectName("Edit_Students");
        Edit_Students->resize(544, 579);
        Edit_Students->setStyleSheet(QString::fromUtf8("background-color: rgb(34, 34, 34);"));
        centralwidget = new QWidget(Edit_Students);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 271, 21));
        label->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"font:16pt \"MS Reference Sans Serif\"rgb(255, 201, 8);\n"
"color: rgb(255, 170, 32);\n"
"}\n"
"QLabel:Hover\n"
"{\n"
"color:  rgb(35, 35, 35);\n"
"background-color: rgb(220, 182, 44);\n"
"}"));
        cLast_name = new QLineEdit(centralwidget);
        cLast_name->setObjectName("cLast_name");
        cLast_name->setGeometry(QRect(20, 70, 501, 31));
        cLast_name->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"font: 900 8pt \"MS Reference Sans Serif\"rgb(255, 201, 8);\n"
"color: rgb(255, 170, 32);\n"
"}\n"
"QLineEdit:Hover\n"
"{\n"
"color:  rgb(35, 35, 35);\n"
"background-color: rgb(220, 182, 44);\n"
"}"));
        cFirst_name = new QLineEdit(centralwidget);
        cFirst_name->setObjectName("cFirst_name");
        cFirst_name->setGeometry(QRect(20, 130, 501, 31));
        cFirst_name->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"font: 900 8pt \"MS Reference Sans Serif\"rgb(255, 201, 8);\n"
"color: rgb(255, 170, 32);\n"
"}\n"
"QLineEdit:Hover\n"
"{\n"
"color:  rgb(35, 35, 35);\n"
"background-color: rgb(220, 182, 44);\n"
"}"));
        cMiddle_name = new QLineEdit(centralwidget);
        cMiddle_name->setObjectName("cMiddle_name");
        cMiddle_name->setGeometry(QRect(20, 190, 501, 31));
        cMiddle_name->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"font: 900 8pt \"MS Reference Sans Serif\"rgb(255, 201, 8);\n"
"color: rgb(255, 170, 32);\n"
"}\n"
"QLineEdit:Hover\n"
"{\n"
"color:  rgb(35, 35, 35);\n"
"background-color: rgb(220, 182, 44);\n"
"}"));
        cID_number = new QLineEdit(centralwidget);
        cID_number->setObjectName("cID_number");
        cID_number->setGeometry(QRect(20, 250, 501, 31));
        cID_number->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"font: 900 8pt \"MS Reference Sans Serif\"rgb(255, 201, 8);\n"
"color: rgb(255, 170, 32);\n"
"}\n"
"QLineEdit:Hover\n"
"{\n"
"color:  rgb(35, 35, 35);\n"
"background-color: rgb(220, 182, 44);\n"
"}"));
        cYearLevel = new QComboBox(centralwidget);
        cYearLevel->setObjectName("cYearLevel");
        cYearLevel->setGeometry(QRect(20, 310, 501, 31));
        cYearLevel->setStyleSheet(QString::fromUtf8("QComboBox\n"
"{\n"
"font: 900 8pt \"MS Reference Sans Serif\"rgb(255, 201, 8);\n"
"color: rgb(255, 170, 32);\n"
"}"));
        cGender = new QComboBox(centralwidget);
        cGender->setObjectName("cGender");
        cGender->setGeometry(QRect(20, 370, 501, 31));
        cGender->setStyleSheet(QString::fromUtf8("QComboBox\n"
"{\n"
"font: 900 8pt \"MS Reference Sans Serif\"rgb(255, 201, 8);\n"
"color: rgb(255, 170, 32);\n"
"}"));
        cCourse = new QComboBox(centralwidget);
        cCourse->setObjectName("cCourse");
        cCourse->setGeometry(QRect(20, 430, 501, 31));
        cCourse->setStyleSheet(QString::fromUtf8("QComboBox\n"
"{\n"
"font: 900 8pt \"MS Reference Sans Serif\"rgb(255, 201, 8);\n"
"color: rgb(255, 170, 32);\n"
"}"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(390, 490, 131, 31));
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
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 50, 89, 18));
        label_2->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"font: 900 9pt \"MS Reference Sans Serif\"rgb(255, 201, 8);\n"
"color: rgb(255, 170, 32);\n"
"}"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 110, 91, 18));
        label_3->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"font: 900 9pt \"MS Reference Sans Serif\"rgb(255, 201, 8);\n"
"color: rgb(255, 170, 32);\n"
"}"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 170, 106, 18));
        label_4->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"font: 900 9pt \"MS Reference Sans Serif\"rgb(255, 201, 8);\n"
"color: rgb(255, 170, 32);\n"
"}"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(30, 230, 89, 18));
        label_5->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"font: 900 9pt \"MS Reference Sans Serif\"rgb(255, 201, 8);\n"
"color: rgb(255, 170, 32);\n"
"}"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(30, 290, 86, 18));
        label_6->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"font: 900 9pt \"MS Reference Sans Serif\"rgb(255, 201, 8);\n"
"color: rgb(255, 170, 32);\n"
"}"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(30, 350, 60, 18));
        label_7->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"font: 900 9pt \"MS Reference Sans Serif\"rgb(255, 201, 8);\n"
"color: rgb(255, 170, 32);\n"
"}"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(30, 410, 59, 18));
        label_8->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"font: 900 9pt \"MS Reference Sans Serif\"rgb(255, 201, 8);\n"
"color: rgb(255, 170, 32);\n"
"}"));
        Edit_Students->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Edit_Students);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 544, 25));
        Edit_Students->setMenuBar(menubar);
        statusbar = new QStatusBar(Edit_Students);
        statusbar->setObjectName("statusbar");
        Edit_Students->setStatusBar(statusbar);

        retranslateUi(Edit_Students);

        QMetaObject::connectSlotsByName(Edit_Students);
    } // setupUi

    void retranslateUi(QMainWindow *Edit_Students)
    {
        Edit_Students->setWindowTitle(QCoreApplication::translate("Edit_Students", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("Edit_Students", "Edit Student Profile", nullptr));
        pushButton->setText(QCoreApplication::translate("Edit_Students", "Done", nullptr));
        label_2->setText(QCoreApplication::translate("Edit_Students", "Last Name", nullptr));
        label_3->setText(QCoreApplication::translate("Edit_Students", "First Name", nullptr));
        label_4->setText(QCoreApplication::translate("Edit_Students", "Middle Name", nullptr));
        label_5->setText(QCoreApplication::translate("Edit_Students", "ID Number", nullptr));
        label_6->setText(QCoreApplication::translate("Edit_Students", "Year Level", nullptr));
        label_7->setText(QCoreApplication::translate("Edit_Students", "Gender", nullptr));
        label_8->setText(QCoreApplication::translate("Edit_Students", "Course", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Edit_Students: public Ui_Edit_Students {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_STUDENTS_H
