/********************************************************************************
** Form generated from reading UI file 'freqfilt.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FREQFILT_H
#define UI_FREQFILT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_freqfilt
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *imageFoldLbl;
    QPushButton *foldBtn;
    QPushButton *transBtn;
    QPushButton *retBtn;
    QLabel *label_3;

    void setupUi(QDialog *freqfilt)
    {
        if (freqfilt->objectName().isEmpty())
            freqfilt->setObjectName(QString::fromUtf8("freqfilt"));
        freqfilt->resize(1366, 720);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(freqfilt->sizePolicy().hasHeightForWidth());
        freqfilt->setSizePolicy(sizePolicy);
        freqfilt->setMinimumSize(QSize(1366, 720));
        freqfilt->setMaximumSize(QSize(1366, 720));
        horizontalLayoutWidget = new QWidget(freqfilt);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 100, 1321, 611));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        imageFoldLbl = new QLabel(horizontalLayoutWidget);
        imageFoldLbl->setObjectName(QString::fromUtf8("imageFoldLbl"));
        imageFoldLbl->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(imageFoldLbl);

        foldBtn = new QPushButton(horizontalLayoutWidget);
        foldBtn->setObjectName(QString::fromUtf8("foldBtn"));

        verticalLayout->addWidget(foldBtn, 0, Qt::AlignHCenter);

        transBtn = new QPushButton(horizontalLayoutWidget);
        transBtn->setObjectName(QString::fromUtf8("transBtn"));

        verticalLayout->addWidget(transBtn, 0, Qt::AlignHCenter);


        horizontalLayout->addLayout(verticalLayout);

        retBtn = new QPushButton(freqfilt);
        retBtn->setObjectName(QString::fromUtf8("retBtn"));
        retBtn->setGeometry(QRect(20, 30, 89, 25));
        label_3 = new QLabel(freqfilt);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(530, 10, 231, 51));
        QFont font;
        font.setPointSize(17);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        retranslateUi(freqfilt);

        QMetaObject::connectSlotsByName(freqfilt);
    } // setupUi

    void retranslateUi(QDialog *freqfilt)
    {
        freqfilt->setWindowTitle(QApplication::translate("freqfilt", "Dialog", nullptr));
        imageFoldLbl->setText(QString());
        foldBtn->setText(QApplication::translate("freqfilt", "Folder", nullptr));
        transBtn->setText(QApplication::translate("freqfilt", "Transform", nullptr));
        retBtn->setText(QApplication::translate("freqfilt", "Return", nullptr));
        label_3->setText(QApplication::translate("freqfilt", "Frequency Filter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class freqfilt: public Ui_freqfilt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FREQFILT_H
