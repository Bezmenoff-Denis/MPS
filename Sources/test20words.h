#ifndef TEST20WORDS_H
#define TEST20WORDS_H

#include <QDialog>

namespace Ui {
class Test20Words;
}

class Test20Words : public QDialog
{
    Q_OBJECT

public:
    explicit Test20Words(QWidget *parent = 0);
    ~Test20Words();
private slots:
    void updateTime();

    void on_pushButton_clicked();

private:
    Ui::Test20Words *ui;
};

#endif // TEST20WORDS_H
