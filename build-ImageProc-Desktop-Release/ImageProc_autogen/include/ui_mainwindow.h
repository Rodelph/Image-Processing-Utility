/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionDetails;
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGridLayout *gridLayout;
    QPushButton *histBtn;
    QPushButton *filtBtn;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuInfo;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::ApplicationModal);
        MainWindow->setEnabled(true);
        MainWindow->resize(804, 710);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(804, 710));
        MainWindow->setMaximumSize(QSize(804, 710));
        MainWindow->setAutoFillBackground(false);
        actionDetails = new QAction(MainWindow);
        actionDetails->setObjectName(QString::fromUtf8("actionDetails"));
        actionDetails->setCheckable(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 0, 781, 661));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(17);
        font.setBold(true);
        font.setUnderline(false);
        font.setWeight(75);
        font.setStrikeOut(false);
        label->setFont(font);
        label->setAutoFillBackground(false);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        histBtn = new QPushButton(verticalLayoutWidget);
        histBtn->setObjectName(QString::fromUtf8("histBtn"));

        gridLayout->addWidget(histBtn, 1, 0, 1, 1);

        filtBtn = new QPushButton(verticalLayoutWidget);
        filtBtn->setObjectName(QString::fromUtf8("filtBtn"));

        gridLayout->addWidget(filtBtn, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 804, 22));
        menuInfo = new QMenu(menubar);
        menuInfo->setObjectName(QString::fromUtf8("menuInfo"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuInfo->menuAction());
        menuInfo->addAction(actionDetails);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Image Processing", nullptr));
        actionDetails->setText(QApplication::translate("MainWindow", "Details", nullptr));
#ifndef QT_NO_SHORTCUT
        actionDetails->setShortcut(QApplication::translate("MainWindow", "Ctrl+I", nullptr));
#endif // QT_NO_SHORTCUT
        label->setText(QApplication::translate("MainWindow", "Traitement d'Image", nullptr));
        histBtn->setText(QApplication::translate("MainWindow", "Histogram", nullptr));
        filtBtn->setText(QApplication::translate("MainWindow", "Filtres", nullptr));
        menuInfo->setTitle(QApplication::translate("MainWindow", "Info", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
