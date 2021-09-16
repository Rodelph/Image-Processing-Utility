/********************************************************************************
** Form generated from reading UI file 'filterswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILTERSWINDOW_H
#define UI_FILTERSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FiltersWindow
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *lpBtn;
    QPushButton *freqBtn;
    QVBoxLayout *verticalLayout_2;
    QPushButton *hpBtn;
    QPushButton *medBtn;
    QPushButton *treshBtn;
    QPushButton *retBtn;
    QLabel *label;

    void setupUi(QDialog *FiltersWindow)
    {
        if (FiltersWindow->objectName().isEmpty())
            FiltersWindow->setObjectName(QString::fromUtf8("FiltersWindow"));
        FiltersWindow->resize(797, 549);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FiltersWindow->sizePolicy().hasHeightForWidth());
        FiltersWindow->setSizePolicy(sizePolicy);
        FiltersWindow->setMinimumSize(QSize(797, 549));
        FiltersWindow->setMaximumSize(QSize(797, 549));
        horizontalLayoutWidget = new QWidget(FiltersWindow);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 70, 781, 471));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lpBtn = new QPushButton(horizontalLayoutWidget);
        lpBtn->setObjectName(QString::fromUtf8("lpBtn"));

        verticalLayout->addWidget(lpBtn);

        freqBtn = new QPushButton(horizontalLayoutWidget);
        freqBtn->setObjectName(QString::fromUtf8("freqBtn"));

        verticalLayout->addWidget(freqBtn);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        hpBtn = new QPushButton(horizontalLayoutWidget);
        hpBtn->setObjectName(QString::fromUtf8("hpBtn"));

        verticalLayout_2->addWidget(hpBtn);

        medBtn = new QPushButton(horizontalLayoutWidget);
        medBtn->setObjectName(QString::fromUtf8("medBtn"));

        verticalLayout_2->addWidget(medBtn);

        treshBtn = new QPushButton(horizontalLayoutWidget);
        treshBtn->setObjectName(QString::fromUtf8("treshBtn"));

        verticalLayout_2->addWidget(treshBtn);


        horizontalLayout->addLayout(verticalLayout_2);

        retBtn = new QPushButton(FiltersWindow);
        retBtn->setObjectName(QString::fromUtf8("retBtn"));
        retBtn->setGeometry(QRect(10, 20, 121, 25));
        label = new QLabel(FiltersWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(230, 20, 351, 31));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(FiltersWindow);

        QMetaObject::connectSlotsByName(FiltersWindow);
    } // setupUi

    void retranslateUi(QDialog *FiltersWindow)
    {
        FiltersWindow->setWindowTitle(QApplication::translate("FiltersWindow", "Dialog", nullptr));
        lpBtn->setText(QApplication::translate("FiltersWindow", "Low pass filter", nullptr));
        freqBtn->setText(QApplication::translate("FiltersWindow", "Frequency Filter", nullptr));
        hpBtn->setText(QApplication::translate("FiltersWindow", "High pass filter", nullptr));
        medBtn->setText(QApplication::translate("FiltersWindow", "Median Filter", nullptr));
        treshBtn->setText(QApplication::translate("FiltersWindow", "Thresholding", nullptr));
        retBtn->setText(QApplication::translate("FiltersWindow", "Go to Histogram", nullptr));
        label->setText(QApplication::translate("FiltersWindow", "Filters Type", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FiltersWindow: public Ui_FiltersWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILTERSWINDOW_H
