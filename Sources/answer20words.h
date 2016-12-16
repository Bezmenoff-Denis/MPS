#ifndef ANSWER20WORDS_H
#define ANSWER20WORDS_H

#include <QDialog>

namespace Ui {
class Answer20Words;
}

class Answer20Words : public QDialog
{
    Q_OBJECT

public:
    explicit Answer20Words(QWidget *parent = 0, QVector<QString> _words = QVector<QString>(), QVector<int> _colorMask = QVector<int>());
    ~Answer20Words();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Answer20Words *ui;
};

#endif // ANSWER20WORDS_H
