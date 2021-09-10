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
    QVBoxLayout *verticalLayout_2;
    QLabel *transImageLbl;
    QPushButton *transBtn;
    QPushButton *retBtn;

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
        horizontalLayoutWidget->setGeometry(QRect(10, 90, 1151, 621));
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


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        transImageLbl = new QLabel(horizontalLayoutWidget);
        transImageLbl->setObjectName(QString::fromUtf8("transImageLbl"));

        verticalLayout_2->addWidget(transImageLbl);

        transBtn = new QPushButton(horizontalLayoutWidget);
        transBtn->setObjectName(QString::fromUtf8("transBtn"));

        verticalLayout_2->addWidget(transBtn, 0, Qt::AlignHCenter);


        horizontalLayout->addLayout(verticalLayout_2);

        retBtn = new QPushButton(lowpassfilt);
        retBtn->setObjectName(QString::fromUtf8("retBtn"));
        retBtn->setGeometry(QRect(10, 30, 89, 25));

        retranslateUi(lowpassfilt);

        QMetaObject::connectSlotsByName(lowpassfilt);
    } // setupUi

    void retranslateUi(QDialog *lowpassfilt)
    {
        lowpassfilt->setWindowTitle(QApplication::translate("lowpassfilt", "Dialog", nullptr));
        label->setText(QApplication::translate("lowpassfilt", "Low Pass Filter", nullptr));
        foldImageLbl->setText(QString());
        foldBtn->setText(QApplication::translate("lowpassfilt", "Folder", nullptr));
        transImageLbl->setText(QString());
        transBtn->setText(QApplication::translate("lowpassfilt", "Transform", nullptr));
        retBtn->setText(QApplication::translate("lowpassfilt", "Return", nullptr));
    } // retranslateUi

};

namespace Ui {
    class lowpassfilt: public Ui_lowpassfilt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOWPASSFILT_H
