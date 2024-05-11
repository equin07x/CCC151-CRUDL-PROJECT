#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableView>
#include <QtCore>
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
    void courses_comboBox();

    void on_pushButton_2_clicked();
        void read_Students_csv();
    void read_Courses_csv();
        void on_pushButton_3_clicked();

    void on_pushButton_clicked();
        void remove_coursesrows_table();
        void remove_studentsrows_table();
        bool deleteRowFromCSV(const QString& filePath, int rowToDelete);


        void on_pushButton_6_clicked();
        void search();

        bool Check_Courses(QString &courseCode);

        void write_courses_csv();
        void on_Add_Courses_clicked();

        void write_student_csv();
        void on_Add_Students_clicked();

        void updateStudentsFile(const QString &coursesFilePath);

            void openStudentsFile();
                void processStudentsFile(const QString &filePath);
            void openCoursesFile();
                void processCoursesFile(const QString &filePath);

            void displayRow(const QString &row);

                void on_searchButton_clicked();

            void on_pushButton_7_clicked();

            void show_student_items();

            void search_courses();

            void on_searchcourses_clicked();

            void delete_warning_students();
            void delete_warning_courses();

        private:
    Ui::MainWindow *ui;
    QStandardItemModel *Model;
};
#endif // MAINWINDOW_H
