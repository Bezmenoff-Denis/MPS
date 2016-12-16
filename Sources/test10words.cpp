#include "test10words.h"
#include "ui_test10words.h"
#include "inputanswers.h"
#include <QFile>
#include <QVector>
#include <QSet>
#include <QTime>
#include <QMessageBox>
#include <QTimer>
#include <QDebug>
#include <ctime>

QVector<QString> words1;
QSet<QString> wordscheck;
QVector<QString> wordsfortest;
QTimer *timer = new QTimer();

Test10Words::Test10Words(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Test10Words)
{
    ui->setupUi(this);
    setFixedSize(481,238);
}

Test10Words::~Test10Words()
{
    delete ui;
    timer->stop();
}
void Test10Words::showEvent( QShowEvent *event )
{
    QDialog::showEvent( event );
    QFile testFile;
    testFile.setFileName("./words.dat");
    if (!testFile.open(QIODevice::ReadOnly | QIODevice::Text))
          {
           qDebug("File is imposible to open!\n");
          }
    while(!testFile.atEnd())
    {
    QString word;
    word = testFile.readLine();
    word.resize(word.length()-1);
    words1.append(word);
    }
    testFile.close();
    qsrand(time(0));
        while(wordscheck.size() < 10)
    {
        QString word = *(words1.begin() + (rand()%words1.size()));
        if(!wordscheck.contains(word))
        {
        wordscheck.insert(word);
        wordsfortest.append(word);
        }
    }
    ui->word1->setText(*(wordsfortest.begin()));
    ui->word2->setText(*(wordsfortest.begin()+1));
    ui->word3->setText(*(wordsfortest.begin()+2));
    ui->word4->setText(*(wordsfortest.begin()+3));
    ui->word5->setText(*(wordsfortest.begin()+4));
    ui->word6->setText(*(wordsfortest.begin()+5));
    ui->word7->setText(*(wordsfortest.begin()+6));
    ui->word8->setText(*(wordsfortest.begin()+7));
    ui->word9->setText(*(wordsfortest.begin()+8));
    ui->word_10->setText(*(wordsfortest.begin()+9));
    timer->setInterval(1000);
    connect(timer, SIGNAL(timeout()), this, SLOT(updateTime()));
    timer->start(1000);

}

void Test10Words::updateTime()
{
    QString str1 = ui->label_21->text();
    int n = str1.toInt();
    ui->label_21->setNum(n - 1);
    if (n == 50)
    {
        InputAnswers w(this, wordsfortest, 10, 1);
        words1.clear();
        wordscheck.clear();
        wordsfortest.clear();
        hide();
        if(!w.exec())
            close();
    }
}

void Test10Words::on_pushButton_clicked()
{
    close();
}
