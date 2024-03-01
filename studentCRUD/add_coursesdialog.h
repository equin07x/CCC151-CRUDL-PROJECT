#ifndef ADD_COURSESDIALOG_H
#define ADD_COURSESDIALOG_H

#include <QDialog>

namespace Ui {
class Add_CoursesDialog;
}

class Add_CoursesDialog :  public QDialog
{
    Q_OBJECT

public:
    explicit Add_CoursesDialog(QWidget *parent = nullptr);
    ~Add_CoursesDialog();

private slots:
    void on_Cancel_button_clicked();
    void write_courses_csv();
    void on_Done_button_clicked();

private:
    Ui::Add_CoursesDialog *ui;
};

#endif // ADD_COURSESDIALOG_H
