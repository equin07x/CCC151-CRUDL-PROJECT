#include "mainwindow.h"
#include "./ui_mainwindow.h"

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
#include <QDebug>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    courses_comboBox();

    ui->Gender->addItem("Male");
       ui->Gender->addItem("Female");

    ui->YearLevel->addItem("1st Year");
        ui->YearLevel->addItem("2nd Year");
            ui->YearLevel->addItem("3rd Year");
                ui->YearLevel->addItem("4th Year");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::courses_comboBox()
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
                ui->CourseCode_2->addItem(Data[0]);
            }
        }
    }
    csvfile.close();
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

void MainWindow::remove_coursesrows_table()
{
    QString filePath = "C:/Users/Admin/Desktop/COLLEGE/CCC151-SSI-CSV-VER/CSV_files/Courses.csv";// Get the currently selected row
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
    QString filePath = "C:/Users/Admin/Desktop/COLLEGE/CCC151-SSI-CSV-VER/CSV_files/Students.csv";// Get the currently selected row
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

bool MainWindow::Check_Courses(QString &courseCode)
{
    QString filePath = "C:/Users/Admin/Desktop/COLLEGE/CCC151-SSI-CSV-VER/CSV_files/Courses.csv";
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

void MainWindow::write_courses_csv()
{
    QString courseCode = ui->CourseCode->text();
    QString courseName = ui->CourseName->text();

    QFile csvFile("C:/Users/Admin/Desktop/COLLEGE/CCC151-SSI-CSV-VER/CSV_files/Courses.csv");
    if (csvFile.open(QIODevice::ReadWrite | QIODevice::Append ))
    {
        QTextStream out(&csvFile);
        out << courseCode << "," << courseName << "\n";
    }
    csvFile.close();
}

void MainWindow::write_student_csv()
{
    QString surName = ui->SurName->text();
    QString firstName = ui->FirstName->text();
    QString middleName = ui->MiddleName->text();
    QString idNumber = ui->IDNumber->text();
    QString yearLevel = ui->YearLevel->currentText();
    QString gender = ui->Gender->currentText();
    QString courseCode = ui->CourseCode_2->currentText();

    if(!Check_Courses(courseCode))
    {
        QMessageBox::warning(this, "Invalid input" , "Course Does not exist.");
        QFile csvFile("C:/Users/Admin/Desktop/COLLEGE/CCC151-SSI-CSV-VER/CSV_files/Students.csv");
        if (csvFile.open(QIODevice::ReadWrite | QIODevice::Append ))
        {
            QTextStream out(&csvFile);
            out << surName << "," << firstName << "," << middleName << "," << idNumber << "," << yearLevel << "," << gender << "," << "N/A" << "\n";
        }
        csvFile.close();
    }
    else
    {
        QFile csvFile("C:/Users/Admin/Desktop/COLLEGE/CCC151-SSI-CSV-VER/CSV_files/Students.csv");
        if (csvFile.open(QIODevice::ReadWrite | QIODevice::Append ))
        {
            QTextStream out(&csvFile);
            out << surName << "," << firstName << "," << middleName << "," << idNumber << "," << yearLevel << "," << gender << "," << courseCode << "\n";
        }
        csvFile.close();
    }
}

void MainWindow::displayRow(const QString &row)
{
    QStringList fields = row.split(',');
    Model->setRowCount(1);
    Model->setColumnCount(fields.size());

    for (int column = 0; column < fields.size(); ++column)
    {
        Model->setItem(0, column, new QStandardItem(fields[column]));
    }
}


void MainWindow::search()
{
    QString searchedtext = ui->searchLineEdit->text();
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);

    Model = new QStandardItemModel(this);
    ui->tableView->setModel(Model);
    ui->tableView->horizontalHeader()->hide();
    ui->tableView->resizeColumnsToContents();
    ui->tableView->resizeRowsToContents();

    Model->clear();

    QFile file("C:/Users/Admin/Desktop/COLLEGE/CCC151-SSI-CSV-VER/CSV_files/Students.csv");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Failed to open file:" << file.errorString();
        return;
    }
    QTextStream in(&file);
    int rowCount = 0;
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList fields = line.split(',');
        for (const QString &field : fields) {
            if (field.contains(searchedtext, Qt::CaseInsensitive)) {
                displayRow(line);
                file.close();
                return;
            }
        }
        rowCount++;
    }
    Model->setColumnCount(0);
    Model->setRowCount(0);
    file.close();
}

void MainWindow::search_courses()
{

    QString searchedtext = ui->searchLineEdit->text();
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);

    Model = new QStandardItemModel(this);
    ui->tableView->setModel(Model);
    ui->tableView->horizontalHeader()->hide();
    ui->tableView->resizeColumnsToContents();
    ui->tableView->resizeRowsToContents();

    Model->clear();
    QFile file("C:/Users/Admin/Desktop/COLLEGE/CCC151-SSI-CSV-VER/CSV_files/Courses.csv");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Failed to open file:" << file.errorString();
        return;
    }
    QTextStream in(&file);
    int rowCount = 0;
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList fields = line.split(',');
        for (const QString &field : fields) {
            if (field.contains(searchedtext, Qt::CaseInsensitive)) {
                displayRow(line);
                file.close();
                return;
            }
        }
        rowCount++;
    }
    Model->setColumnCount(0);
    Model->setRowCount(0);
    file.close();
}

