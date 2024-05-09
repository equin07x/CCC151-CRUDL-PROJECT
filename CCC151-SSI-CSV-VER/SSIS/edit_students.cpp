#include "edit_students.h"
#include "ui_edit_students.h"

#include <QStandardItemModel>
#include <QStandardItem>
#include <QStringList>
#include <QItemSelection>
#include <QItemSelectionModel>
#include <QFileDialog>
#include <QTextStream>
#include <QFile>
#include <QTextEdit>
#include <QModelIndex>
#include <QMessageBox>
#include <QTableView>
#include <QComboBox>


Edit_Students::Edit_Students(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Edit_Students)
{
    ui->setupUi(this);
    courses_comboBox();

    ui->cGender->addItem("Male");
    ui->cGender->addItem("Female");

     ui->cYearLevel->addItem("1st Year");
         ui->cYearLevel->addItem("2nd Year");
            ui->cYearLevel->addItem("3rd Year");
                ui->cYearLevel->addItem("4th Year");

}

Edit_Students::~Edit_Students()
{
    delete ui;
}

void Edit_Students::courses_comboBox()
{
    Model = new QStandardItemModel(this);
    QFile csvfile("C:/Users/Admin/Desktop/COLLEGE/CCC151-SSI-CSV-VER/CSV_files/Courses.csv");
    if (csvfile.open(QIODevice::ReadOnly))
    {
        QTextStream in(&csvfile);
        while (in.atEnd() == false)
        {
            QString LineData = in.readLine();
            QStringList Data = LineData.split(",");
            if (int i = 0; i < Data.size())
            {
                ui->cCourse->addItem(Data[0]);
            }
        }
    }
    csvfile.close();
}

void Edit_Students::show_student_items()
{

}
