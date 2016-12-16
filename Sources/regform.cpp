#include "regform.h"
#include "ui_regform.h"
#include "QFile"
#include "QTextStream"
#include <QTextCodec>
RegForm::RegForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegForm)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Dialog | Qt::CustomizeWindowHint | Qt::WindowTitleHint);
    setFixedSize(278,94);
    ui->lineEdit->setText("");
    ui->lineEdit_2->setText("");
}

RegForm::~RegForm()
{
    delete ui;
}

void RegForm::on_pushButton_2_clicked()
{
    this->close();
}

void RegForm::on_pushButton_clicked()
{
    QFile profiles("profiles.dat");
    if(!profiles.open(QIODevice::Append | QIODevice::Text))
    {
        qDebug("Ошибка открытия profiles.dat для записи");
    }
    QTextStream profilesStream(&profiles);
    profilesStream.setCodec("UTF-8");
    profilesStream.flush();
    profilesStream << ui->lineEdit->text() << "\n" << ui->lineEdit_2->text() << "\n" << "0" << "\n";
    profiles.close();

    this->close();
}
