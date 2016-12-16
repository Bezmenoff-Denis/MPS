#include "answer20words.h"
#include "ui_answer20words.h"

Answer20Words::Answer20Words(QWidget *parent, QVector<QString> _words, QVector<int> _colorMask) :
    QDialog(parent),
    ui(new Ui::Answer20Words)
{
    ui->setupUi(this);
    setFixedSize(975,263);
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
    ui->word10->setText(*(words2.begin()+9));
    ui->word11->setText(*(words2.begin()+10));
    ui->word12->setText(*(words2.begin()+11));
    ui->word13->setText(*(words2.begin()+12));
    ui->word14->setText(*(words2.begin()+13));
    ui->word15->setText(*(words2.begin()+14));
    ui->word16->setText(*(words2.begin()+15));
    ui->word17->setText(*(words2.begin()+16));
    ui->word18->setText(*(words2.begin()+17));
    ui->word19->setText(*(words2.begin()+18));
    ui->word20->setText(*(words2.begin()+19));
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
        QPalette pal = ui->word10->palette();
        pal.setColor(QPalette::WindowText, Qt::green);
        ui->word10->setPalette(pal); wordsCorrect++;
    } else
    {
        QPalette pal = ui->word10->palette();
        pal.setColor(QPalette::WindowText, Qt::red);
        ui->word10->setPalette(pal);
    }
    if (*(colorMask.begin()+10) == 1)
    {
        QPalette pal = ui->word11->palette();
        pal.setColor(QPalette::WindowText, Qt::green);
        ui->word11->setPalette(pal); wordsCorrect++;
    } else
    {
        QPalette pal = ui->word11->palette();
        pal.setColor(QPalette::WindowText, Qt::red);
        ui->word11->setPalette(pal);
    }
    if (*(colorMask.begin()+11) == 1)
    {
        QPalette pal = ui->word12->palette();
        pal.setColor(QPalette::WindowText, Qt::green);
        ui->word12->setPalette(pal); wordsCorrect++;
    } else
    {
        QPalette pal = ui->word12->palette();
        pal.setColor(QPalette::WindowText, Qt::red);
        ui->word12->setPalette(pal);
    }
    if (*(colorMask.begin()+12) == 1)
    {
        QPalette pal = ui->word13->palette();
        pal.setColor(QPalette::WindowText, Qt::green);
        ui->word13->setPalette(pal); wordsCorrect++;
    } else
    {
        QPalette pal = ui->word13->palette();
        pal.setColor(QPalette::WindowText, Qt::red);
        ui->word13->setPalette(pal);
    }
    if (*(colorMask.begin()+13) == 1)
    {
        QPalette pal = ui->word14->palette();
        pal.setColor(QPalette::WindowText, Qt::green);
        ui->word14->setPalette(pal); wordsCorrect++;
    } else
    {
        QPalette pal = ui->word14->palette();
        pal.setColor(QPalette::WindowText, Qt::red);
        ui->word14->setPalette(pal);
    }
    if (*(colorMask.begin()+14) == 1)
    {
        QPalette pal = ui->word15->palette();
        pal.setColor(QPalette::WindowText, Qt::green);
        ui->word15->setPalette(pal); wordsCorrect++;
    } else
    {
        QPalette pal = ui->word15->palette();
        pal.setColor(QPalette::WindowText, Qt::red);
        ui->word15->setPalette(pal);
    }
    if (*(colorMask.begin()+15) == 1)
    {
        QPalette pal = ui->word16->palette();
        pal.setColor(QPalette::WindowText, Qt::green);
        ui->word16->setPalette(pal); wordsCorrect++;
    } else
    {
        QPalette pal = ui->word16->palette();
        pal.setColor(QPalette::WindowText, Qt::red);
        ui->word16->setPalette(pal);
    }
    if (*(colorMask.begin()+16) == 1)
    {
        QPalette pal = ui->word17->palette();
        pal.setColor(QPalette::WindowText, Qt::green);
        ui->word17->setPalette(pal); wordsCorrect++;
    } else
    {
        QPalette pal = ui->word17->palette();
        pal.setColor(QPalette::WindowText, Qt::red);
        ui->word17->setPalette(pal);
    }
    if (*(colorMask.begin()+17) == 1)
    {
        QPalette pal = ui->word18->palette();
        pal.setColor(QPalette::WindowText, Qt::green);
        ui->word18->setPalette(pal); wordsCorrect++;
    } else
    {
        QPalette pal = ui->word18->palette();
        pal.setColor(QPalette::WindowText, Qt::red);
        ui->word18->setPalette(pal);
    }
    if (*(colorMask.begin()+18) == 1)
    {
        QPalette pal = ui->word19->palette();
        pal.setColor(QPalette::WindowText, Qt::green);
        ui->word19->setPalette(pal); wordsCorrect++;
    } else
    {
        QPalette pal = ui->word19->palette();
        pal.setColor(QPalette::WindowText, Qt::red);
        ui->word19->setPalette(pal);
    }
    if (*(colorMask.begin()+19) == 1)
    {
        QPalette pal = ui->word20->palette();
        pal.setColor(QPalette::WindowText, Qt::green);
        ui->word20->setPalette(pal); wordsCorrect++;
    } else
    {
        QPalette pal = ui->word20->palette();
        pal.setColor(QPalette::WindowText, Qt::red);
        ui->word20->setPalette(pal);
    }

ui->label_13->setNum(wordsCorrect);
ui->label_12->setNum(20-wordsCorrect);
words2.clear();
colorMask.clear();
}

Answer20Words::~Answer20Words()
{
    delete ui;
}

void Answer20Words::on_pushButton_clicked()
{
    close();
}
