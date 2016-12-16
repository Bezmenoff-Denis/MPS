#ifndef ANSWERMPS_H
#define ANSWERMPS_H

#include <QDialog>

namespace Ui {
class AnswerMPS;
}

class AnswerMPS : public QDialog
{
    Q_OBJECT

public:
    explicit AnswerMPS(QWidget *parent = 0, QVector<QString> _words = QVector<QString>(), QVector<int> _colorMask = QVector<int>());
    ~AnswerMPS();
signals:
    setRank(int);


private slots:
    void on_pushButton_clicked();

private:
    Ui::AnswerMPS *ui;
};

#endif // ANSWERMPS_H
