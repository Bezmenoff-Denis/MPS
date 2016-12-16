/********************************************************************************
** Form generated from reading UI file 'regform.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGFORM_H
#define UI_REGFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_RegForm
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *RegForm)
    {
        if (RegForm->objectName().isEmpty())
            RegForm->setObjectName(QStringLiteral("RegForm"));
        RegForm->resize(278, 94);
        label = new QLabel(RegForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 51, 16));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label_2 = new QLabel(RegForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 38, 91, 16));
        label_2->setFont(font);
        lineEdit = new QLineEdit(RegForm);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(100, 6, 171, 23));
        lineEdit->setFont(font);
        lineEdit_2 = new QLineEdit(RegForm);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(100, 35, 171, 23));
        lineEdit_2->setFont(font);
        pushButton = new QPushButton(RegForm);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(190, 67, 81, 21));
        pushButton_2 = new QPushButton(RegForm);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(100, 67, 81, 21));

        retranslateUi(RegForm);

        QMetaObject::connectSlotsByName(RegForm);
    } // setupUi

    void retranslateUi(QDialog *RegForm)
    {
        RegForm->setWindowTitle(QApplication::translate("RegForm", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", 0));
        label->setText(QApplication::translate("RegForm", "\320\230\320\274\321\217:", 0));
        label_2->setText(QApplication::translate("RegForm", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217:", 0));
        lineEdit->setText(QString());
        lineEdit_2->setText(QString());
        pushButton->setText(QApplication::translate("RegForm", "\320\236\320\232", 0));
        pushButton_2->setText(QApplication::translate("RegForm", "\320\236\321\202\320\274\320\265\320\275\320\260", 0));
    } // retranslateUi

};

namespace Ui {
    class RegForm: public Ui_RegForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGFORM_H
