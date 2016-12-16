#include "menuform.h"
#include "ui_menuform.h"
#include "QVector"
#include "manual.h"
#include "testmps.h"

QString userName, userSurname, maxNumberMPS;

MenuForm::MenuForm(QWidget *parent, QString _userName, QString _userSurname, QString _maxNumberMPS) :
    QDialog(parent),
    ui(new Ui::MenuForm)
{
    ui->setupUi(this);
    setFixedSize(391,177);
    userName = _userName;
    userSurname = _userSurname;
    maxNumberMPS = _maxNumberMPS;
    ui->label->setText("Здравствуй, "+userName+"!");
}



MenuForm::~MenuForm()
{
    delete ui;
}

void MenuForm::closeEvent(QCloseEvent *e)
{

}

void MenuForm::on_pushButton_clicked()
{
    Manual *manualForm = new Manual(this, maxNumberMPS, 1);
    hide();
    connect(manualForm, SIGNAL(isClosed()), SLOT(show()));
    manualForm->show();
}

void MenuForm::on_pushButton_2_clicked()
{
    TestMPS *test = new TestMPS(this);
    hide();
    connect(test, SIGNAL(isClosed()), this, SLOT(show()));
    test->show();
}
