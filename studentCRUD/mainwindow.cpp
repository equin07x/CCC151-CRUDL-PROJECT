
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "add_coursesdialog.cpp"

#include <QStandardItemModel>
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


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::remove_coursesrows_table()
{
    QString filePath = "C:/Users/Administrator/Documents/QT CREATOR PROJECTS/studentCRUD/CSV_files/Courses.csv";// Get the currently selected row
    QModelIndexList selectedIndexes = ui->tableView->selectionModel()->selectedRows();
    if (selectedIndexes.isEmpty()) {
        QMessageBox::warning(this, "Warning", "No course selected.");
        return;
    }
    int rowToDelete = selectedIndexes.first().row();

    if (deleteRowFromCSV(filePath, rowToDelete)) {
        QMessageBox::information(this, "Success", "Course deleted successfully.");
    } else {
        QMessageBox::critical(this, "Error", "Failed to delete course.");
    }
}

void MainWindow::remove_studentsrows_table()
{
    QString filePath = "C:/Users/Administrator/Documents/QT CREATOR PROJECTS/studentCRUD/CSV_files/Students.csv";// Get the currently selected row
    QModelIndexList selectedIndexes = ui->tableView->selectionModel()->selectedRows();
    if (selectedIndexes.isEmpty()) {
        QMessageBox::warning(this, "Warning", "No student selected.");
        return;
    }
    int rowToDelete = selectedIndexes.first().row();

    if (deleteRowFromCSV(filePath, rowToDelete)) {
        QMessageBox::information(this, "Success", "Student Information deleted successfully.");
    } else {
        QMessageBox::critical(this, "Error", "Failed to delete student.");
    }
}

bool MainWindow::deleteRowFromCSV(const QString& filePath, int rowToDelete)
{
    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug() << "File not loaded.";
        return false;
    }

    QTextStream in(&file);
    QStringList rows;
    while (!in.atEnd())
    {
        QString line = in.readLine();
        rows.append(line);
    }
    file.close();

    if (rowToDelete < 0 || rowToDelete >= rows.size())
    {
        qDebug() << "Invalid row number to delete.";
        return false;
    }

    rows.removeAt(rowToDelete);

    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        qDebug() << "Failed to open file for writing.";
        return false;
    }

    QTextStream out(&file);
    for (const QString& line : rows)
    {
        out << line << "\n";
    }
    file.close();

    return true;
}

void MainWindow::read_Courses_csv()
{
    Model = new QStandardItemModel(this);
    QFile csvfile("C:/Users/Administrator/Documents/QT CREATOR PROJECTS/studentCRUD/CSV_files/Courses.csv");
    if (csvfile.open(QIODevice::ReadOnly))
    {
        QTextStream in(&csvfile);
        int row = 0;
        while (in.atEnd() == false)
        {
            QString LineData = in.readLine();
            QStringList Data = LineData.split(",");
            for (int i = 0; i < Data.size(); i++){
                QString value = Data.at(i);
                QStandardItem *item = new QStandardItem(value);
                Model->setItem(row, i, item);
            }
            row++;
        }
    }
    csvfile.close();
    ui->tableView->setModel(Model);
}

void MainWindow::read_Students_csv()
{
    Model = new QStandardItemModel(this);

    QFile csvfile("C:/Users/Administrator/Documents/QT CREATOR PROJECTS/studentCRUD/CSV_files/Students.csv");
    if (csvfile.open(QIODevice::ReadOnly))
    {
        QTextStream in(&csvfile);
        int row = 0;
        while (in.atEnd() == false)
        {
            QString LineData = in.readLine();
            QStringList Data = LineData.split(",");
            for (int i = 0; i < Data.size(); i++)
            {
                QString value = Data.at(i);
                QStandardItem *item = new QStandardItem(value);
                Model->setItem(row, i, item);
            }
            row++;
        }
    }
    csvfile.close();
    ui->tableView->setModel(Model);
}

    void MainWindow::on_loadStudents_clicked()
{
    read_Students_csv();
}


void MainWindow::on_loadCourses_clicked()
{
    read_Courses_csv();
}


void MainWindow::on_addStudents_clicked()
{
    hide();
    addStudent = new Add_StudentDialog(this);
    addStudent->show();
}


void MainWindow::on_addCourses_clicked()
{
    hide();
    addCourses = new Add_CoursesDialog(this);
    addCourses->show();
}


void MainWindow::on_deleteStudents_clicked()
{
    remove_studentsrows_table();
}


void MainWindow::on_deleteStudents_2_clicked()
{
    remove_coursesrows_table();
}

