/********************************************************************************
** Form generated from reading UI file 'add_coursesdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_COURSESDIALOG_H
#define UI_ADD_COURSESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Add_CoursesDialog
{
public:
    QPushButton *Cancel_button;
    QPushButton *Done_button;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *CourseCode;
    QLabel *label_2;
    QLineEdit *CourseName;

    void setupUi(QDialog *Add_CoursesDialog)
    {
        if (Add_CoursesDialog->objectName().isEmpty())
            Add_CoursesDialog->setObjectName("Add_CoursesDialog");
        Add_CoursesDialog->resize(527, 311);
        Add_CoursesDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(34, 34, 34);"));
        Cancel_button = new QPushButton(Add_CoursesDialog);
        Cancel_button->setObjectName("Cancel_button");
        Cancel_button->setGeometry(QRect(20, 20, 101, 21));
        Cancel_button->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"font: 900 9pt \"Segoe UI Black\" rgb(255, 201, 8);\n"
"color: rgb(255, 170, 32);\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"color: rgb(255, 170, 32);\n"
"background-color: rgb(255, 201, 8);\n"
"}"));
        Done_button = new QPushButton(Add_CoursesDialog);
        Done_button->setObjectName("Done_button");
        Done_button->setGeometry(QRect(390, 210, 101, 21));
        Done_button->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"font: 900 9pt \"Segoe UI Black\" rgb(255, 201, 8);\n"
"color: rgb(255, 170, 32);\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"color: rgb(255, 170, 32);\n"
"background-color: rgb(255, 201, 8);\n"
"}"));
        widget = new QWidget(Add_CoursesDialog);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(40, 60, 451, 141));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Courier New")});
        font.setPointSize(14);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("border: none;\n"
"background: none;\n"
"color: rgb(255, 170, 32);\n"
""));
        label->setTextFormat(Qt::PlainText);

        verticalLayout->addWidget(label);

        CourseCode = new QLineEdit(widget);
        CourseCode->setObjectName("CourseCode");
        CourseCode->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 246);"));

        verticalLayout->addWidget(CourseCode);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("border: none;\n"
"background: none;\n"
"color: rgb(255, 170, 32);\n"
""));
        label_2->setTextFormat(Qt::PlainText);

        verticalLayout->addWidget(label_2);

        CourseName = new QLineEdit(widget);
        CourseName->setObjectName("CourseName");
        CourseName->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 246);"));

        verticalLayout->addWidget(CourseName);


        retranslateUi(Add_CoursesDialog);

        QMetaObject::connectSlotsByName(Add_CoursesDialog);
    } // setupUi

    void retranslateUi(QDialog *Add_CoursesDialog)
    {
        Add_CoursesDialog->setWindowTitle(QCoreApplication::translate("Add_CoursesDialog", "Student Information Setup \342\200\224 Add Course", nullptr));
        Cancel_button->setText(QCoreApplication::translate("Add_CoursesDialog", "Cancel", nullptr));
        Done_button->setText(QCoreApplication::translate("Add_CoursesDialog", "Done", nullptr));
        label->setText(QCoreApplication::translate("Add_CoursesDialog", "Course Code", nullptr));
        label_2->setText(QCoreApplication::translate("Add_CoursesDialog", "Course Name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Add_CoursesDialog: public Ui_Add_CoursesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_COURSESDIALOG_H
