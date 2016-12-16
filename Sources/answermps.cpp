#include "answermps.h"
#include "ui_answermps.h"

AnswerMPS::AnswerMPS(QWidget *parent, QVector<QString> _words, QVector<int> _colorMask) :
    QDialog(parent),
    ui(new Ui::AnswerMPS)
{
    ui->setupUi(this);
    setFixedSize(1220,469);
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
    ui->word21->setText(*(words2.begin()+20));
    ui->word22->setText(*(words2.begin()+21));
    ui->word23->setText(*(words2.begin()+22));
    ui->word24->setText(*(words2.begin()+23));
    ui->word25->setText(*(words2.begin()+24));
    ui->word26->setText(*(words2.begin()+25));
    ui->word27->setText(*(words2.begin()+26));
    ui->word28->setText(*(words2.begin()+27));
    ui->word29->setText(*(words2.begin()+28));
    ui->word30->setText(*(words2.begin()+29));
    ui->word31->setText(*(words2.begin()+30));
    ui->word32->setText(*(words2.begin()+31));
    ui->word33->setText(*(words2.begin()+32));
    ui->word34->setText(*(words2.begin()+33));
    ui->word35->setText(*(words2.begin()+34));
    ui->word36->setText(*(words2.begin()+35));
    ui->word37->setText(*(words2.begin()+36));
    ui->word38->setText(*(words2.begin()+37));
    ui->word39->setText(*(words2.begin()+38));
    ui->word40->setText(*(words2.begin()+39));
    ui->word41->setText(*(words2.begin()+40));
    ui->word42->setText(*(words2.begin()+41));
    ui->word43->setText(*(words2.begin()+42));
    ui->word44->setText(*(words2.begin()+43));
    ui->word45->setText(*(words2.begin()+44));
    ui->word46->setText(*(words2.begin()+45));
    ui->word47->setText(*(words2.begin()+46));
    ui->word48->setText(*(words2.begin()+47));
    ui->word49->setText(*(words2.begin()+48));
    ui->word50->setText(*(words2.begin()+49));

    {
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
    if (*(colorMask.begin()+20) == 1)
    {
        QPalette pal = ui->word21->palette();
        pal.setColor(QPalette::WindowText, Qt::green);
        ui->word21->setPalette(pal); wordsCorrect++;
    } else
    {
        QPalette pal = ui->word21->palette();
        pal.setColor(QPalette::WindowText, Qt::red);
        ui->word21->setPalette(pal);
    }
    if (*(colorMask.begin()+21) == 1)
    {
        QPalette pal = ui->word22->palette();
        pal.setColor(QPalette::WindowText, Qt::green);
        ui->word22->setPalette(pal); wordsCorrect++;
    } else
    {
        QPalette pal = ui->word22->palette();
        pal.setColor(QPalette::WindowText, Qt::red);
        ui->word22->setPalette(pal);
    }
    if (*(colorMask.begin()+22) == 1)
    {
        QPalette pal = ui->word23->palette();
        pal.setColor(QPalette::WindowText, Qt::green);
        ui->word23->setPalette(pal); wordsCorrect++;
    } else
    {
        QPalette pal = ui->word23->palette();
        pal.setColor(QPalette::WindowText, Qt::red);
        ui->word23->setPalette(pal);
    }
    if (*(colorMask.begin()+23) == 1)
    {
        QPalette pal = ui->word24->palette();
        pal.setColor(QPalette::WindowText, Qt::green);
        ui->word24->setPalette(pal); wordsCorrect++;
    } else
    {
        QPalette pal = ui->word24->palette();
        pal.setColor(QPalette::WindowText, Qt::red);
        ui->word24->setPalette(pal);
    }
    if (*(colorMask.begin()+24) == 1)
    {
        QPalette pal = ui->word25->palette();
        pal.setColor(QPalette::WindowText, Qt::green);
        ui->word25->setPalette(pal); wordsCorrect++;
    } else
    {
        QPalette pal = ui->word25->palette();
        pal.setColor(QPalette::WindowText, Qt::red);
        ui->word25->setPalette(pal);
    }
    if (*(colorMask.begin()+25) == 1)
    {
        QPalette pal = ui->word26->palette();
        pal.setColor(QPalette::WindowText, Qt::green);
        ui->word26->setPalette(pal); wordsCorrect++;
    } else
    {
        QPalette pal = ui->word26->palette();
        pal.setColor(QPalette::WindowText, Qt::red);
        ui->word26->setPalette(pal);
    }
    if (*(colorMask.begin()+26) == 1)
    {
        QPalette pal = ui->word27->palette();
        pal.setColor(QPalette::WindowText, Qt::green);
        ui->word27->setPalette(pal); wordsCorrect++;
    } else
    {
        QPalette pal = ui->word27->palette();
        pal.setColor(QPalette::WindowText, Qt::red);
        ui->word27->setPalette(pal);
    }
    if (*(colorMask.begin()+27) == 1)
    {
        QPalette pal = ui->word28->palette();
        pal.setColor(QPalette::WindowText, Qt::green);
        ui->word28->setPalette(pal); wordsCorrect++;
    } else
    {
        QPalette pal = ui->word28->palette();
        pal.setColor(QPalette::WindowText, Qt::red);
        ui->word28->setPalette(pal);
    }
    if (*(colorMask.begin()+28) == 1)
    {
        QPalette pal = ui->word29->palette();
        pal.setColor(QPalette::WindowText, Qt::green);
        ui->word29->setPalette(pal); wordsCorrect++;
    } else
    {
        QPalette pal = ui->word29->palette();
        pal.setColor(QPalette::WindowText, Qt::red);
        ui->word29->setPalette(pal);
    }
    if (*(colorMask.begin()+29) == 1)
    {
        QPalette pal = ui->word30->palette();
        pal.setColor(QPalette::WindowText, Qt::green);
        ui->word30->setPalette(pal); wordsCorrect++;
    } else
    {
        QPalette pal = ui->word30->palette();
        pal.setColor(QPalette::WindowText, Qt::red);
        ui->word30->setPalette(pal);
    }
    if (*(colorMask.begin()+30) == 1)
    {
        QPalette pal = ui->word31->palette();
        pal.setColor(QPalette::WindowText, Qt::green);
        ui->word31->setPalette(pal); wordsCorrect++;
    } else
    {
        QPalette pal = ui->word31->palette();
        pal.setColor(QPalette::WindowText, Qt::red);
        ui->word31->setPalette(pal);
    }
    if (*(colorMask.begin()+31) == 1)
    {
        QPalette pal = ui->word32->palette();
        pal.setColor(QPalette::WindowText, Qt::green);
        ui->word32->setPalette(pal); wordsCorrect++;
    } else
    {
        QPalette pal = ui->word32->palette();
        pal.setColor(QPalette::WindowText, Qt::red);
        ui->word32->setPalette(pal);
    }
    if (*(colorMask.begin()+32) == 1)
    {
        QPalette pal = ui->word33->palette();
        pal.setColor(QPalette::WindowText, Qt::green);
        ui->word33->setPalette(pal); wordsCorrect++;
    } else
    {
        QPalette pal = ui->word33->palette();
        pal.setColor(QPalette::WindowText, Qt::red);
        ui->word33->setPalette(pal);
    }
    if (*(colorMask.begin()+33) == 1)
    {
        QPalette pal = ui->word34->palette();
        pal.setColor(QPalette::WindowText, Qt::green);
        ui->word34->setPalette(pal); wordsCorrect++;
    } else
    {
        QPalette pal = ui->word34->palette();
        pal.setColor(QPalette::WindowText, Qt::red);
        ui->word34->setPalette(pal);
    }
    if (*(colorMask.begin()+34) == 1)
    {
        QPalette pal = ui->word35->palette();
        pal.setColor(QPalette::WindowText, Qt::green);
        ui->word35->setPalette(pal); wordsCorrect++;
    } else
    {
        QPalette pal = ui->word35->palette();
        pal.setColor(QPalette::WindowText, Qt::red);
        ui->word35->setPalette(pal);
    }
    if (*(colorMask.begin()+35) == 1)
    {
        QPalette pal = ui->word36->palette();
        pal.setColor(QPalette::WindowText, Qt::green);
        ui->word36->setPalette(pal); wordsCorrect++;
    } else
    {
        QPalette pal = ui->word36->palette();
        pal.setColor(QPalette::WindowText, Qt::red);
        ui->word36->setPalette(pal);
    }
    if (*(colorMask.begin()+36) == 1)
    {
        QPalette pal = ui->word37->palette();
        pal.setColor(QPalette::WindowText, Qt::green);
        ui->word37->setPalette(pal); wordsCorrect++;
    } else
    {
        QPalette pal = ui->word37->palette();
        pal.setColor(QPalette::WindowText, Qt::red);
        ui->word37->setPalette(pal);
    }
    if (*(colorMask.begin()+37) == 1)
    {
        QPalette pal = ui->word38->palette();
        pal.setColor(QPalette::WindowText, Qt::green);
        ui->word38->setPalette(pal); wordsCorrect++;
    } else
    {
        QPalette pal = ui->word38->palette();
        pal.setColor(QPalette::WindowText, Qt::red);
        ui->word38->setPalette(pal);
    }
    if (*(colorMask.begin()+38) == 1)
    {
        QPalette pal = ui->word39->palette();
        pal.setColor(QPalette::WindowText, Qt::green);
        ui->word39->setPalette(pal); wordsCorrect++;
    } else
    {
        QPalette pal = ui->word39->palette();
        pal.setColor(QPalette::WindowText, Qt::red);
        ui->word39->setPalette(pal);
    }
    if (*(colorMask.begin()+39) == 1)
    {
        QPalette pal = ui->word40->palette();
        pal.setColor(QPalette::WindowText, Qt::green);
        ui->word40->setPalette(pal); wordsCorrect++;
    } else
    {
        QPalette pal = ui->word40->palette();
        pal.setColor(QPalette::WindowText, Qt::red);
        ui->word40->setPalette(pal);
    }
    if (*(colorMask.begin()+40) == 1)
    {
        QPalette pal = ui->word41->palette();
        pal.setColor(QPalette::WindowText, Qt::green);
        ui->word41->setPalette(pal); wordsCorrect++;
    } else
    {
        QPalette pal = ui->word41->palette();
        pal.setColor(QPalette::WindowText, Qt::red);
        ui->word41->setPalette(pal);
    }
    if (*(colorMask.begin()+41) == 1)
    {
        QPalette pal = ui->word42->palette();
        pal.setColor(QPalette::WindowText, Qt::green);
        ui->word42->setPalette(pal); wordsCorrect++;
    } else
    {
        QPalette pal = ui->word42->palette();
        pal.setColor(QPalette::WindowText, Qt::red);
        ui->word42->setPalette(pal);
    }
    if (*(colorMask.begin()+42) == 1)
    {
        QPalette pal = ui->word43->palette();
        pal.setColor(QPalette::WindowText, Qt::green);
        ui->word43->setPalette(pal); wordsCorrect++;
    } else
    {
        QPalette pal = ui->word43->palette();
        pal.setColor(QPalette::WindowText, Qt::red);
        ui->word43->setPalette(pal);
    }
    if (*(colorMask.begin()+43) == 1)
    {
        QPalette pal = ui->word44->palette();
        pal.setColor(QPalette::WindowText, Qt::green);
        ui->word44->setPalette(pal); wordsCorrect++;
    } else
    {
        QPalette pal = ui->word44->palette();
        pal.setColor(QPalette::WindowText, Qt::red);
        ui->word44->setPalette(pal);
    }
    if (*(colorMask.begin()+44) == 1)
    {
        QPalette pal = ui->word45->palette();
        pal.setColor(QPalette::WindowText, Qt::green);
        ui->word45->setPalette(pal); wordsCorrect++;
    } else
    {
        QPalette pal = ui->word45->palette();
        pal.setColor(QPalette::WindowText, Qt::red);
        ui->word45->setPalette(pal);
    }
    if (*(colorMask.begin()+45) == 1)
    {
        QPalette pal = ui->word46->palette();
        pal.setColor(QPalette::WindowText, Qt::green);
        ui->word46->setPalette(pal); wordsCorrect++;
    } else
    {
        QPalette pal = ui->word46->palette();
        pal.setColor(QPalette::WindowText, Qt::red);
        ui->word46->setPalette(pal);
    }
    if (*(colorMask.begin()+46) == 1)
    {
        QPalette pal = ui->word47->palette();
        pal.setColor(QPalette::WindowText, Qt::green);
        ui->word47->setPalette(pal); wordsCorrect++;
    } else
    {
        QPalette pal = ui->word47->palette();
        pal.setColor(QPalette::WindowText, Qt::red);
        ui->word47->setPalette(pal);
    }
    if (*(colorMask.begin()+47) == 1)
    {
        QPalette pal = ui->word48->palette();
        pal.setColor(QPalette::WindowText, Qt::green);
        ui->word48->setPalette(pal); wordsCorrect++;
    } else
    {
        QPalette pal = ui->word48->palette();
        pal.setColor(QPalette::WindowText, Qt::red);
        ui->word48->setPalette(pal);
    }
    if (*(colorMask.begin()+48) == 1)
    {
        QPalette pal = ui->word49->palette();
        pal.setColor(QPalette::WindowText, Qt::green);
        ui->word49->setPalette(pal); wordsCorrect++;
    } else
    {
        QPalette pal = ui->word49->palette();
        pal.setColor(QPalette::WindowText, Qt::red);
        ui->word49->setPalette(pal);
    }
    if (*(colorMask.begin()+49) == 1)
    {
        QPalette pal = ui->word50->palette();
        pal.setColor(QPalette::WindowText, Qt::green);
        ui->word50->setPalette(pal); wordsCorrect++;
    } else
    {
        QPalette pal = ui->word50->palette();
        pal.setColor(QPalette::WindowText, Qt::red);
        ui->word50->setPalette(pal);
    }
}
    
QString rang;
if (wordsCorrect <= 20)
    rang = "Ученик.";
if (wordsCorrect <= 40 && wordsCorrect >20)
    rang = "Подмастерье.";
if (wordsCorrect <= 49 && wordsCorrect >40)
    rang = "Мастер.";
if (wordsCorrect == 50)
    rang = "Мастер памяти Слова!";

ui->Rang->setText(rang);
words2.clear();
colorMask.clear();
emit setRank(wordsCorrect);

}

AnswerMPS::~AnswerMPS()
{
    delete ui;
}

void AnswerMPS::on_pushButton_clicked()
{
    close();
}
