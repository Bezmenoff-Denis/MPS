#include "trainingroomparams.h"
#include "ui_trainingroomparams.h"
#include "rowofwords.h"
#include "test10words.h"
#include "test20words.h"
#include "test40words.h"

TrainingRoomParams::TrainingRoomParams(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TrainingRoomParams)
{
    ui->setupUi(this);
    setFixedSize(300,170);
}

TrainingRoomParams::~TrainingRoomParams()
{
    delete ui;
}

void TrainingRoomParams::on_pushButton_clicked()
{
    int complexity;
    if (ui->radioButton->isChecked())
        complexity = 1;
    if (ui->radioButton_2->isChecked())
        complexity = 2;
    if (ui->radioButton_3->isChecked())
        complexity = 4;
    if (ui->radioButton_7->isChecked())
    {
        RowofWords row(this, complexity);
        hide();
        if (!row.exec())
            close();
    } else if (ui->radioButton_8->isChecked())
    {
        if(complexity == 1)
        {
            hide();
            Test10Words test1;
            if (!test1.exec())
                close();
        }
        if(complexity == 2)
        {
            hide();
            Test20Words test2;
            if (!test2.exec())
                close();
        }
        if(complexity == 4)
        {
            hide();
            Test40Words test3;
            if (!test3.exec())
                close();
        }
    };


}
