/********************************************************************************
** Form generated from reading UI file 'treshfilt.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRESHFILT_H
#define UI_TRESHFILT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_treshfilt
{
public:
    QLabel *label;
    QPushButton *retBtn;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *foldImageLbl;
    QPushButton *foldBtn;
    QPushButton *transBtn;
    QSlider *treshSlide;
    QLabel *label_2;
    QLabel *treshVal;

    void setupUi(QDialog *treshfilt)
    {
        if (treshfilt->objectName().isEmpty())
            treshfilt->setObjectName(QString::fromUtf8("treshfilt"));
        treshfilt->resize(1366, 720);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(treshfilt->sizePolicy().hasHeightForWidth());
        treshfilt->setSizePolicy(sizePolicy);
        treshfilt->setMinimumSize(QSize(1366, 720));
        treshfilt->setMaximumSize(QSize(1366, 720));
        label = new QLabel(treshfilt);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(476, 20, 221, 41));
        QFont font;
        font.setPointSize(19);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        retBtn = new QPushButton(treshfilt);
        retBtn->setObjectName(QString::fromUtf8("retBtn"));
        retBtn->setGeometry(QRect(10, 30, 89, 25));
        horizontalLayoutWidget = new QWidget(treshfilt);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(9, 80, 1171, 631));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        foldImageLbl = new QLabel(horizontalLayoutWidget);
        foldImageLbl->setObjectName(QString::fromUtf8("foldImageLbl"));
        foldImageLbl->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(foldImageLbl);

        foldBtn = new QPushButton(horizontalLayoutWidget);
        foldBtn->setObjectName(QString::fromUtf8("foldBtn"));

        verticalLayout->addWidget(foldBtn, 0, Qt::AlignHCenter);

        transBtn = new QPushButton(horizontalLayoutWidget);
        transBtn->setObjectName(QString::fromUtf8("transBtn"));

        verticalLayout->addWidget(transBtn, 0, Qt::AlignHCenter);


        horizontalLayout->addLayout(verticalLayout);

        treshSlide = new QSlider(treshfilt);
        treshSlide->setObjectName(QString::fromUtf8("treshSlide"));
        treshSlide->setGeometry(QRect(1190, 210, 160, 16));
        treshSlide->setMaximum(255);
        treshSlide->setMinimum(0);
        treshSlide->setOrientation(Qt::Horizontal);
        label_2 = new QLabel(treshfilt);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(1210, 190, 67, 17));
        treshVal = new QLabel(treshfilt);
        treshVal->setObjectName(QString::fromUtf8("treshVal"));
        treshVal->setGeometry(QRect(1280, 190, 51, 16));
        treshVal->setAlignment(Qt::AlignCenter);

        retranslateUi(treshfilt);

        QMetaObject::connectSlotsByName(treshfilt);
    } // setupUi

    void retranslateUi(QDialog *treshfilt)
    {
        treshfilt->setWindowTitle(QApplication::translate("treshfilt", "Dialog", nullptr));
        label->setText(QApplication::translate("treshfilt", "Tresholding Filter", nullptr));
        retBtn->setText(QApplication::translate("treshfilt", "Return", nullptr));
        foldImageLbl->setText(QString());
        foldBtn->setText(QApplication::translate("treshfilt", "Folder", nullptr));
        transBtn->setText(QApplication::translate("treshfilt", "Transform", nullptr));
        label_2->setText(QApplication::translate("treshfilt", "Treshold :", nullptr));
        treshVal->setText(QApplication::translate("treshfilt", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class treshfilt: public Ui_treshfilt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRESHFILT_H
