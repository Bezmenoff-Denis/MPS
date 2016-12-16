#ifndef INPUTANSWERS_H
#define INPUTANSWERS_H

#include <QDialog>

namespace Ui {
class InputAnswers;
}

class InputAnswers : public QDialog
{
    Q_OBJECT

public:
    explicit InputAnswers(QWidget *parent = 0, QVector<QString> _correctAnswers = QVector<QString>(), int _WordsCount = 0, int _testType = 0);
    ~InputAnswers();

private slots:
    void on_pushButton_clicked();
    void setRank(int d);
    
signals:
    getRank(int);

private:
    Ui::InputAnswers *ui;
};

#endif // INPUTANSWERS_H
