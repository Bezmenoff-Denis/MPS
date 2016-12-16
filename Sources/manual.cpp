#include "manual.h"
#include "ui_manual.h"
#include "trainingroomparams.h"

int _N;
QString nMPS;

Manual::Manual(QWidget *parent, QString _maxNumberMPS, int N) :
    QDialog(parent),
    ui(new Ui::Manual)
{
    ui->setupUi(this);
    setFixedSize(510,378);
    _N = N;
    _maxNumberMPS = nMPS;
}

Manual::

Manual::~Manual()
{
    delete ui;
}

void Manual::on_pushButton_clicked()
{
    if (_N == 1)
        {
         TrainingRoomParams trp;
         hide();
         if(!trp.exec())
         {
            close();
         };
    }
}

void Manual::closeEvent(QCloseEvent *e)
{
    emit(isClosed());
}
