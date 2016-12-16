#include "testmps.h"
#include "ui_testmps.h"
#include "inputanswers.h"
#include <QFile>
#include <QVector>
#include <QSet>
#include <QMessageBox>
#include <QTime>
#include <QTimer>
#include <QDebug>
#include <ctime>

QVector<QString> words5;
QSet<QString> wordscheck5;
QVector<QString> wordsfortest5;
QTimer *timer4 = new QTimer();

TestMPS::TestMPS(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TestMPS)
{
    ui->setupUi(this);
    setFixedSize(1186,441);
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
    words5.append(word);
    }
    testFile.close();
    qsrand(time(0));
        while(wordscheck5.size() < 50)
    {
        QString word = *(words5.begin() + (rand()%words5.size()));
        if(!wordscheck5.contains(word))
        {
        wordscheck5.insert(word);
        wordsfortest5.append(word);
        }
    }
    ui->word1->setText(*(wordsfortest5.begin()));
    ui->word2->setText(*(wordsfortest5.begin()+1));
    ui->word3->setText(*(wordsfortest5.begin()+2));
    ui->word4->setText(*(wordsfortest5.begin()+3));
    ui->word5->setText(*(wordsfortest5.begin()+4));
    ui->word6->setText(*(wordsfortest5.begin()+5));
    ui->word7->setText(*(wordsfortest5.begin()+6));
    ui->word8->setText(*(wordsfortest5.begin()+7));
    ui->word9->setText(*(wordsfortest5.begin()+8));
    ui->word10->setText(*(wordsfortest5.begin()+9));
    ui->word11->setText(*(wordsfortest5.begin()+10));
    ui->word12->setText(*(wordsfortest5.begin()+11));
    ui->word13->setText(*(wordsfortest5.begin()+12));
    ui->word14->setText(*(wordsfortest5.begin()+13));
    ui->word15->setText(*(wordsfortest5.begin()+14));
    ui->word16->setText(*(wordsfortest5.begin()+15));
    ui->word17->setText(*(wordsfortest5.begin()+16));
    ui->word18->setText(*(wordsfortest5.begin()+17));
    ui->word19->setText(*(wordsfortest5.begin()+18));
    ui->word20->setText(*(wordsfortest5.begin()+19));
    ui->word21->setText(*(wordsfortest5.begin()+20));
    ui->word22->setText(*(wordsfortest5.begin()+21));
    ui->word23->setText(*(wordsfortest5.begin()+22));
    ui->word24->setText(*(wordsfortest5.begin()+23));
    ui->word25->setText(*(wordsfortest5.begin()+24));
    ui->word26->setText(*(wordsfortest5.begin()+25));
    ui->word27->setText(*(wordsfortest5.begin()+26));
    ui->word28->setText(*(wordsfortest5.begin()+27));
    ui->word29->setText(*(wordsfortest5.begin()+28));
    ui->word30->setText(*(wordsfortest5.begin()+29));
    ui->word31->setText(*(wordsfortest5.begin()+30));
    ui->word32->setText(*(wordsfortest5.begin()+31));
    ui->word33->setText(*(wordsfortest5.begin()+32));
    ui->word34->setText(*(wordsfortest5.begin()+33));
    ui->word35->setText(*(wordsfortest5.begin()+34));
    ui->word36->setText(*(wordsfortest5.begin()+35));
    ui->word37->setText(*(wordsfortest5.begin()+36));
    ui->word38->setText(*(wordsfortest5.begin()+37));
    ui->word39->setText(*(wordsfortest5.begin()+38));
    ui->word40->setText(*(wordsfortest5.begin()+39));
    ui->word41->setText(*(wordsfortest5.begin()+40));
    ui->word42->setText(*(wordsfortest5.begin()+41));
    ui->word43->setText(*(wordsfortest5.begin()+42));
    ui->word44->setText(*(wordsfortest5.begin()+43));
    ui->word45->setText(*(wordsfortest5.begin()+44));
    ui->word46->setText(*(wordsfortest5.begin()+45));
    ui->word47->setText(*(wordsfortest5.begin()+46));
    ui->word48->setText(*(wordsfortest5.begin()+47));
    ui->word49->setText(*(wordsfortest5.begin()+48));
    ui->word50->setText(*(wordsfortest5.begin()+49));

    timer4->setInterval(1000);
    connect(timer4, SIGNAL(timeout()), SLOT(updateTime()));
    timer4->start(1000);

}

void TestMPS::updateTime()
{
    QString str1 = ui->label_21->text();
    int n = str1.toInt();
    ui->label_21->setNum(n - 1);
    if (n == 590)
    {
        InputAnswers w(this, wordsfortest5, 50, 5);
        words5.clear();
        wordscheck5.clear();
        wordsfortest5.clear();
        hide();
        if(!w.exec())
            close();
    }
}

TestMPS::~TestMPS()
{
    delete ui;
}

void TestMPS::closeEvent(QCloseEvent *e)
{
    words5.clear();
    wordscheck5.clear();
    wordsfortest5.clear();
    timer4->stop();
    emit(isClosed());
}


void TestMPS::on_pushButton_clicked()
{
    close();
}

void TestMPS::getRank(int)
{

}
