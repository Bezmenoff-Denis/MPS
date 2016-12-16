#include "inputanswers.h"
#include "ui_inputanswers.h"
#include "QVector"
#include "answer10words.h"
#include "answer20words.h"
#include "answer40words.h"
#include "answermps.h"

int wordsCount;
int testType;
QVector<QString> correctAnswers;
QVector<int> userAnswers;

InputAnswers::InputAnswers(QWidget *parent, QVector<QString> _correctAnswers, int _wordsCount, int _testType) :
    QDialog(parent),
    ui(new Ui::InputAnswers)
{
    ui->setupUi(this);
    setFixedSize(319,209);
    wordsCount = _wordsCount;
    ui->label_3->setNum(wordsCount);
    testType = _testType;
    correctAnswers = _correctAnswers;

}

InputAnswers::~InputAnswers()
{
    delete ui;
}

void InputAnswers::on_pushButton_clicked()
{
    if (wordsCount != 1){
    QString str1 = ui->label_3->text();
    if (this->ui->lineEdit->text().toLower() == (*(correctAnswers.begin()+10*testType-wordsCount)).toLower())
        userAnswers.push_back(1); else
        userAnswers.push_back(0);
    this->ui->lineEdit->setText("");
    wordsCount--;
    ui->label_3->setNum(wordsCount);

    } else {
                if ((this->ui->lineEdit->text()).toLower() == (*(correctAnswers.begin()+10-wordsCount)).toLower())
                    userAnswers.push_back(1); else
                    userAnswers.push_back(0);
                this->ui->lineEdit->setText("");
                wordsCount--;
                if (testType == 1)
                {
                    Answer10Words w(this, correctAnswers, userAnswers);
                    correctAnswers.clear();
                    userAnswers.clear();
                    if(!w.exec())
                        close();
                }
                if (testType == 2)
                {
                    Answer20Words w1(this, correctAnswers, userAnswers);
                    correctAnswers.clear();
                    userAnswers.clear();
                    if(!w1.exec())
                        close();
                }
                if (testType == 4)
                {
                    Answer40Words w2(this, correctAnswers, userAnswers);
                    correctAnswers.clear();
                    userAnswers.clear();
                    if(!w2.exec())
                        close();
                }
                if (testType == 5)
                {
                    AnswerMPS w3(this, correctAnswers, userAnswers);
                    correctAnswers.clear();
                    userAnswers.clear();
                    if(w3.exec())
                        close();
                }

                close();
    }
}

void InputAnswers::setRank(int d)
{
    getRank(d);
}
