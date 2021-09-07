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
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_histogram
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *histogram)
    {
        if (histogram->objectName().isEmpty())
            histogram->setObjectName(QString::fromUtf8("histogram"));
        histogram->resize(400, 300);
        pushButton = new QPushButton(histogram);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(130, 160, 89, 25));

        retranslateUi(histogram);

        QMetaObject::connectSlotsByName(histogram);
    } // setupUi

    void retranslateUi(QDialog *histogram)
    {
        histogram->setWindowTitle(QApplication::translate("histogram", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("histogram", "hist", nullptr));
    } // retranslateUi

};

namespace Ui {
    class histogram: public Ui_histogram {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTOGRAM_H
