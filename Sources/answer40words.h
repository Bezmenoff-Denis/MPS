#ifndef ANSWER40WORDS_H
#define ANSWER40WORDS_H

#include <QDialog>

namespace Ui {
class Answer40Words;
}

class Answer40Words : public QDialog
{
    Q_OBJECT

public:
    explicit Answer40Words(QWidget *parent = 0, QVector<QString> _words = QVector<QString>(), QVector<int> _colorMask = QVector<int>());
    ~Answer40Words();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Answer40Words *ui;
};

#endif // ANSWER40WORDS_H
