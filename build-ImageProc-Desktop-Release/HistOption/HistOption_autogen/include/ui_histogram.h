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
#include <QtWidgets/QRadioButton>
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
    QPushButton *calcBtn;
    QPushButton *filtBtn;
    QLabel *label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radRgb;
    QRadioButton *radGs;
    QRadioButton *radEq;

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
        horizontalLayoutWidget->setGeometry(QRect(10, 80, 1191, 631));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        foldImage = new QLabel(horizontalLayoutWidget);
        foldImage->setObjectName(QString::fromUtf8("foldImage"));
        foldImage->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(foldImage);

        foldBtn = new QPushButton(horizontalLayoutWidget);
        foldBtn->setObjectName(QString::fromUtf8("foldBtn"));

        verticalLayout->addWidget(foldBtn, 0, Qt::AlignHCenter);

        calcBtn = new QPushButton(horizontalLayoutWidget);
        calcBtn->setObjectName(QString::fromUtf8("calcBtn"));

        verticalLayout->addWidget(calcBtn, 0, Qt::AlignHCenter);


        horizontalLayout->addLayout(verticalLayout);

        filtBtn = new QPushButton(histogram);
        filtBtn->setObjectName(QString::fromUtf8("filtBtn"));
        filtBtn->setGeometry(QRect(10, 20, 141, 25));
        label = new QLabel(histogram);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(540, 10, 271, 31));
        QFont font;
        font.setPointSize(21);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        verticalLayoutWidget = new QWidget(histogram);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(1220, 300, 121, 71));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        radRgb = new QRadioButton(verticalLayoutWidget);
        radRgb->setObjectName(QString::fromUtf8("radRgb"));

        verticalLayout_2->addWidget(radRgb);

        radGs = new QRadioButton(verticalLayoutWidget);
        radGs->setObjectName(QString::fromUtf8("radGs"));

        verticalLayout_2->addWidget(radGs);

        radEq = new QRadioButton(verticalLayoutWidget);
        radEq->setObjectName(QString::fromUtf8("radEq"));

        verticalLayout_2->addWidget(radEq);


        retranslateUi(histogram);

        QMetaObject::connectSlotsByName(histogram);
    } // setupUi

    void retranslateUi(QDialog *histogram)
    {
        histogram->setWindowTitle(QApplication::translate("histogram", "Dialog", nullptr));
        foldImage->setText(QString());
        foldBtn->setText(QApplication::translate("histogram", "Folder", nullptr));
        calcBtn->setText(QApplication::translate("histogram", "Calculate", nullptr));
        filtBtn->setText(QApplication::translate("histogram", "Go to Filters", nullptr));
        label->setText(QApplication::translate("histogram", "Histogram", nullptr));
        radRgb->setText(QApplication::translate("histogram", "rgb", nullptr));
        radGs->setText(QApplication::translate("histogram", "grayscale", nullptr));
        radEq->setText(QApplication::translate("histogram", "equalize", nullptr));
    } // retranslateUi

};

namespace Ui {
    class histogram: public Ui_histogram {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTOGRAM_H
