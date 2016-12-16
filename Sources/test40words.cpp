#include "test40words.h"
#include "ui_test40words.h"
#include "inputanswers.h"
#include <QFile>
#include <QVector>
#include <QSet>
#include <QTime>
#include <QMessageBox>
#include <QTimer>
#include <QDebug>
#include <ctime>

QVector<QString> words3;
QSet<QString> wordscheck3;
QVector<QString> wordsfortest3;
QTimer *timer3 = new QTimer();

Test40Words::Test40Words(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Test40Words)
{
    ui->setupUi(this);
    setFixedSize(1005,436);
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
    words3.append(word);
    }
    testFile.close();
    qsrand(time(0));
        while(wordscheck3.size() < 40)
    {
        QString word = *(words3.begin() + (rand()%words3.size()));
        if(!wordscheck3.contains(word))
        {
        wordscheck3.insert(word);
        wordsfortest3.append(word);
        }
    }
    ui->word1->setText(*(wordsfortest3.begin()));
    ui->word2->setText(*(wordsfortest3.begin()+1));
    ui->word3->setText(*(wordsfortest3.begin()+2));
    ui->word4->setText(*(wordsfortest3.begin()+3));
    ui->word5->setText(*(wordsfortest3.begin()+4));
    ui->word6->setText(*(wordsfortest3.begin()+5));
    ui->word7->setText(*(wordsfortest3.begin()+6));
    ui->word8->setText(*(wordsfortest3.begin()+7));
    ui->word9->setText(*(wordsfortest3.begin()+8));
    ui->word10->setText(*(wordsfortest3.begin()+9));
    ui->word11->setText(*(wordsfortest3.begin()+10));
    ui->word12->setText(*(wordsfortest3.begin()+11));
    ui->word13->setText(*(wordsfortest3.begin()+12));
    ui->word14->setText(*(wordsfortest3.begin()+13));
    ui->word15->setText(*(wordsfortest3.begin()+14));
    ui->word16->setText(*(wordsfortest3.begin()+15));
    ui->word17->setText(*(wordsfortest3.begin()+16));
    ui->word18->setText(*(wordsfortest3.begin()+17));
    ui->word19->setText(*(wordsfortest3.begin()+18));
    ui->word20->setText(*(wordsfortest3.begin()+19));
    ui->word21->setText(*(wordsfortest3.begin()+20));
    ui->word22->setText(*(wordsfortest3.begin()+21));
    ui->word23->setText(*(wordsfortest3.begin()+22));
    ui->word24->setText(*(wordsfortest3.begin()+23));
    ui->word25->setText(*(wordsfortest3.begin()+24));
    ui->word26->setText(*(wordsfortest3.begin()+25));
    ui->word27->setText(*(wordsfortest3.begin()+26));
    ui->word28->setText(*(wordsfortest3.begin()+27));
    ui->word29->setText(*(wordsfortest3.begin()+28));
    ui->word30->setText(*(wordsfortest3.begin()+29));
    ui->word31->setText(*(wordsfortest3.begin()+30));
    ui->word32->setText(*(wordsfortest3.begin()+31));
    ui->word33->setText(*(wordsfortest3.begin()+32));
    ui->word34->setText(*(wordsfortest3.begin()+33));
    ui->word35->setText(*(wordsfortest3.begin()+34));
    ui->word36->setText(*(wordsfortest3.begin()+35));
    ui->word37->setText(*(wordsfortest3.begin()+36));
    ui->word38->setText(*(wordsfortest3.begin()+37));
    ui->word39->setText(*(wordsfortest3.begin()+38));
    ui->word40->setText(*(wordsfortest3.begin()+39));

    timer3->setInterval(1000);
    connect(timer3, SIGNAL(timeout()), SLOT(updateTime()));
    timer3->start(1000);

}

Test40Words::~Test40Words()
{
    delete ui;
    timer3->stop();
}

void Test40Words::updateTime()
{
    QString str1 = ui->label_21->text();
    int n = str1.toInt();
    ui->label_21->setNum(n - 1);
    if (n == 470)
    {
        InputAnswers w(this, wordsfortest3, 40, 4);
        words3.clear();
        wordscheck3.clear();
        wordsfortest3.clear();
        hide();
        if(!w.exec())
            close();
    }
}


void Test40Words::on_pushButton_clicked()
{
    close();
}
