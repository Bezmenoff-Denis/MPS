/********************************************************************************
** Form generated from reading UI file 'menuform.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUFORM_H
#define UI_MENUFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MenuForm
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *MenuForm)
    {
        if (MenuForm->objectName().isEmpty())
            MenuForm->setObjectName(QStringLiteral("MenuForm"));
        MenuForm->resize(391, 177);
        label = new QLabel(MenuForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 0, 361, 31));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        label_2 = new QLabel(MenuForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(130, 32, 141, 31));
        label_2->setFont(font);
        pushButton = new QPushButton(MenuForm);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 70, 171, 101));
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(MenuForm);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(209, 70, 172, 101));
        pushButton_2->setFont(font);

        retranslateUi(MenuForm);

        QMetaObject::connectSlotsByName(MenuForm);
    } // setupUi

    void retranslateUi(QDialog *MenuForm)
    {
        MenuForm->setWindowTitle(QApplication::translate("MenuForm", "\320\234\320\265\320\275\321\216", 0));
        label->setText(QApplication::translate("MenuForm", "\320\227\320\264\321\200\320\260\320\262\321\201\321\202\320\262\321\203\320\271, ", 0));
        label_2->setText(QApplication::translate("MenuForm", "\320\232\321\203\320\264\320\260 \320\277\320\276\320\271\320\264\320\265\320\274?", 0));
        pushButton->setText(QApplication::translate("MenuForm", "\320\242\321\200\320\265\320\275\320\270\321\200\320\276\320\262\320\276\321\207\320\275\321\213\320\271\n"
"\320\267\320\260\320\273", 0));
        pushButton_2->setText(QApplication::translate("MenuForm", "\320\234\320\260\321\201\321\202\320\265\321\200\n"
"\320\277\320\260\320\274\321\217\321\202\320\270\n"
"\320\241\320\273\320\276\320\262\320\260", 0));
    } // retranslateUi

};

namespace Ui {
    class MenuForm: public Ui_MenuForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUFORM_H
