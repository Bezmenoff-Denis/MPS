/********************************************************************************
** Form generated from reading UI file 'manual.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANUAL_H
#define UI_MANUAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_Manual
{
public:
    QTextBrowser *textBrowser;
    QPushButton *pushButton;

    void setupUi(QDialog *Manual)
    {
        if (Manual->objectName().isEmpty())
            Manual->setObjectName(QStringLiteral("Manual"));
        Manual->resize(510, 378);
        textBrowser = new QTextBrowser(Manual);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(10, 10, 491, 321));
        pushButton = new QPushButton(Manual);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 340, 491, 31));
        QFont font;
        font.setPointSize(12);
        pushButton->setFont(font);

        retranslateUi(Manual);

        QMetaObject::connectSlotsByName(Manual);
    } // setupUi

    void retranslateUi(QDialog *Manual)
    {
        Manual->setWindowTitle(QApplication::translate("Manual", "\320\230\320\275\321\201\321\202\321\200\321\203\320\272\321\206\320\270\321\217", 0));
        textBrowser->setHtml(QApplication::translate("Manual", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-size:11pt;\">\320\242\321\200\320\265\320\261\321\203\320\265\321\202\321\201\321\217 \320\267\320\260\320\277\320\276\320\274\320\275\320\270\321\202\321\214 \321\200\321\217\320\264 \321\201\320\273\320\276\320\262. \320\224\320\273\321\217 \320\267\320\260\320\277\320\276\320\274\320\270\320\275\320\260\320\275\320\270\321\217 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\321\203\320\271\321\202\320\265 \321\201\320\273\320\265\320\264\321\203\321\216\321\211\320\270\320\271 \320\260\320"
                        "\273\320\263\320\276\321\200\320\270\321\202\320\274:</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-size:11pt;\">1.</span><span style=\" font-family:'Times New Roman'; font-size:11pt;\">\302\240\302\240\302\240\302\240 </span><span style=\" font-family:'Times New Roman,serif'; font-size:11pt;\">\320\237\321\200\320\276\321\207\320\270\321\202\320\260\321\202\321\214 \320\277\320\265\321\200\320\262\320\276\320\265 \321\201\320\273\320\276\320\262\320\276</span><span style=\" font-size:11pt;\"> </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-size:11pt;\">2.</span><span style=\" font-family:'Times New Roman'; font-size:11pt;\">\302\240\302\240\302\240\302\240 </span><span style=\" font-family:'Times New Roman,serif'; fon"
                        "t-size:11pt;\">\320\237\321\200\320\265\320\264\321\201\321\202\320\260\320\262\320\270\321\202\321\214 \320\265\320\263\320\276 \320\262 \320\262\320\276\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\270</span><span style=\" font-size:11pt;\"> </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-size:11pt;\">3.</span><span style=\" font-family:'Times New Roman'; font-size:11pt;\">\302\240\302\240\302\240\302\240 </span><span style=\" font-family:'Times New Roman,serif'; font-size:11pt;\">\320\237\321\200\320\276\321\207\320\270\321\202\320\260\321\202\321\214 \320\262\321\202\320\276\321\200\320\276\320\265 \321\201\320\273\320\276\320\262\320\276</span><span style=\" font-size:11pt;\"> </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-fami"
                        "ly:'Times New Roman,serif'; font-size:11pt;\">4.</span><span style=\" font-family:'Times New Roman'; font-size:11pt;\">\302\240\302\240\302\240\302\240 </span><span style=\" font-family:'Times New Roman,serif'; font-size:11pt;\">\320\237\321\200\320\265\320\264\321\201\321\202\320\260\320\262\320\270\321\202\321\214 \320\265\320\263\320\276 \320\262 \320\262\320\276\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\270</span><span style=\" font-size:11pt;\"> </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-size:11pt;\">5.</span><span style=\" font-family:'Times New Roman'; font-size:11pt;\">\302\240\302\240\302\240\302\240 </span><span style=\" font-family:'Times New Roman,serif'; font-size:11pt;\">\320\241\320\276\320\265\320\264\320\270\320\275\320\270\321\202\321\214 \320\276\320\261\321\200\320\260\320\267 \320\277\320\265\321\200\320\262\320\276"
                        "\320\263\320\276 \320\270 \320\262\321\202\320\276\321\200\320\276\320\263\320\276 \321\201\320\273\320\276\320\262\320\260 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\321\203\321\217 \320\262\320\276\320\277\321\200\320\276\321\201: \320\247\321\202\320\276 \320\264\320\265\320\273\320\260\320\265\321\202 \320\277\320\265\321\200\320\262\321\213\320\271 \320\276\320\261\321\200\320\260\320\267 \321\201\320\273\320\276\320\262\320\260 \321\201\320\276 \320\262\321\202\320\276\321\200\321\213\320\274?</span><span style=\" font-size:11pt;\"> </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-size:11pt;\">6.</span><span style=\" font-family:'Times New Roman'; font-size:11pt;\">\302\240\302\240\302\240\302\240 </span><span style=\" font-family:'Times New Roman,serif'; font-size:11pt;\">\320\237\321\200\320\276\321\207\320\270\321\202\320\260\321\202\321\214 \321"
                        "\202\321\200\320\265\321\202\321\214\320\265 \321\201\320\273\320\276\320\262\320\276 \320\270 \320\277\321\200\320\265\320\264\321\201\321\202\320\260\320\262\320\270\321\202\321\214 \320\265\320\263\320\276 \320\262 \320\262\320\276\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\270.</span><span style=\" font-size:11pt;\"> </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-size:11pt;\">7.</span><span style=\" font-family:'Times New Roman'; font-size:11pt;\">\302\240\302\240\302\240\302\240 </span><span style=\" font-family:'Times New Roman,serif'; font-size:11pt;\">\320\241\320\276\320\265\320\264\320\270\320\275\320\270\321\202\321\214 \320\276\320\261\321\200\320\260\320\267 \320\262\321\202\320\276\321\200\320\276\320\263\320\276 \321\201\320\273\320\276\320\262\320\260 \321\201 \321\202\321\200\320\265\321\202\321\214\320\270\320\274.</span>"
                        "<span style=\" font-size:11pt;\"> </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-size:11pt;\">8.</span><span style=\" font-family:'Times New Roman'; font-size:11pt;\">\302\240\302\240\302\240\302\240 </span><span style=\" font-family:'Times New Roman,serif'; font-size:11pt;\">\320\224\320\260\320\273\321\214\320\275\320\265\320\271\321\210\320\270\320\265 \320\264\320\265\320\271\321\201\321\202\320\262\320\270\321\217 \320\277\320\276\320\262\321\202\320\276\321\200\321\217\321\216\321\202\321\201\321\217.</span><span style=\" font-size:11pt;\"> </span></p></body></html>", 0));
        pushButton->setText(QApplication::translate("Manual", "\320\237\320\265\321\200\320\265\320\271\321\202\320\270 \320\272 \320\275\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\260\320\274", 0));
    } // retranslateUi

};

namespace Ui {
    class Manual: public Ui_Manual {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANUAL_H
