#include "rowofwords.h"
#include "ui_rowofwords.h"
#include "inputanswers.h"
#include <QFile>
#include <QVector>
#include <QSet>
#include <QTime>
#include <QMessageBox>
#include <QTimer>
QVector<QString> wordsfortest4;
int complexity, row = 0;


RowofWords::RowofWords(QWidget *parent, int _complexity) :
    QDialog(parent),
    ui(new Ui::RowofWords)
{
    ui->setupUi(this);
    setFixedSize(400,125);
    complexity = _complexity;
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
    words4.append(word);
    }
    testFile.close();
    qsrand(time(0));
        while(wordscheck4.size() < 10*complexity)
    {
        QString word = *(words4.begin() + (rand()%words4.size()));
        if(!wordscheck4.contains(word))
        {
        wordscheck4.insert(word);
        wordsfortest4.append(word);
        }
    }
    ui->label_2->setText(*(wordsfortest4.begin()));
    ui->label_4->setNum(10*complexity);
}

RowofWords::~RowofWords()
{
    delete ui;
}

void RowofWords::on_pushButton_clicked()
{
    row++;
    if (row == 10*complexity)
    {
        InputAnswers w(this, wordsfortest4, 10*complexity, complexity);
        words4.clear();
        wordscheck4.clear();
        wordsfortest4.clear();
        complexity = 0;
        row = 0;
        hide();
        if(!w.exec())
            close();
    }
    if (row != 10*complexity)
    {
        ui->label_2->setText(*(wordsfortest4.begin()+row));
        ui->label_4->setNum(10*complexity-row);
    }
}
