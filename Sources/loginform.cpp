#include "loginform.h"
#include "ui_loginform.h"
#include "regform.h"
#include "menuform.h"
#include "QFile"
#include "QTextStream"
#include "QVector"
#include "qdebug.h"

QVector<QString> profileName, profileSurname, profileMaxWordsMPS;
int profilesCount=0;

LoginForm::LoginForm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginForm)
{
    ui->setupUi(this);
    setFixedSize(401,231);
    if(QFile::exists("profiles.dat"))
    {
        QFile profiles("profiles.dat");
        if(!profiles.open(QIODevice::ReadOnly))
        {
            qDebug("Ошибка открытия profiles.dat для чтения");
        }
        QTextStream profilesStream(&profiles);
        while(!profilesStream.atEnd())
        {
    QString word = profiles.readLine();
            word.resize(word.size()-1);
            profileName.append(word);
            word = profiles.readLine();
            word.resize(word.size()-1);
            profileSurname.append(word);
            word = profiles.readLine();
            word.resize(word.size()-1);
            profileMaxWordsMPS.append(word);
            profilesCount++;
        }
        for (int i = 0; i < profilesCount; i++)
        {
            QString rang;
            QString l;
            l = *(profileMaxWordsMPS.begin()+i);
            if (l.toInt() <= 20)
                rang = "Ученик";
            if (l.toInt() <= 40 && l.toInt()>20)
                rang = "Подмастерье";
            if (l.toInt() <= 49 && l.toInt()>40)
                rang = "Мастер";
            if (l.toInt() == 50)
                rang = "Мастер памяти Слова";

            ui->listWidget->addItem(*(profileName.begin()+i)+" "+*(profileSurname.begin()+i)+", "+rang+" ");
        }
        profiles.close();
    }
}

LoginForm::~LoginForm()
{
    delete ui;
}

void LoginForm::on_pushButton_2_clicked()
{
    RegForm regform(this);
    if(!regform.exec())
        {
            QFile profiles("profiles.dat");
            if(!profiles.open(QIODevice::ReadOnly))
            {
                qDebug("Ошибка открытия profiles.dat для записи");
            }
            profileName.clear();
            profileSurname.clear();
            profileMaxWordsMPS.clear();
            profilesCount = 0;
            QTextStream profilesStream(&profiles);
            while(!profilesStream.atEnd())
            {
        QString word = profiles.readLine();
                word.resize(word.size()-1);
                profileName.append(word);
                word = profiles.readLine();
                word.resize(word.size()-1);
                profileSurname.append(word);
                word = profiles.readLine();
                word.resize(word.size()-1);
                profileMaxWordsMPS.append(word);
                profilesCount++;
            }
            ui->listWidget->clear();
            for (int i = 0; i < profilesCount; i++)
            {
                QString rang;
                QString l;
                l = *(profileMaxWordsMPS.begin()+i);
                if (l.toInt() <= 20)
                    rang = "Ученик.";
                if (l.toInt() <= 40 && l.toInt()>20)
                    rang = "Подмастерье.";
                if (l.toInt() <= 49 && l.toInt()>40)
                    rang = "Мастер.";
                if (l.toInt() == 50)
                    rang = "Мастер памяти Слова";

                ui->listWidget->addItem(*(profileName.begin()+i)+" "+*(profileSurname.begin()+i)+", "+rang+" ");
            }            profiles.close();
        }

}

void LoginForm::on_pushButton_clicked()
{
    qDebug() << QString::number(ui->listWidget->currentRow());
    qDebug() << profileName.isEmpty();
    hide();
    MenuForm *m = new MenuForm(this, *(profileName.begin()+ui->listWidget->currentRow()), *(profileSurname.begin()+ui->listWidget->currentRow()), *(profileMaxWordsMPS.begin()+ui->listWidget->currentRow()));
    m->show();

}
