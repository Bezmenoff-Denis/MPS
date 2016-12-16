#ifndef TESTMPS_H
#define TESTMPS_H

#include <QDialog>

namespace Ui {
class TestMPS;
}

class TestMPS : public QDialog
{
    Q_OBJECT

public:
    explicit TestMPS(QWidget *parent = 0);
    ~TestMPS();
private slots:
    void updateTime();
    void on_pushButton_clicked();

signals:
    void isClosed();
private slots:
    void getRank(int);
signals:
    void setRank(int);
protected:
    virtual void closeEvent(QCloseEvent *e);


private:
    Ui::TestMPS *ui;
};

#endif // TESTMPS_H
