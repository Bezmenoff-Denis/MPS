/********************************************************************************
** Form generated from reading UI file 'inputanswers.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTANSWERS_H
#define UI_INPUTANSWERS_H

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

class Ui_InputAnswers
{
public:
    QLabel *label_3;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label_2;

    void setupUi(QDialog *InputAnswers)
    {
        if (InputAnswers->objectName().isEmpty())
            InputAnswers->setObjectName(QStringLiteral("InputAnswers"));
        InputAnswers->resize(319, 209);
        label_3 = new QLabel(InputAnswers);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(147, 177, 21, 21));
        QFont font;
        font.setPointSize(12);
        label_3->setFont(font);
        label = new QLabel(InputAnswers);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(8, 1, 311, 151));
        lineEdit = new QLineEdit(InputAnswers);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 150, 301, 21));
        pushButton = new QPushButton(InputAnswers);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(237, 180, 75, 23));
        label_2 = new QLabel(InputAnswers);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(8, 175, 141, 21));

        retranslateUi(InputAnswers);

        QMetaObject::connectSlotsByName(InputAnswers);
    } // setupUi

    void retranslateUi(QDialog *InputAnswers)
    {
        InputAnswers->setWindowTitle(QApplication::translate("InputAnswers", "\320\222\320\262\320\276\320\264 \320\276\321\202\320\262\320\265\321\202\320\276\320\262", 0));
        label_3->setText(QApplication::translate("InputAnswers", "<html><head/><body><p>N</p></body></html>", 0));
        label->setText(QApplication::translate("InputAnswers", "<html><head/><body><p><span style=\" font-size:14pt;\">\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\201\320\273\320\276\320\262\320\260 \320\277\320\276 \320\277\320\276\321\200\321\217\320\264\320\272\321\203.</span></p><p><span style=\" font-size:14pt;\">\320\236\321\210\320\270\320\261\320\272\320\276\320\271 \321\201\321\207\320\270\321\202\320\260\320\265\321\202\321\201\321\217:</span></p><p><span style=\" font-size:14pt;\">- \320\275\320\265\320\277\321\200\320\260\320\262\320\270\320\273\321\214\320\275\320\276 \320\267\320\260\320\277\320\270\321\201\320\260\320\275\320\275\320\276\320\265 \321\201\320\273\320\276\320\262\320\276</span></p><p><span style=\" font-size:14pt;\">- \321\201\320\273\320\276\320\262\320\276 \321\201\321\202\320\276\320\270\321\202 \320\275\320\265 \320\275\320\260 \321\201\320\262\320\276\321\221\320\274 \320\274\320\265\321\201\321\202\320\265.</span></p></body></html>", 0));
        pushButton->setText(QApplication::translate("InputAnswers", "\320\236\320\232", 0));
        label_2->setText(QApplication::translate("InputAnswers", "<html><head/><body><p><span style=\" font-size:14pt;\">\320\236\321\201\321\202\320\260\320\273\320\276\321\201\321\214 \321\201\320\273\320\276\320\262:</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class InputAnswers: public Ui_InputAnswers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTANSWERS_H
