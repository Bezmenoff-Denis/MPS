/********************************************************************************
** Form generated from reading UI file 'trainingroomparams.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRAININGROOMPARAMS_H
#define UI_TRAININGROOMPARAMS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_TrainingRoomParams
{
public:
    QGroupBox *groupBox;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QGroupBox *groupBox_2;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_8;
    QPushButton *pushButton;

    void setupUi(QDialog *TrainingRoomParams)
    {
        if (TrainingRoomParams->objectName().isEmpty())
            TrainingRoomParams->setObjectName(QStringLiteral("TrainingRoomParams"));
        TrainingRoomParams->resize(300, 170);
        groupBox = new QGroupBox(TrainingRoomParams);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 0, 121, 121));
        QFont font;
        font.setPointSize(12);
        groupBox->setFont(font);
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(10, 30, 82, 17));
        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(10, 60, 101, 17));
        radioButton_3 = new QRadioButton(groupBox);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(10, 90, 101, 17));
        groupBox_2 = new QGroupBox(TrainingRoomParams);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(150, 3, 141, 91));
        groupBox_2->setFont(font);
        radioButton_7 = new QRadioButton(groupBox_2);
        radioButton_7->setObjectName(QStringLiteral("radioButton_7"));
        radioButton_7->setGeometry(QRect(10, 29, 121, 17));
        QFont font1;
        font1.setPointSize(10);
        radioButton_7->setFont(font1);
        radioButton_8 = new QRadioButton(groupBox_2);
        radioButton_8->setObjectName(QStringLiteral("radioButton_8"));
        radioButton_8->setGeometry(QRect(10, 60, 121, 17));
        radioButton_8->setFont(font1);
        pushButton = new QPushButton(TrainingRoomParams);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(80, 124, 131, 40));
        pushButton->setFont(font);

        retranslateUi(TrainingRoomParams);

        QMetaObject::connectSlotsByName(TrainingRoomParams);
    } // setupUi

    void retranslateUi(QDialog *TrainingRoomParams)
    {
        TrainingRoomParams->setWindowTitle(QApplication::translate("TrainingRoomParams", "\320\222\321\213\320\261\320\276\321\200 \321\201\320\273\320\276\320\266\320\275\320\276\321\201\321\202\320\270", 0));
        groupBox->setTitle(QApplication::translate("TrainingRoomParams", "\320\241\320\273\320\276\320\266\320\275\320\276\321\201\321\202\321\214", 0));
        radioButton->setText(QApplication::translate("TrainingRoomParams", "\320\237\321\200\320\276\321\201\321\202\320\260\321\217", 0));
        radioButton_2->setText(QApplication::translate("TrainingRoomParams", "\320\241\321\200\320\265\320\264\320\275\321\217\321\217", 0));
        radioButton_3->setText(QApplication::translate("TrainingRoomParams", "\320\241\320\273\320\276\320\266\320\275\320\260\321\217", 0));
        groupBox_2->setTitle(QApplication::translate("TrainingRoomParams", "\320\242\320\270\320\277 \320\270\320\263\321\200\321\213", 0));
        radioButton_7->setText(QApplication::translate("TrainingRoomParams", "\320\235\320\260 \320\262\321\213\320\275\320\276\321\201\320\273\320\270\320\262\320\276\321\201\321\202\321\214", 0));
        radioButton_8->setText(QApplication::translate("TrainingRoomParams", "\320\235\320\260 \321\201\320\272\320\276\321\200\320\276\321\201\321\202\321\214", 0));
        pushButton->setText(QApplication::translate("TrainingRoomParams", "\320\235\320\260\321\207\320\260\321\202\321\214", 0));
    } // retranslateUi

};

namespace Ui {
    class TrainingRoomParams: public Ui_TrainingRoomParams {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRAININGROOMPARAMS_H
