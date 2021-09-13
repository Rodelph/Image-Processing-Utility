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
    QVBoxLayout *verticalLayout_2;
    QLabel *imageTrsLbl;
    QPushButton *transformBtn;
    QPushButton *retBtn;
    QLabel *label_3;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QSpinBox *spinBox_1;
    QSpinBox *spinBox_2;
    QSpinBox *spinBox_3;
    QHBoxLayout *horizontalLayout_3;
    QSpinBox *spinBox_4;
    QSpinBox *spinBox_5;
    QSpinBox *spinBox_6;
    QHBoxLayout *horizontalLayout_5;
    QSpinBox *spinBox_7;
    QSpinBox *spinBox_8;
    QSpinBox *spinBox_9;
    QPushButton *confBtn;

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
        horizontalLayoutWidget->setGeometry(QRect(19, 70, 1141, 641));
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


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        imageTrsLbl = new QLabel(horizontalLayoutWidget);
        imageTrsLbl->setObjectName(QString::fromUtf8("imageTrsLbl"));

        verticalLayout_2->addWidget(imageTrsLbl);

        transformBtn = new QPushButton(horizontalLayoutWidget);
        transformBtn->setObjectName(QString::fromUtf8("transformBtn"));

        verticalLayout_2->addWidget(transformBtn, 0, Qt::AlignHCenter);


        horizontalLayout->addLayout(verticalLayout_2);

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
        verticalLayoutWidget->setGeometry(QRect(1170, 290, 175, 129));
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


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        spinBox_4 = new QSpinBox(verticalLayoutWidget);
        spinBox_4->setObjectName(QString::fromUtf8("spinBox_4"));
        spinBox_4->setMinimum(-99);
        spinBox_4->setValue(0);

        horizontalLayout_3->addWidget(spinBox_4);

        spinBox_5 = new QSpinBox(verticalLayoutWidget);
        spinBox_5->setObjectName(QString::fromUtf8("spinBox_5"));
        spinBox_5->setMinimum(-99);
        spinBox_5->setValue(0);

        horizontalLayout_3->addWidget(spinBox_5);

        spinBox_6 = new QSpinBox(verticalLayoutWidget);
        spinBox_6->setObjectName(QString::fromUtf8("spinBox_6"));
        spinBox_6->setMinimum(-99);
        spinBox_6->setValue(0);

        horizontalLayout_3->addWidget(spinBox_6);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        spinBox_7 = new QSpinBox(verticalLayoutWidget);
        spinBox_7->setObjectName(QString::fromUtf8("spinBox_7"));
        spinBox_7->setMinimum(-99);
        spinBox_7->setValue(0);

        horizontalLayout_5->addWidget(spinBox_7);

        spinBox_8 = new QSpinBox(verticalLayoutWidget);
        spinBox_8->setObjectName(QString::fromUtf8("spinBox_8"));
        spinBox_8->setMinimum(-99);
        spinBox_8->setValue(0);

        horizontalLayout_5->addWidget(spinBox_8);

        spinBox_9 = new QSpinBox(verticalLayoutWidget);
        spinBox_9->setObjectName(QString::fromUtf8("spinBox_9"));
        spinBox_9->setMinimum(-99);
        spinBox_9->setValue(0);

        horizontalLayout_5->addWidget(spinBox_9);


        verticalLayout_3->addLayout(horizontalLayout_5);

        confBtn = new QPushButton(verticalLayoutWidget);
        confBtn->setObjectName(QString::fromUtf8("confBtn"));

        verticalLayout_3->addWidget(confBtn);


        retranslateUi(highpassfilt);

        QMetaObject::connectSlotsByName(highpassfilt);
    } // setupUi

    void retranslateUi(QDialog *highpassfilt)
    {
        highpassfilt->setWindowTitle(QApplication::translate("highpassfilt", "Dialog", nullptr));
        imgFoldLbl->setText(QString());
        foldBtn->setText(QApplication::translate("highpassfilt", "Folder", nullptr));
        imageTrsLbl->setText(QString());
        transformBtn->setText(QApplication::translate("highpassfilt", "Transform", nullptr));
        retBtn->setText(QApplication::translate("highpassfilt", "Return", nullptr));
        label_3->setText(QApplication::translate("highpassfilt", "High Pass Filter", nullptr));
        confBtn->setText(QApplication::translate("highpassfilt", "Confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class highpassfilt: public Ui_highpassfilt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HIGHPASSFILT_H
