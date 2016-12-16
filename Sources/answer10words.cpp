#include "answer10words.h"
#include "ui_answer10words.h"
#include "QVector"

Answer10Words::Answer10Words(QWidget *parent, QVector<QString> _words, QVector<int> _colorMask) :
    QDialog(parent),
    ui(new Ui::Answer10Words)
{
    ui->setupUi(this);
    setFixedSize(509,270);
    int wordsCorrect = 0;
    QVector<QString> words2 = _words;
    QVector<int> colorMask = _colorMask;
    ui->word1->setText(*(words2.begin()));
    ui->word2->setText(*(words2.begin()+1));
    ui->word3->setText(*(words2.begin()+2));
    ui->word4->setText(*(words2.begin()+3));
    ui->word5->setText(*(words2.begin()+4));
    ui->word6->setText(*(words2.begin()+5));
    ui->word7->setText(*(words2.begin()+6));
    ui->word8->setText(*(words2.begin()+7));
    ui->word9->setText(*(words2.begin()+8));
    ui->word_10->setText(*(words2.begin()+9));
    if (*(colorMask.begin()) == 1)
    {
        QPalette pal = ui->word1->palette();
        pal.setColor(QPalette::WindowText, Qt::green);
        ui->word1->setPalette(pal); wordsCorrect++;
    } else
    {
        QPalette pal = ui->word1->palette();
        pal.setColor(QPalette::WindowText, Qt::red);
        ui->word1->setPalette(pal);
    }
    if (*(colorMask.begin()+1) == 1)
    {
        QPalette pal = ui->word2->palette();
        pal.setColor(QPalette::WindowText, Qt::green);
        ui->word2->setPalette(pal); wordsCorrect++;
    } else
    {
        QPalette pal = ui->word2->palette();
        pal.setColor(QPalette::WindowText, Qt::red);
        ui->word2->setPalette(pal);
    }
    if (*(colorMask.begin()+2) == 1)
    {
        QPalette pal = ui->word3->palette();
        pal.setColor(QPalette::WindowText, Qt::green);
        ui->word3->setPalette(pal); wordsCorrect++;
    } else
    {
        QPalette pal = ui->word3->palette();
        pal.setColor(QPalette::WindowText, Qt::red);
        ui->word3->setPalette(pal);
    }
    if (*(colorMask.begin()+3) == 1)
    {
        QPalette pal = ui->word4->palette();
        pal.setColor(QPalette::WindowText, Qt::green);
        ui->word4->setPalette(pal); wordsCorrect++;
    } else
    {
        QPalette pal = ui->word4->palette();
        pal.setColor(QPalette::WindowText, Qt::red);
        ui->word4->setPalette(pal);
    }
    if (*(colorMask.begin()+4) == 1)
    {
        QPalette pal = ui->word5->palette();
        pal.setColor(QPalette::WindowText, Qt::green);
        ui->word5->setPalette(pal); wordsCorrect++;
    } else
    {
        QPalette pal = ui->word5->palette();
        pal.setColor(QPalette::WindowText, Qt::red);
        ui->word5->setPalette(pal);
    }
    if (*(colorMask.begin()+5) == 1)
    {
        QPalette pal = ui->word6->palette();
        pal.setColor(QPalette::WindowText, Qt::green);
        ui->word6->setPalette(pal); wordsCorrect++;
    } else
    {
        QPalette pal = ui->word6->palette();
        pal.setColor(QPalette::WindowText, Qt::red);
        ui->word6->setPalette(pal);
    }
    if (*(colorMask.begin()+6) == 1)
    {
        QPalette pal = ui->word7->palette();
        pal.setColor(QPalette::WindowText, Qt::green);
        ui->word7->setPalette(pal); wordsCorrect++;
    } else
    {
        QPalette pal = ui->word7->palette();
        pal.setColor(QPalette::WindowText, Qt::red);
        ui->word7->setPalette(pal);
    }
    if (*(colorMask.begin()+7) == 1)
    {
        QPalette pal = ui->word8->palette();
        pal.setColor(QPalette::WindowText, Qt::green);
        ui->word8->setPalette(pal); wordsCorrect++;
    } else
    {
        QPalette pal = ui->word8->palette();
        pal.setColor(QPalette::WindowText, Qt::red);
        ui->word8->setPalette(pal);
    }
    if (*(colorMask.begin()+8) == 1)
    {
        QPalette pal = ui->word9->palette();
        pal.setColor(QPalette::WindowText, Qt::green);
        ui->word9->setPalette(pal); wordsCorrect++;
    } else
    {
        QPalette pal = ui->word9->palette();
        pal.setColor(QPalette::WindowText, Qt::red);
        ui->word9->setPalette(pal);
    }
    if (*(colorMask.begin()+9) == 1)
    {
        QPalette pal = ui->word_10->palette();
        pal.setColor(QPalette::WindowText, Qt::green);
        ui->word_10->setPalette(pal); wordsCorrect++;
    } else
    {
        QPalette pal = ui->word_10->palette();
        pal.setColor(QPalette::WindowText, Qt::red);
        ui->word_10->setPalette(pal);
    }
ui->label_11->setNum(wordsCorrect);
ui->label_12->setNum(10-wordsCorrect);
words2.clear();
colorMask.clear();
}

Answer10Words::~Answer10Words()
{
    delete ui;
}

void Answer10Words::on_pushButton_clicked()
{
    close();
}
