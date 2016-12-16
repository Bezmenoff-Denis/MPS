#ifndef TEST10WORDS_H
#define TEST10WORDS_H

#include <QDialog>

namespace Ui {
class Test10Words;
}

class Test10Words : public QDialog
{
    Q_OBJECT

public:
    explicit Test10Words(QWidget *parent = 0);
    ~Test10Words();
void showEvent( QShowEvent *event );

private slots:
void updateTime();

void on_pushButton_clicked();

private:
    Ui::Test10Words *ui;
};

#endif // TEST10WORDS_H
