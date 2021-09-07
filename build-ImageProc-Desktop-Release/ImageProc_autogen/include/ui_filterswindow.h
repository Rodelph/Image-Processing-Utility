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
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_FiltersWindow
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *FiltersWindow)
    {
        if (FiltersWindow->objectName().isEmpty())
            FiltersWindow->setObjectName(QString::fromUtf8("FiltersWindow"));
        FiltersWindow->resize(657, 520);
        pushButton = new QPushButton(FiltersWindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(290, 270, 89, 25));

        retranslateUi(FiltersWindow);

        QMetaObject::connectSlotsByName(FiltersWindow);
    } // setupUi

    void retranslateUi(QDialog *FiltersWindow)
    {
        FiltersWindow->setWindowTitle(QApplication::translate("FiltersWindow", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("FiltersWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FiltersWindow: public Ui_FiltersWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILTERSWINDOW_H
