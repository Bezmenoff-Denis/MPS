#ifndef MANUAL_H
#define MANUAL_H

#include <QDialog>

namespace Ui {
class Manual;
}

class Manual : public QDialog
{
    Q_OBJECT

public:
    explicit Manual(QWidget *parent = 0, QString _maxNumberMPS = QString(), int N = 0);
    ~Manual();

private slots:
    void on_pushButton_clicked();

signals:
    void isClosed();

protected:
    virtual void closeEvent(QCloseEvent *e);

private:
    Ui::Manual *ui;
};

#endif // MANUAL_H
