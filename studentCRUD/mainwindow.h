#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <add_studentdialog.h>
#include <add_coursesdialog.h>

#include <QMainWindow>
#include <QTableView>
#include <QTextEdit>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class QStandardItemModel;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_loadStudents_clicked();
    void on_loadCourses_clicked();

    void read_Students_csv();
    void read_Courses_csv();

    void remove_studentsrows_table();
    void remove_coursesrows_table();
    bool deleteRowFromCSV(const QString& filePath, int rowToDelete);

    void on_addCourses_clicked();
        void on_addStudents_clicked();
    void on_deleteStudents_clicked();

        void on_deleteStudents_2_clicked();

    private:
    Ui::MainWindow *ui;
    QStandardItemModel *Model;
    Add_StudentDialog *addStudent;
    Add_CoursesDialog *addCourses;

};
#endif // MAINWINDOW_H
