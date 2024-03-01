#ifndef ADD_STUDENTDIALOG_H
#define ADD_STUDENTDIALOG_H

#include <QDialog>

namespace Ui {
class Add_StudentDialog;
}

class Add_StudentDialog : public QDialog
{
    Q_OBJECT

public:
    explicit Add_StudentDialog(QWidget *parent = nullptr);
    ~Add_StudentDialog();

private slots:
    void write_student_csv();

    void on_Cancel_pushButton_clicked();
    void on_pushButton_clicked();

    bool Check_Courses(QString &courseCode);

private:
    Ui::Add_StudentDialog *ui;
};

#endif // ADD_STUDENTDIALOG_H
