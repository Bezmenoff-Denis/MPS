#ifndef ANSWER10WORDS_H
#define ANSWER10WORDS_H

#include <QDialog>

namespace Ui {
class Answer10Words;
}

class Answer10Words : public QDialog
{
    Q_OBJECT

public:
    explicit Answer10Words(QWidget *parent = 0, QVector<QString> _words = QVector<QString>(), QVector<int> _colorMask = QVector<int>());
    ~Answer10Words();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Answer10Words *ui;
};

#endif // ANSWER10WORDS_H
