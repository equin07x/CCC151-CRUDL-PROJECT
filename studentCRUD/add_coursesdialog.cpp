
#include "add_coursesdialog.h"
#include "ui_add_coursesdialog.h"
#include "mainwindow.h"

#include <QDebug>
#include <QStandardItemModel>
#include <QMessageBox>
#include <QFileDialog>
#include <QTextStream>
#include <QFile>
#include <QTextEdit>

Add_CoursesDialog::Add_CoursesDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Add_CoursesDialog)
{
    ui->setupUi(this);
}

Add_CoursesDialog::~Add_CoursesDialog()
{
    delete ui;
}


void Add_CoursesDialog::on_Cancel_button_clicked()
{
    this->hide();
    QWidget *parent = this->parentWidget();
    parent->show();
}

void Add_CoursesDialog::write_courses_csv()
{
    QString courseCode = ui->CourseCode->text();
    QString courseName = ui->CourseName->text();

    QFile csvFile("C:/Users/Administrator/Documents/QT CREATOR PROJECTS/studentCRUD/CSV_files/Courses.csv");
    if (csvFile.open(QIODevice::ReadWrite | QIODevice::Append ))
    {
        QTextStream out(&csvFile);
        out << courseCode << "," << courseName;
    }
    csvFile.close();
}

void Add_CoursesDialog::on_Done_button_clicked()
{
    write_courses_csv();
    this->hide();
    QWidget *parent = this->parentWidget();
    parent->show();
}
