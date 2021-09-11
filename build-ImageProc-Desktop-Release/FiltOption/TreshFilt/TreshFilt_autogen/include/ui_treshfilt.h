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
    QLabel *label_2;
    QPushButton *foldBtn;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QPushButton *transBtn;

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
        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        foldBtn = new QPushButton(horizontalLayoutWidget);
        foldBtn->setObjectName(QString::fromUtf8("foldBtn"));

        verticalLayout->addWidget(foldBtn, 0, Qt::AlignHCenter);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        transBtn = new QPushButton(horizontalLayoutWidget);
        transBtn->setObjectName(QString::fromUtf8("transBtn"));

        verticalLayout_2->addWidget(transBtn, 0, Qt::AlignHCenter);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(treshfilt);

        QMetaObject::connectSlotsByName(treshfilt);
    } // setupUi

    void retranslateUi(QDialog *treshfilt)
    {
        treshfilt->setWindowTitle(QApplication::translate("treshfilt", "Dialog", nullptr));
        label->setText(QApplication::translate("treshfilt", "Tresholding Filter", nullptr));
        retBtn->setText(QApplication::translate("treshfilt", "Return", nullptr));
        label_2->setText(QString());
        foldBtn->setText(QApplication::translate("treshfilt", "Folder", nullptr));
        label_3->setText(QString());
        transBtn->setText(QApplication::translate("treshfilt", "Transform", nullptr));
    } // retranslateUi

};

namespace Ui {
    class treshfilt: public Ui_treshfilt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRESHFILT_H
