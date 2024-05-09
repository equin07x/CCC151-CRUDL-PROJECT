#ifndef EDIT_STUDENTS_H
#define EDIT_STUDENTS_H

#include <QMainWindow>
#include <QTableView>
#include <QtCore>
#include <QTextEdit>


namespace Ui {
class Edit_Students;
}
class QStandardItemModel;
class Edit_Students : public QMainWindow
{
    Q_OBJECT

public:
    explicit Edit_Students(QWidget *parent = nullptr);
    ~Edit_Students();

private slots:
    void courses_comboBox();
    void show_student_items();
private:
    Ui::Edit_Students *ui;

    QStandardItemModel *Model;
};

#endif // EDIT_STUDENTS_H
