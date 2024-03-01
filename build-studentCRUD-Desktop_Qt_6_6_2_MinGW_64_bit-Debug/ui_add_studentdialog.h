/********************************************************************************
** Form generated from reading UI file 'add_studentdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_STUDENTDIALOG_H
#define UI_ADD_STUDENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Add_StudentDialog
{
public:
    QPushButton *Cancel_pushButton;
    QPushButton *pushButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLineEdit *SurName;
    QLabel *label_2;
    QLineEdit *FirstName;
    QLabel *label_4;
    QLineEdit *MiddleName;
    QLabel *label_5;
    QLineEdit *IDNumber;
    QLabel *label_6;
    QLineEdit *YearLevel;
    QLabel *label_7;
    QLineEdit *Gender;
    QLabel *label_8;
    QLineEdit *CourseCode;

    void setupUi(QDialog *Add_StudentDialog)
    {
        if (Add_StudentDialog->objectName().isEmpty())
            Add_StudentDialog->setObjectName("Add_StudentDialog");
        Add_StudentDialog->resize(535, 435);
        Add_StudentDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(34, 34, 34);"));
        Cancel_pushButton = new QPushButton(Add_StudentDialog);
        Cancel_pushButton->setObjectName("Cancel_pushButton");
        Cancel_pushButton->setGeometry(QRect(10, 10, 111, 21));
        Cancel_pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"font: 900 9pt \"Segoe UI Black\" rgb(255, 201, 8);\n"
"color: rgb(255, 170, 32);\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"color: rgb(255, 170, 32);\n"
"background-color: rgb(255, 201, 8);\n"
"}"));
        pushButton = new QPushButton(Add_StudentDialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(410, 410, 91, 21));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"font: 900 9pt \"Segoe UI Black\" rgb(255, 201, 8);\n"
"color: rgb(255, 170, 32);\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"color: rgb(255, 170, 32);\n"
"background-color: rgb(255, 201, 8);\n"
"}"));
        widget = new QWidget(Add_StudentDialog);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(40, 30, 461, 371));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        QFont font;
        font.setFamilies({QString::fromUtf8("Courier New")});
        font.setPointSize(12);
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("border: none;\n"
"background: none;\n"
"color: rgb(255, 170, 32);\n"
""));
        label_3->setTextFormat(Qt::PlainText);

        verticalLayout->addWidget(label_3);

        SurName = new QLineEdit(widget);
        SurName->setObjectName("SurName");
        SurName->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 246);"));

        verticalLayout->addWidget(SurName);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("border: none;\n"
"background: none;\n"
"color: rgb(255, 170, 32);\n"
""));
        label_2->setTextFormat(Qt::PlainText);

        verticalLayout->addWidget(label_2);

        FirstName = new QLineEdit(widget);
        FirstName->setObjectName("FirstName");
        FirstName->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 246);"));

        verticalLayout->addWidget(FirstName);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("border: none;\n"
"background: none;\n"
"color: rgb(255, 170, 32);\n"
""));
        label_4->setTextFormat(Qt::PlainText);

        verticalLayout->addWidget(label_4);

        MiddleName = new QLineEdit(widget);
        MiddleName->setObjectName("MiddleName");
        MiddleName->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 246);"));

        verticalLayout->addWidget(MiddleName);

        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("border: none;\n"
"background: none;\n"
"color: rgb(255, 170, 32);\n"
""));
        label_5->setTextFormat(Qt::PlainText);

        verticalLayout->addWidget(label_5);

        IDNumber = new QLineEdit(widget);
        IDNumber->setObjectName("IDNumber");
        IDNumber->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 246);"));

        verticalLayout->addWidget(IDNumber);

        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("border: none;\n"
"background: none;\n"
"color: rgb(255, 170, 32);\n"
""));
        label_6->setTextFormat(Qt::PlainText);

        verticalLayout->addWidget(label_6);

        YearLevel = new QLineEdit(widget);
        YearLevel->setObjectName("YearLevel");
        YearLevel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 246);"));

        verticalLayout->addWidget(YearLevel);

        label_7 = new QLabel(widget);
        label_7->setObjectName("label_7");
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("border: none;\n"
"background: none;\n"
"color: rgb(255, 170, 32);\n"
""));
        label_7->setTextFormat(Qt::PlainText);

        verticalLayout->addWidget(label_7);

        Gender = new QLineEdit(widget);
        Gender->setObjectName("Gender");
        Gender->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 246);"));

        verticalLayout->addWidget(Gender);

        label_8 = new QLabel(widget);
        label_8->setObjectName("label_8");
        label_8->setFont(font);
        label_8->setStyleSheet(QString::fromUtf8("border: none;\n"
"background: none;\n"
"color: rgb(255, 170, 32);\n"
""));
        label_8->setTextFormat(Qt::PlainText);

        verticalLayout->addWidget(label_8);

        CourseCode = new QLineEdit(widget);
        CourseCode->setObjectName("CourseCode");
        CourseCode->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 246);"));

        verticalLayout->addWidget(CourseCode);


        retranslateUi(Add_StudentDialog);

        QMetaObject::connectSlotsByName(Add_StudentDialog);
    } // setupUi

    void retranslateUi(QDialog *Add_StudentDialog)
    {
        Add_StudentDialog->setWindowTitle(QCoreApplication::translate("Add_StudentDialog", "Student Information Setup \342\200\224 Add Student", nullptr));
        Cancel_pushButton->setText(QCoreApplication::translate("Add_StudentDialog", "Cancel", nullptr));
        pushButton->setText(QCoreApplication::translate("Add_StudentDialog", "Done", nullptr));
        label_3->setText(QCoreApplication::translate("Add_StudentDialog", "Last Name", nullptr));
        label_2->setText(QCoreApplication::translate("Add_StudentDialog", "First Name", nullptr));
        label_4->setText(QCoreApplication::translate("Add_StudentDialog", "Middle Name", nullptr));
        label_5->setText(QCoreApplication::translate("Add_StudentDialog", "ID Number", nullptr));
        label_6->setText(QCoreApplication::translate("Add_StudentDialog", "Year Level", nullptr));
        label_7->setText(QCoreApplication::translate("Add_StudentDialog", "Gender", nullptr));
        label_8->setText(QCoreApplication::translate("Add_StudentDialog", "Course Code", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Add_StudentDialog: public Ui_Add_StudentDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_STUDENTDIALOG_H
