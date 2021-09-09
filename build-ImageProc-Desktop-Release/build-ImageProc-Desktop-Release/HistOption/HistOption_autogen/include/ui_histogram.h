/********************************************************************************
** Form generated from reading UI file 'histogram.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTOGRAM_H
#define UI_HISTOGRAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_histogram
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *foldImage;
    QPushButton *foldBtn;
    QVBoxLayout *verticalLayout_2;
    QLabel *calcImage;
    QPushButton *calcBtn;
    QPushButton *filtBtn;

    void setupUi(QDialog *histogram)
    {
        if (histogram->objectName().isEmpty())
            histogram->setObjectName(QString::fromUtf8("histogram"));
        histogram->resize(1366, 720);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(histogram->sizePolicy().hasHeightForWidth());
        histogram->setSizePolicy(sizePolicy);
        histogram->setMinimumSize(QSize(1366, 720));
        histogram->setMaximumSize(QSize(1366, 720));
        horizontalLayoutWidget = new QWidget(histogram);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 60, 1341, 651));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        foldImage = new QLabel(horizontalLayoutWidget);
        foldImage->setObjectName(QString::fromUtf8("foldImage"));

        verticalLayout->addWidget(foldImage);

        foldBtn = new QPushButton(horizontalLayoutWidget);
        foldBtn->setObjectName(QString::fromUtf8("foldBtn"));

        verticalLayout->addWidget(foldBtn);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        calcImage = new QLabel(horizontalLayoutWidget);
        calcImage->setObjectName(QString::fromUtf8("calcImage"));

        verticalLayout_2->addWidget(calcImage);

        calcBtn = new QPushButton(horizontalLayoutWidget);
        calcBtn->setObjectName(QString::fromUtf8("calcBtn"));

        verticalLayout_2->addWidget(calcBtn);


        horizontalLayout->addLayout(verticalLayout_2);

        filtBtn = new QPushButton(histogram);
        filtBtn->setObjectName(QString::fromUtf8("filtBtn"));
        filtBtn->setGeometry(QRect(10, 20, 141, 25));

        retranslateUi(histogram);

        QMetaObject::connectSlotsByName(histogram);
    } // setupUi

    void retranslateUi(QDialog *histogram)
    {
        histogram->setWindowTitle(QApplication::translate("histogram", "Dialog", nullptr));
        foldImage->setText(QString());
        foldBtn->setText(QApplication::translate("histogram", "Folder", nullptr));
        calcImage->setText(QString());
        calcBtn->setText(QApplication::translate("histogram", "Calculate", nullptr));
        filtBtn->setText(QApplication::translate("histogram", "Go to Filters", nullptr));
    } // retranslateUi

};

namespace Ui {
    class histogram: public Ui_histogram {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTOGRAM_H
