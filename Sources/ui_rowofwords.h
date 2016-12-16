/********************************************************************************
** Form generated from reading UI file 'rowofwords.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROWOFWORDS_H
#define UI_ROWOFWORDS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_RowofWords
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton;

    void setupUi(QDialog *RowofWords)
    {
        if (RowofWords->objectName().isEmpty())
            RowofWords->setObjectName(QStringLiteral("RowofWords"));
        RowofWords->resize(400, 125);
        label = new QLabel(RowofWords);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(5, 4, 191, 31));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label_2 = new QLabel(RowofWords);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(5, 29, 391, 41));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_3 = new QLabel(RowofWords);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(6, 65, 91, 21));
        QFont font2;
        font2.setPointSize(10);
        label_3->setFont(font2);
        label_4 = new QLabel(RowofWords);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(100, 66, 51, 21));
        label_4->setFont(font2);
        pushButton = new QPushButton(RowofWords);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(4, 92, 391, 31));
        QFont font3;
        font3.setPointSize(12);
        pushButton->setFont(font3);

        retranslateUi(RowofWords);

        QMetaObject::connectSlotsByName(RowofWords);
    } // setupUi

    void retranslateUi(QDialog *RowofWords)
    {
        RowofWords->setWindowTitle(QApplication::translate("RowofWords", "\320\242\320\265\321\201\321\202", 0));
        label->setText(QApplication::translate("RowofWords", "\320\227\320\260\320\277\320\276\320\274\320\275\320\270\321\202\320\265 \321\200\321\217\320\264 \321\201\320\273\320\276\320\262:", 0));
        label_2->setText(QApplication::translate("RowofWords", "\320\241\320\273\320\276\320\262\320\276", 0));
        label_3->setText(QApplication::translate("RowofWords", "\320\236\321\201\321\202\320\260\320\273\320\276\321\201\321\214 \321\201\320\273\320\276\320\262:", 0));
        label_4->setText(QApplication::translate("RowofWords", "N", 0));
        pushButton->setText(QApplication::translate("RowofWords", "\320\241\320\273\320\265\320\264\321\203\321\216\321\211\320\265\320\265 \321\201\320\273\320\276\320\262\320\276", 0));
    } // retranslateUi

};

namespace Ui {
    class RowofWords: public Ui_RowofWords {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROWOFWORDS_H
