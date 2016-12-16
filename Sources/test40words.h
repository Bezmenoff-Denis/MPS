#ifndef TEST40WORDS_H
#define TEST40WORDS_H

#include <QDialog>

namespace Ui {
class Test40Words;
}

class Test40Words : public QDialog
{
    Q_OBJECT

public:
    explicit Test40Words(QWidget *parent = 0);
    ~Test40Words();
private slots:
    void updateTime();
    void on_pushButton_clicked();

private:
    Ui::Test40Words *ui;
};

#endif // TEST40WORDS_H