void MainWindow::read_Students_csv()
{
    Model = new QStandardItemModel(this);
    QFile csvfile("C:/Users/Admin/Desktop/COLLEGE/CCC151-SSI-CSV-VER/CSV_files/Students.csv");
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
    ui->tableView->horizontalHeader()->hide();
    ui->tableView->resizeColumnsToContents();
    ui->tableView->resizeRowsToContents();
}

void MainWindow::processStudentsFile(const QString &filePath)
{
    qDebug() << "Opened student CSV file:" << filePath;
}

void MainWindow::processCoursesFile(const QString &filePath)
{
    qDebug() << "Opened course CSV file:" << filePath;
    updateStudentsFile(filePath);
}

void MainWindow::openStudentsFile()
{
    QString filePath = "C:/Users/Admin/Desktop/COLLEGE/CCC151-SSI-CSV-VER/CSV_files/Students.csv";
    if (!filePath.isEmpty()) {
        processStudentsFile(filePath);
    }
}

void MainWindow::updateStudentsFile(const QString &coursesFilePath)
{
    // Open the student CSV file for reading and writing
    QString studentsFilePath = "C:/Users/Admin/Desktop/COLLEGE/CCC151-SSI-CSV-VER/CSV_files/Students.csv"; // Replace with the actual path to your student CSV file
    QFile studentsFile(studentsFilePath);
    if (!studentsFile.open(QIODevice::ReadWrite | QIODevice::Text)) {
        QMessageBox::critical(this, "Error", "Failed to open student CSV file for updating.");
        return;
    }

    QStringList studentsData;
    QTextStream studentsStream(&studentsFile);
    while (!studentsStream.atEnd()) {
        studentsData.append(studentsStream.readLine());
    }


    QFile coursesFile(coursesFilePath);
    if (!coursesFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::critical(this, "Error", "Failed to open course CSV file for reading.");
        studentsFile.close();
        return;
    }
    QStringList courseCodes;
    QTextStream coursesStream(&coursesFile);
    while (!coursesStream.atEnd()) {
        QString line = coursesStream.readLine();
        QStringList parts = line.split(',');
        if (parts.size() >= 1) {
            courseCodes.append(parts[0]);
        }
    }

    QStringList updatedStudentsData;
    for (const QString &studentLine : studentsData) {
        QStringList parts = studentLine.split(',');
        if (parts.size() >= 7 && !courseCodes.contains(parts[6]))
        {
            parts[6] = "N/A";
        }
        updatedStudentsData.append(parts.join(','));
    }

    // Write the updated student data back to the student CSV file
    studentsFile.resize(0); // Clear the file contents
    QTextStream out(&studentsFile);
    for (const QString &updatedLine : updatedStudentsData) {
        out << updatedLine << "\n";
    }
    coursesFile.close();
    studentsFile.close();
    qDebug() << "Updated student CSV file with missing course codes.";
}

void MainWindow::openCoursesFile()
{
    QString filePath = "C:/Users/Admin/Desktop/COLLEGE/CCC151-SSI-CSV-VER/CSV_files/Courses.csv";
    if (!filePath.isEmpty()) {
        processCoursesFile(filePath);
    }
}
void MainWindow::read_Courses_csv()
{
    Model = new QStandardItemModel(this);
    QFile csvfile("C:/Users/Admin/Desktop/COLLEGE/CCC151-SSI-CSV-VER/CSV_files/Courses.csv");
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
    ui->tableView->horizontalHeader()->hide();
    ui->tableView->resizeColumnsToContents();
    ui->tableView->resizeRowsToContents();
}

void MainWindow::show_student_items()
{
    QModelIndexList selectedRows = ui->tableView->selectionModel()->selectedRows();

    if(selectedRows.size() == 1) {

        QModelIndex index = selectedRows.at(0);
        QString lastname = Model->data(Model->index(index.row(), 0)).toString();
        QString firstname = Model->data(Model->index(index.row(), 1)).toString();
        QString middlename = Model->data(Model->index(index.row(), 2)).toString();
        QString id_number = Model->data(Model->index(index.row(), 3)).toString();

        ui->SurName->setText(lastname);
         ui->FirstName->setText(firstname);
         ui->MiddleName->setText(middlename);
         ui->IDNumber->setText(id_number);
    }
    qDebug() << "Selected Student is now available for editing.";
}

void MainWindow::on_pushButton_2_clicked()
{
     openStudentsFile();
      openCoursesFile();
   read_Students_csv();
}


void MainWindow::on_pushButton_3_clicked()
{
    read_Courses_csv();
}


void MainWindow::on_pushButton_clicked()
{
    remove_studentsrows_table();
    read_Students_csv();
}


void MainWindow::on_pushButton_6_clicked()
{
    remove_coursesrows_table();
    read_Courses_csv();
}


void MainWindow::on_Add_Courses_clicked()
{
    write_courses_csv();
    read_Courses_csv();
    courses_comboBox();
}


void MainWindow::on_Add_Students_clicked()
{
    write_student_csv();
    read_Students_csv();
}


void MainWindow::on_searchButton_clicked()
{
    search();
}


void MainWindow::on_pushButton_7_clicked()
{
    show_student_items();
      qDebug() << "Selected Student is now available for editing.";
}


void MainWindow::on_searchcourses_clicked()
{
    search_courses();
}

