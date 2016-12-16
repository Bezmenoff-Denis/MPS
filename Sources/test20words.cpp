#include "test20words.h"
#include "ui_test20words.h"
#include "inputanswers.h"
#include <QFile>
#include <QVector>
#include <QSet>
#include <QTime>
#include <QMessageBox>
#include <QTimer>
#include <QDebug>
#include <ctime>

QVector<QString> words2;
QSet<QString> wordscheck2;
QVector<QString> wordsfortest2;
QTimer *timer2 = new QTimer();

Test20Words::Test20Words(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Test20Words)
{
    ui->setupUi(this);
    setFixedSize(890,238);
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
    words2.append(word);
    }
    testFile.close();
    qsrand(time(0));
        while(wordscheck2.size() < 20)
    {
        QString word = *(words2.begin() + (rand()%words2.size()));
        if(!wordscheck2.contains(word))
        {
        wordscheck2.insert(word);
        wordsfortest2.append(word);
        }
    }
    ui->word1->setText(*(wordsfortest2.begin()));
    ui->word2->setText(*(wordsfortest2.begin()+1));
    ui->word3->setText(*(wordsfortest2.begin()+2));
    ui->word4->setText(*(wordsfortest2.begin()+3));
    ui->word5->setText(*(wordsfortest2.begin()+4));
    ui->word6->setText(*(wordsfortest2.begin()+5));
    ui->word7->setText(*(wordsfortest2.begin()+6));
    ui->word8->setText(*(wordsfortest2.begin()+7));
    ui->word9->setText(*(wordsfortest2.begin()+8));
    ui->word10->setText(*(wordsfortest2.begin()+9));
    ui->word11->setText(*(wordsfortest2.begin()+10));
    ui->word12->setText(*(wordsfortest2.begin()+11));
    ui->word13->setText(*(wordsfortest2.begin()+12));
    ui->word14->setText(*(wordsfortest2.begin()+13));
    ui->word15->setText(*(wordsfortest2.begin()+14));
    ui->word16->setText(*(wordsfortest2.begin()+15));
    ui->word17->setText(*(wordsfortest2.begin()+16));
    ui->word18->setText(*(wordsfortest2.begin()+17));
    ui->word19->setText(*(wordsfortest2.begin()+18));
    ui->word20->setText(*(wordsfortest2.begin()+19));
    timer2->setInterval(1000);
    connect(timer2, SIGNAL(timeout()), SLOT(updateTime()));
    timer2->start(1000);

}

void Test20Words::updateTime()
{
    QString str1 = ui->label_21->text();
    int n = str1.toInt();
    ui->label_21->setNum(n - 1);
    if (n == 0)
    {
        InputAnswers w(this, wordsfortest2, 20, 2);
        words2.clear();
        wordscheck2.clear();
        wordsfortest2.clear();
        hide();
        if(!w.exec())
            close();
    }
}


Test20Words::~Test20Words()
{
    delete ui;
    timer2->stop();
}


void Test20Words::on_pushButton_clicked()
{
    close();
}
