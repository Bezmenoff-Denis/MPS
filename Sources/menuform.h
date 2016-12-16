#ifndef MENUFORM_H
#define MENUFORM_H

#include <QDialog>

namespace Ui {
class MenuForm;
}

class MenuForm : public QDialog
{
    Q_OBJECT

public:
    explicit MenuForm(QWidget *parent = 0, QString _UserName = QString(), QString _UserSurname = QString(), QString _MaxNumberMPS = QString());
    ~MenuForm();

protected:
    virtual void closeEvent(QCloseEvent *e);

signals:
    getRank();
    
private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

private:
    Ui::MenuForm *ui;
};

#endif // MENUFORM_H
