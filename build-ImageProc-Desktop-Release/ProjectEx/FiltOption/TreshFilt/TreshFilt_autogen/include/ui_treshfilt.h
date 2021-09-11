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

QT_BEGIN_NAMESPACE

class Ui_treshfilt
{
public:

    void setupUi(QDialog *treshfilt)
    {
        if (treshfilt->objectName().isEmpty())
            treshfilt->setObjectName(QString::fromUtf8("treshfilt"));
        treshfilt->resize(400, 300);

        retranslateUi(treshfilt);

        QMetaObject::connectSlotsByName(treshfilt);
    } // setupUi

    void retranslateUi(QDialog *treshfilt)
    {
        treshfilt->setWindowTitle(QApplication::translate("treshfilt", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class treshfilt: public Ui_treshfilt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRESHFILT_H
