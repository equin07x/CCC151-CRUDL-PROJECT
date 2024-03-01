
#include "add_studentdialog.h"
#include "ui_add_studentdialog.h"
#include "mainwindow.h"


#include <QStandardItemModel>
#include <QMessageBox>
#include <QFileDialog>
#include <QTextStream>
#include <QFile>
#include <QTextEdit>

Add_StudentDialog::Add_StudentDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Add_StudentDialog)
{
    ui->setupUi(this);
}

Add_StudentDialog::~Add_StudentDialog()
{
    delete ui;
}

void Add_StudentDialog::on_Cancel_pushButton_clicked()
{
    this->hide();
    QWidget *parent = this->parentWidget();
    parent->show();
}

void Add_StudentDialog::write_student_csv()
{
    QString surName = ui->SurName->text();
    QString firstName = ui->FirstName->text();
    QString middleName = ui->MiddleName->text();
    QString idNumber = ui->IDNumber->text();
    QString yearLevel = ui->YearLevel->text();
    QString gender = ui->Gender->text();
    QString courseCode = ui->CourseCode->text();

    if(!Check_Courses(courseCode))
    {
        QMessageBox::warning(this, "Invalid input" , "Course Does not exist.");
        QFile csvFile("C:/Users/Administrator/Documents/QT CREATOR PROJECTS/studentCRUD/CSV_files/Students.csv");
        if (csvFile.open(QIODevice::ReadWrite | QIODevice::Append ))
        {
            QTextStream out(&csvFile);
            out << surName << "," << firstName << "," << middleName << "," << idNumber << "," << yearLevel << "," << gender << "," << "Error Course";
        }
        csvFile.close();
    }
    else
    {
        QFile csvFile("C:/Users/Administrator/Documents/QT CREATOR PROJECTS/studentCRUD/CSV_files/Students.csv");
        if (csvFile.open(QIODevice::ReadWrite | QIODevice::Append ))
        {
            QTextStream out(&csvFile);
            out << surName << "," << firstName << "," << middleName << "," << idNumber << "," << yearLevel << "," << gender << "," << courseCode;
        }
        csvFile.close();
    }
}

void Add_StudentDialog::on_pushButton_clicked()
{
    write_student_csv();
    this->hide();
    QWidget *parent = this->parentWidget();
    parent->show();
}

bool Add_StudentDialog::Check_Courses(QString &courseCode)
{
    QString filePath = "C:/Users/Administrator/Documents/QT CREATOR PROJECTS/studentCRUD/CSV_files/Courses.csv";
    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Could not open file";
        return false;
    }

    QTextStream in(&file);
    bool CourseExist = false;

    while (in.atEnd() == false)
    {
        QString line = in.readLine();
        QStringList dataline = line.split(",");
        if (dataline.size() >= 2 && (dataline[0].trimmed().compare(courseCode.trimmed(), Qt::CaseInsensitive) == 0
                    ||  dataline[1].trimmed().compare(courseCode.trimmed(), Qt::CaseInsensitive) == 0))
        {
            CourseExist = true;
            courseCode = dataline[0].trimmed();
            break;
        }
    }
    file.close();
    return CourseExist;
}
