#ifndef REGFORM_H
#define REGFORM_H

#include <QDialog>

namespace Ui {
class RegForm;
}

class RegForm : public QDialog
{
    Q_OBJECT

public:
    explicit RegForm(QWidget *parent = 0);
    ~RegForm();

private slots:
    void on_pushButton_2_clicked();
    
    void on_pushButton_clicked();
    
private:
    Ui::RegForm *ui;
};

#endif // REGFORM_H
