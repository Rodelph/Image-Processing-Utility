/********************************************************************************
** Form generated from reading UI file 'segmfilt.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEGMFILT_H
#define UI_SEGMFILT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_segmfilt
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *foldBtn;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QPushButton *transBtn;
    QPushButton *retBtn;
    QLabel *label_3;

    void setupUi(QDialog *segmfilt)
    {
        if (segmfilt->objectName().isEmpty())
            segmfilt->setObjectName(QString::fromUtf8("segmfilt"));
        segmfilt->resize(1366, 720);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(segmfilt->sizePolicy().hasHeightForWidth());
        segmfilt->setSizePolicy(sizePolicy);
        segmfilt->setMinimumSize(QSize(1366, 720));
        segmfilt->setMaximumSize(QSize(1366, 720));
        horizontalLayoutWidget = new QWidget(segmfilt);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(9, 70, 1161, 631));
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

        verticalLayout->addWidget(foldBtn);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        transBtn = new QPushButton(horizontalLayoutWidget);
        transBtn->setObjectName(QString::fromUtf8("transBtn"));

        verticalLayout_2->addWidget(transBtn);


        horizontalLayout->addLayout(verticalLayout_2);

        retBtn = new QPushButton(segmfilt);
        retBtn->setObjectName(QString::fromUtf8("retBtn"));
        retBtn->setGeometry(QRect(10, 20, 89, 25));
        label_3 = new QLabel(segmfilt);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(490, 20, 221, 31));
        QFont font;
        font.setPointSize(19);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        retranslateUi(segmfilt);

        QMetaObject::connectSlotsByName(segmfilt);
    } // setupUi

    void retranslateUi(QDialog *segmfilt)
    {
        segmfilt->setWindowTitle(QApplication::translate("segmfilt", "Dialog", nullptr));
        label->setText(QString());
        foldBtn->setText(QApplication::translate("segmfilt", "Folder", nullptr));
        label_2->setText(QString());
        transBtn->setText(QApplication::translate("segmfilt", "Transform", nullptr));
        retBtn->setText(QApplication::translate("segmfilt", "Return ", nullptr));
        label_3->setText(QApplication::translate("segmfilt", "Sementation Filter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class segmfilt: public Ui_segmfilt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEGMFILT_H
