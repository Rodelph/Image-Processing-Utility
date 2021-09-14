/********************************************************************************
** Form generated from reading UI file 'lowpassfilt.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOWPASSFILT_H
#define UI_LOWPASSFILT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_lowpassfilt
{
public:
    QLabel *label;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *foldImageLbl;
    QPushButton *foldBtn;
    QPushButton *transBtn;
    QPushButton *retBtn;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QSpinBox *spinBox_1;
    QSpinBox *spinBox_2;
    QSpinBox *spinBox_3;
    QSpinBox *spinBox_4;
    QSpinBox *spinBox_5;
    QHBoxLayout *horizontalLayout_6;
    QSpinBox *spinBox_6;
    QSpinBox *spinBox_7;
    QSpinBox *spinBox_8;
    QSpinBox *spinBox_9;
    QSpinBox *spinBox_10;
    QHBoxLayout *horizontalLayout_7;
    QSpinBox *spinBox_11;
    QSpinBox *spinBox_12;
    QSpinBox *spinBox_13;
    QSpinBox *spinBox_14;
    QSpinBox *spinBox_15;
    QHBoxLayout *horizontalLayout_8;
    QSpinBox *spinBox_16;
    QSpinBox *spinBox_17;
    QSpinBox *spinBox_18;
    QSpinBox *spinBox_19;
    QSpinBox *spinBox_20;
    QHBoxLayout *horizontalLayout_9;
    QSpinBox *spinBox_21;
    QSpinBox *spinBox_22;
    QSpinBox *spinBox_23;
    QSpinBox *spinBox_24;
    QSpinBox *spinBox_25;
    QPushButton *confBtn_2;

    void setupUi(QDialog *lowpassfilt)
    {
        if (lowpassfilt->objectName().isEmpty())
            lowpassfilt->setObjectName(QString::fromUtf8("lowpassfilt"));
        lowpassfilt->resize(1366, 720);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lowpassfilt->sizePolicy().hasHeightForWidth());
        lowpassfilt->setSizePolicy(sizePolicy);
        lowpassfilt->setMinimumSize(QSize(1366, 720));
        lowpassfilt->setMaximumSize(QSize(1366, 720));
        label = new QLabel(lowpassfilt);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(520, 10, 221, 51));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        horizontalLayoutWidget = new QWidget(lowpassfilt);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 80, 1011, 631));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        foldImageLbl = new QLabel(horizontalLayoutWidget);
        foldImageLbl->setObjectName(QString::fromUtf8("foldImageLbl"));

        verticalLayout->addWidget(foldImageLbl);

        foldBtn = new QPushButton(horizontalLayoutWidget);
        foldBtn->setObjectName(QString::fromUtf8("foldBtn"));

        verticalLayout->addWidget(foldBtn, 0, Qt::AlignHCenter);

        transBtn = new QPushButton(horizontalLayoutWidget);
        transBtn->setObjectName(QString::fromUtf8("transBtn"));

        verticalLayout->addWidget(transBtn, 0, Qt::AlignHCenter);


        horizontalLayout->addLayout(verticalLayout);

        retBtn = new QPushButton(lowpassfilt);
        retBtn->setObjectName(QString::fromUtf8("retBtn"));
        retBtn->setGeometry(QRect(10, 30, 89, 25));
        verticalLayoutWidget_2 = new QWidget(lowpassfilt);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(1050, 290, 293, 197));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        spinBox_1 = new QSpinBox(verticalLayoutWidget_2);
        spinBox_1->setObjectName(QString::fromUtf8("spinBox_1"));
        spinBox_1->setMinimum(-99);
        spinBox_1->setValue(0);

        horizontalLayout_5->addWidget(spinBox_1);

        spinBox_2 = new QSpinBox(verticalLayoutWidget_2);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setMinimum(-99);
        spinBox_2->setValue(0);

        horizontalLayout_5->addWidget(spinBox_2);

        spinBox_3 = new QSpinBox(verticalLayoutWidget_2);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));
        spinBox_3->setMinimum(-99);
        spinBox_3->setValue(0);

        horizontalLayout_5->addWidget(spinBox_3);

        spinBox_4 = new QSpinBox(verticalLayoutWidget_2);
        spinBox_4->setObjectName(QString::fromUtf8("spinBox_4"));
        spinBox_4->setMinimum(-99);
        spinBox_4->setValue(0);

        horizontalLayout_5->addWidget(spinBox_4);

        spinBox_5 = new QSpinBox(verticalLayoutWidget_2);
        spinBox_5->setObjectName(QString::fromUtf8("spinBox_5"));
        spinBox_5->setMinimum(-99);
        spinBox_5->setValue(0);

        horizontalLayout_5->addWidget(spinBox_5);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        spinBox_6 = new QSpinBox(verticalLayoutWidget_2);
        spinBox_6->setObjectName(QString::fromUtf8("spinBox_6"));
        spinBox_6->setMinimum(-99);
        spinBox_6->setValue(0);

        horizontalLayout_6->addWidget(spinBox_6);

        spinBox_7 = new QSpinBox(verticalLayoutWidget_2);
        spinBox_7->setObjectName(QString::fromUtf8("spinBox_7"));
        spinBox_7->setMinimum(-99);
        spinBox_7->setValue(0);

        horizontalLayout_6->addWidget(spinBox_7);

        spinBox_8 = new QSpinBox(verticalLayoutWidget_2);
        spinBox_8->setObjectName(QString::fromUtf8("spinBox_8"));
        spinBox_8->setMinimum(-99);
        spinBox_8->setValue(0);

        horizontalLayout_6->addWidget(spinBox_8);

        spinBox_9 = new QSpinBox(verticalLayoutWidget_2);
        spinBox_9->setObjectName(QString::fromUtf8("spinBox_9"));
        spinBox_9->setMinimum(-99);
        spinBox_9->setValue(0);

        horizontalLayout_6->addWidget(spinBox_9);

        spinBox_10 = new QSpinBox(verticalLayoutWidget_2);
        spinBox_10->setObjectName(QString::fromUtf8("spinBox_10"));
        spinBox_10->setMinimum(-99);
        spinBox_10->setValue(0);

        horizontalLayout_6->addWidget(spinBox_10);


        verticalLayout_4->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        spinBox_11 = new QSpinBox(verticalLayoutWidget_2);
        spinBox_11->setObjectName(QString::fromUtf8("spinBox_11"));
        spinBox_11->setMinimum(-99);
        spinBox_11->setValue(0);

        horizontalLayout_7->addWidget(spinBox_11);

        spinBox_12 = new QSpinBox(verticalLayoutWidget_2);
        spinBox_12->setObjectName(QString::fromUtf8("spinBox_12"));
        spinBox_12->setMinimum(-99);
        spinBox_12->setValue(0);

        horizontalLayout_7->addWidget(spinBox_12);

        spinBox_13 = new QSpinBox(verticalLayoutWidget_2);
        spinBox_13->setObjectName(QString::fromUtf8("spinBox_13"));
        spinBox_13->setMinimum(-99);
        spinBox_13->setValue(0);

        horizontalLayout_7->addWidget(spinBox_13);

        spinBox_14 = new QSpinBox(verticalLayoutWidget_2);
        spinBox_14->setObjectName(QString::fromUtf8("spinBox_14"));
        spinBox_14->setMinimum(-99);
        spinBox_14->setValue(0);

        horizontalLayout_7->addWidget(spinBox_14);

        spinBox_15 = new QSpinBox(verticalLayoutWidget_2);
        spinBox_15->setObjectName(QString::fromUtf8("spinBox_15"));
        spinBox_15->setMinimum(-99);
        spinBox_15->setValue(0);

        horizontalLayout_7->addWidget(spinBox_15);


        verticalLayout_4->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        spinBox_16 = new QSpinBox(verticalLayoutWidget_2);
        spinBox_16->setObjectName(QString::fromUtf8("spinBox_16"));
        spinBox_16->setMinimum(-99);
        spinBox_16->setValue(0);

        horizontalLayout_8->addWidget(spinBox_16);

        spinBox_17 = new QSpinBox(verticalLayoutWidget_2);
        spinBox_17->setObjectName(QString::fromUtf8("spinBox_17"));
        spinBox_17->setMinimum(-99);
        spinBox_17->setValue(0);

        horizontalLayout_8->addWidget(spinBox_17);

        spinBox_18 = new QSpinBox(verticalLayoutWidget_2);
        spinBox_18->setObjectName(QString::fromUtf8("spinBox_18"));
        spinBox_18->setMinimum(-99);
        spinBox_18->setValue(0);

        horizontalLayout_8->addWidget(spinBox_18);

        spinBox_19 = new QSpinBox(verticalLayoutWidget_2);
        spinBox_19->setObjectName(QString::fromUtf8("spinBox_19"));
        spinBox_19->setMinimum(-99);
        spinBox_19->setValue(0);

        horizontalLayout_8->addWidget(spinBox_19);

        spinBox_20 = new QSpinBox(verticalLayoutWidget_2);
        spinBox_20->setObjectName(QString::fromUtf8("spinBox_20"));
        spinBox_20->setMinimum(-99);
        spinBox_20->setValue(0);

        horizontalLayout_8->addWidget(spinBox_20);


        verticalLayout_4->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        spinBox_21 = new QSpinBox(verticalLayoutWidget_2);
        spinBox_21->setObjectName(QString::fromUtf8("spinBox_21"));
        spinBox_21->setMinimum(-99);
        spinBox_21->setValue(0);

        horizontalLayout_9->addWidget(spinBox_21);

        spinBox_22 = new QSpinBox(verticalLayoutWidget_2);
        spinBox_22->setObjectName(QString::fromUtf8("spinBox_22"));
        spinBox_22->setMinimum(-99);
        spinBox_22->setValue(0);

        horizontalLayout_9->addWidget(spinBox_22);

        spinBox_23 = new QSpinBox(verticalLayoutWidget_2);
        spinBox_23->setObjectName(QString::fromUtf8("spinBox_23"));
        spinBox_23->setMinimum(-99);
        spinBox_23->setValue(0);

        horizontalLayout_9->addWidget(spinBox_23);

        spinBox_24 = new QSpinBox(verticalLayoutWidget_2);
        spinBox_24->setObjectName(QString::fromUtf8("spinBox_24"));
        spinBox_24->setMinimum(-99);
        spinBox_24->setValue(0);

        horizontalLayout_9->addWidget(spinBox_24);

        spinBox_25 = new QSpinBox(verticalLayoutWidget_2);
        spinBox_25->setObjectName(QString::fromUtf8("spinBox_25"));
        spinBox_25->setMinimum(-99);
        spinBox_25->setValue(0);

        horizontalLayout_9->addWidget(spinBox_25);


        verticalLayout_4->addLayout(horizontalLayout_9);

        confBtn_2 = new QPushButton(verticalLayoutWidget_2);
        confBtn_2->setObjectName(QString::fromUtf8("confBtn_2"));

        verticalLayout_4->addWidget(confBtn_2);


        retranslateUi(lowpassfilt);

        QMetaObject::connectSlotsByName(lowpassfilt);
    } // setupUi

    void retranslateUi(QDialog *lowpassfilt)
    {
        lowpassfilt->setWindowTitle(QApplication::translate("lowpassfilt", "Dialog", nullptr));
        label->setText(QApplication::translate("lowpassfilt", "Low Pass Filter", nullptr));
        foldImageLbl->setText(QString());
        foldBtn->setText(QApplication::translate("lowpassfilt", "Folder", nullptr));
        transBtn->setText(QApplication::translate("lowpassfilt", "Transform", nullptr));
        retBtn->setText(QApplication::translate("lowpassfilt", "Return", nullptr));
        confBtn_2->setText(QApplication::translate("lowpassfilt", "Confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class lowpassfilt: public Ui_lowpassfilt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOWPASSFILT_H
