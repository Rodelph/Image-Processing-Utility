/********************************************************************************
** Form generated from reading UI file 'highpassfilt.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HIGHPASSFILT_H
#define UI_HIGHPASSFILT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_highpassfilt
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QPushButton *retBtn;
    QLabel *label_3;

    void setupUi(QDialog *highpassfilt)
    {
        if (highpassfilt->objectName().isEmpty())
            highpassfilt->setObjectName(QString::fromUtf8("highpassfilt"));
        highpassfilt->resize(1366, 720);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(highpassfilt->sizePolicy().hasHeightForWidth());
        highpassfilt->setSizePolicy(sizePolicy);
        highpassfilt->setMinimumSize(QSize(1366, 720));
        highpassfilt->setMaximumSize(QSize(1366, 720));
        horizontalLayoutWidget = new QWidget(highpassfilt);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(19, 80, 1111, 631));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton, 0, Qt::AlignHCenter);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout_2->addWidget(pushButton_2, 0, Qt::AlignHCenter);


        horizontalLayout->addLayout(verticalLayout_2);

        retBtn = new QPushButton(highpassfilt);
        retBtn->setObjectName(QString::fromUtf8("retBtn"));
        retBtn->setGeometry(QRect(20, 30, 81, 25));
        label_3 = new QLabel(highpassfilt);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(530, 20, 211, 31));
        QFont font;
        font.setPointSize(18);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        retranslateUi(highpassfilt);

        QMetaObject::connectSlotsByName(highpassfilt);
    } // setupUi

    void retranslateUi(QDialog *highpassfilt)
    {
        highpassfilt->setWindowTitle(QApplication::translate("highpassfilt", "Dialog", nullptr));
        label->setText(QString());
        pushButton->setText(QApplication::translate("highpassfilt", "Folder", nullptr));
        label_2->setText(QString());
        pushButton_2->setText(QApplication::translate("highpassfilt", "Transform", nullptr));
        retBtn->setText(QApplication::translate("highpassfilt", "Return", nullptr));
        label_3->setText(QApplication::translate("highpassfilt", "High Pass Filter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class highpassfilt: public Ui_highpassfilt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HIGHPASSFILT_H
