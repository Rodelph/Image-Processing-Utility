/********************************************************************************
** Form generated from reading UI file 'highpassfilt.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HIGHPASSFILT_H
#define UI_HIGHPASSFILT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_highpassfilt
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *imgFoldLbl;
    QPushButton *foldBtn;
    QPushButton *transformBtn;
    QPushButton *retBtn;
    QLabel *label_3;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QSpinBox *spinBox_1;
    QSpinBox *spinBox_2;
    QSpinBox *spinBox_3;
    QSpinBox *spinBox_4;
    QSpinBox *spinBox_5;
    QHBoxLayout *horizontalLayout_3;
    QSpinBox *spinBox_6;
    QSpinBox *spinBox_7;
    QSpinBox *spinBox_8;
    QSpinBox *spinBox_9;
    QSpinBox *spinBox_10;
    QHBoxLayout *horizontalLayout_5;
    QSpinBox *spinBox_11;
    QSpinBox *spinBox_12;
    QSpinBox *spinBox_13;
    QSpinBox *spinBox_14;
    QSpinBox *spinBox_15;
    QHBoxLayout *horizontalLayout_6;
    QSpinBox *spinBox_16;
    QSpinBox *spinBox_17;
    QSpinBox *spinBox_18;
    QSpinBox *spinBox_19;
    QSpinBox *spinBox_20;
    QHBoxLayout *horizontalLayout_7;
    QSpinBox *spinBox_21;
    QSpinBox *spinBox_22;
    QSpinBox *spinBox_23;
    QSpinBox *spinBox_24;
    QSpinBox *spinBox_25;
    QPushButton *confBtn;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *x3rad;
    QRadioButton *x5rad;

    void setupUi(QDialog *highpassfilt)
    {
        if (highpassfilt->objectName().isEmpty())
            highpassfilt->setObjectName(QString::fromUtf8("highpassfilt"));
        highpassfilt->resize(1366, 720);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(highpassfilt->sizePolicy().hasHeightForWidth());
        highpassfilt->setSizePolicy(sizePolicy);
        highpassfilt->setMinimumSize(QSize(1366, 720));
        highpassfilt->setMaximumSize(QSize(1366, 720));
        horizontalLayoutWidget = new QWidget(highpassfilt);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(19, 80, 1011, 631));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        imgFoldLbl = new QLabel(horizontalLayoutWidget);
        imgFoldLbl->setObjectName(QString::fromUtf8("imgFoldLbl"));

        verticalLayout->addWidget(imgFoldLbl);

        foldBtn = new QPushButton(horizontalLayoutWidget);
        foldBtn->setObjectName(QString::fromUtf8("foldBtn"));

        verticalLayout->addWidget(foldBtn, 0, Qt::AlignHCenter);

        transformBtn = new QPushButton(horizontalLayoutWidget);
        transformBtn->setObjectName(QString::fromUtf8("transformBtn"));

        verticalLayout->addWidget(transformBtn, 0, Qt::AlignHCenter);


        horizontalLayout->addLayout(verticalLayout);

        retBtn = new QPushButton(highpassfilt);
        retBtn->setObjectName(QString::fromUtf8("retBtn"));
        retBtn->setGeometry(QRect(20, 30, 81, 25));
        label_3 = new QLabel(highpassfilt);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(530, 20, 211, 31));
        QFont font;
        font.setPointSize(18);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);
        verticalLayoutWidget = new QWidget(highpassfilt);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(1050, 270, 293, 228));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        spinBox_1 = new QSpinBox(verticalLayoutWidget);
        spinBox_1->setObjectName(QString::fromUtf8("spinBox_1"));
        spinBox_1->setMinimum(-99);
        spinBox_1->setValue(0);

        horizontalLayout_4->addWidget(spinBox_1);

        spinBox_2 = new QSpinBox(verticalLayoutWidget);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setMinimum(-99);
        spinBox_2->setValue(0);

        horizontalLayout_4->addWidget(spinBox_2);

        spinBox_3 = new QSpinBox(verticalLayoutWidget);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));
        spinBox_3->setMinimum(-99);
        spinBox_3->setValue(0);

        horizontalLayout_4->addWidget(spinBox_3);

        spinBox_4 = new QSpinBox(verticalLayoutWidget);
        spinBox_4->setObjectName(QString::fromUtf8("spinBox_4"));
        spinBox_4->setMinimum(-99);
        spinBox_4->setValue(0);

        horizontalLayout_4->addWidget(spinBox_4);

        spinBox_5 = new QSpinBox(verticalLayoutWidget);
        spinBox_5->setObjectName(QString::fromUtf8("spinBox_5"));
        spinBox_5->setMinimum(-99);
        spinBox_5->setValue(0);

        horizontalLayout_4->addWidget(spinBox_5);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        spinBox_6 = new QSpinBox(verticalLayoutWidget);
        spinBox_6->setObjectName(QString::fromUtf8("spinBox_6"));
        spinBox_6->setMinimum(-99);
        spinBox_6->setValue(0);

        horizontalLayout_3->addWidget(spinBox_6);

        spinBox_7 = new QSpinBox(verticalLayoutWidget);
        spinBox_7->setObjectName(QString::fromUtf8("spinBox_7"));
        spinBox_7->setMinimum(-99);
        spinBox_7->setValue(0);

        horizontalLayout_3->addWidget(spinBox_7);

        spinBox_8 = new QSpinBox(verticalLayoutWidget);
        spinBox_8->setObjectName(QString::fromUtf8("spinBox_8"));
        spinBox_8->setMinimum(-99);
        spinBox_8->setValue(0);

        horizontalLayout_3->addWidget(spinBox_8);

        spinBox_9 = new QSpinBox(verticalLayoutWidget);
        spinBox_9->setObjectName(QString::fromUtf8("spinBox_9"));
        spinBox_9->setMinimum(-99);
        spinBox_9->setValue(0);

        horizontalLayout_3->addWidget(spinBox_9);

        spinBox_10 = new QSpinBox(verticalLayoutWidget);
        spinBox_10->setObjectName(QString::fromUtf8("spinBox_10"));
        spinBox_10->setMinimum(-99);
        spinBox_10->setValue(0);

        horizontalLayout_3->addWidget(spinBox_10);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        spinBox_11 = new QSpinBox(verticalLayoutWidget);
        spinBox_11->setObjectName(QString::fromUtf8("spinBox_11"));
        spinBox_11->setMinimum(-99);
        spinBox_11->setValue(0);

        horizontalLayout_5->addWidget(spinBox_11);

        spinBox_12 = new QSpinBox(verticalLayoutWidget);
        spinBox_12->setObjectName(QString::fromUtf8("spinBox_12"));
        spinBox_12->setMinimum(-99);
        spinBox_12->setValue(0);

        horizontalLayout_5->addWidget(spinBox_12);

        spinBox_13 = new QSpinBox(verticalLayoutWidget);
        spinBox_13->setObjectName(QString::fromUtf8("spinBox_13"));
        spinBox_13->setMinimum(-99);
        spinBox_13->setValue(0);

        horizontalLayout_5->addWidget(spinBox_13);

        spinBox_14 = new QSpinBox(verticalLayoutWidget);
        spinBox_14->setObjectName(QString::fromUtf8("spinBox_14"));
        spinBox_14->setMinimum(-99);
        spinBox_14->setValue(0);

        horizontalLayout_5->addWidget(spinBox_14);

        spinBox_15 = new QSpinBox(verticalLayoutWidget);
        spinBox_15->setObjectName(QString::fromUtf8("spinBox_15"));
        spinBox_15->setMinimum(-99);
        spinBox_15->setValue(0);

        horizontalLayout_5->addWidget(spinBox_15);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        spinBox_16 = new QSpinBox(verticalLayoutWidget);
        spinBox_16->setObjectName(QString::fromUtf8("spinBox_16"));
        spinBox_16->setMinimum(-99);
        spinBox_16->setValue(0);

        horizontalLayout_6->addWidget(spinBox_16);

        spinBox_17 = new QSpinBox(verticalLayoutWidget);
        spinBox_17->setObjectName(QString::fromUtf8("spinBox_17"));
        spinBox_17->setMinimum(-99);
        spinBox_17->setValue(0);

        horizontalLayout_6->addWidget(spinBox_17);

        spinBox_18 = new QSpinBox(verticalLayoutWidget);
        spinBox_18->setObjectName(QString::fromUtf8("spinBox_18"));
        spinBox_18->setMinimum(-99);
        spinBox_18->setValue(0);

        horizontalLayout_6->addWidget(spinBox_18);

        spinBox_19 = new QSpinBox(verticalLayoutWidget);
        spinBox_19->setObjectName(QString::fromUtf8("spinBox_19"));
        spinBox_19->setMinimum(-99);
        spinBox_19->setValue(0);

        horizontalLayout_6->addWidget(spinBox_19);

        spinBox_20 = new QSpinBox(verticalLayoutWidget);
        spinBox_20->setObjectName(QString::fromUtf8("spinBox_20"));
        spinBox_20->setMinimum(-99);
        spinBox_20->setValue(0);

        horizontalLayout_6->addWidget(spinBox_20);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        spinBox_21 = new QSpinBox(verticalLayoutWidget);
        spinBox_21->setObjectName(QString::fromUtf8("spinBox_21"));
        spinBox_21->setMinimum(-99);
        spinBox_21->setValue(0);

        horizontalLayout_7->addWidget(spinBox_21);

        spinBox_22 = new QSpinBox(verticalLayoutWidget);
        spinBox_22->setObjectName(QString::fromUtf8("spinBox_22"));
        spinBox_22->setMinimum(-99);
        spinBox_22->setValue(0);

        horizontalLayout_7->addWidget(spinBox_22);

        spinBox_23 = new QSpinBox(verticalLayoutWidget);
        spinBox_23->setObjectName(QString::fromUtf8("spinBox_23"));
        spinBox_23->setMinimum(-99);
        spinBox_23->setValue(0);

        horizontalLayout_7->addWidget(spinBox_23);

        spinBox_24 = new QSpinBox(verticalLayoutWidget);
        spinBox_24->setObjectName(QString::fromUtf8("spinBox_24"));
        spinBox_24->setMinimum(-99);
        spinBox_24->setValue(0);

        horizontalLayout_7->addWidget(spinBox_24);

        spinBox_25 = new QSpinBox(verticalLayoutWidget);
        spinBox_25->setObjectName(QString::fromUtf8("spinBox_25"));
        spinBox_25->setMinimum(-99);
        spinBox_25->setValue(0);

        horizontalLayout_7->addWidget(spinBox_25);


        verticalLayout_3->addLayout(horizontalLayout_7);

        confBtn = new QPushButton(verticalLayoutWidget);
        confBtn->setObjectName(QString::fromUtf8("confBtn"));

        verticalLayout_3->addWidget(confBtn);

        horizontalLayoutWidget_2 = new QWidget(highpassfilt);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(1110, 230, 181, 25));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        x3rad = new QRadioButton(horizontalLayoutWidget_2);
        x3rad->setObjectName(QString::fromUtf8("x3rad"));
        x3rad->setChecked(false);

        horizontalLayout_2->addWidget(x3rad);

        x5rad = new QRadioButton(horizontalLayoutWidget_2);
        x5rad->setObjectName(QString::fromUtf8("x5rad"));
        x5rad->setChecked(true);

        horizontalLayout_2->addWidget(x5rad);


        retranslateUi(highpassfilt);

        QMetaObject::connectSlotsByName(highpassfilt);
    } // setupUi

    void retranslateUi(QDialog *highpassfilt)
    {
        highpassfilt->setWindowTitle(QApplication::translate("highpassfilt", "Dialog", nullptr));
        imgFoldLbl->setText(QString());
        foldBtn->setText(QApplication::translate("highpassfilt", "Folder", nullptr));
        transformBtn->setText(QApplication::translate("highpassfilt", "Transform", nullptr));
        retBtn->setText(QApplication::translate("highpassfilt", "Return", nullptr));
        label_3->setText(QApplication::translate("highpassfilt", "High Pass Filter", nullptr));
        confBtn->setText(QApplication::translate("highpassfilt", "Confirm", nullptr));
        x3rad->setText(QApplication::translate("highpassfilt", "3x3", nullptr));
        x5rad->setText(QApplication::translate("highpassfilt", "5x5", nullptr));
    } // retranslateUi

};

namespace Ui {
    class highpassfilt: public Ui_highpassfilt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HIGHPASSFILT_H
