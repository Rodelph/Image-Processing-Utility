/********************************************************************************
** Form generated from reading UI file 'medfilt.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEDFILT_H
#define UI_MEDFILT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_medfilt
{
public:
    QPushButton *retBtn;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *foldBtn;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QPushButton *transBtn;
    QLabel *label_3;

    void setupUi(QDialog *medfilt)
    {
        if (medfilt->objectName().isEmpty())
            medfilt->setObjectName(QString::fromUtf8("medfilt"));
        medfilt->resize(1366, 720);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(medfilt->sizePolicy().hasHeightForWidth());
        medfilt->setSizePolicy(sizePolicy);
        medfilt->setMinimumSize(QSize(1366, 720));
        medfilt->setMaximumSize(QSize(1366, 720));
        retBtn = new QPushButton(medfilt);
        retBtn->setObjectName(QString::fromUtf8("retBtn"));
        retBtn->setGeometry(QRect(10, 30, 89, 25));
        horizontalLayoutWidget = new QWidget(medfilt);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(9, 80, 1341, 621));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        foldBtn = new QPushButton(horizontalLayoutWidget);
        foldBtn->setObjectName(QString::fromUtf8("foldBtn"));

        verticalLayout->addWidget(foldBtn, 0, Qt::AlignHCenter);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        transBtn = new QPushButton(horizontalLayoutWidget);
        transBtn->setObjectName(QString::fromUtf8("transBtn"));

        verticalLayout_2->addWidget(transBtn, 0, Qt::AlignHCenter);


        horizontalLayout->addLayout(verticalLayout_2);

        label_3 = new QLabel(medfilt);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(570, 20, 211, 41));
        QFont font;
        font.setPointSize(21);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        retranslateUi(medfilt);

        QMetaObject::connectSlotsByName(medfilt);
    } // setupUi

    void retranslateUi(QDialog *medfilt)
    {
        medfilt->setWindowTitle(QApplication::translate("medfilt", "Dialog", nullptr));
        retBtn->setText(QApplication::translate("medfilt", "Return", nullptr));
        label->setText(QString());
        foldBtn->setText(QApplication::translate("medfilt", "Folder", nullptr));
        label_2->setText(QString());
        transBtn->setText(QApplication::translate("medfilt", "Transform", nullptr));
        label_3->setText(QApplication::translate("medfilt", "Median Filter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class medfilt: public Ui_medfilt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEDFILT_H
