/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *com_groupbox;
    QPushButton *com_button;
    QComboBox *com_combobox;
    QLabel *comstate_label;
    QLabel *service_message;
    QPushButton *com_refresh_button;
    QPushButton *echo_button;
    QCheckBox *checkBox;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy1);
        com_groupbox = new QGroupBox(centralwidget);
        com_groupbox->setObjectName(QString::fromUtf8("com_groupbox"));
        com_groupbox->setGeometry(QRect(20, 10, 281, 151));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(com_groupbox->sizePolicy().hasHeightForWidth());
        com_groupbox->setSizePolicy(sizePolicy2);
        com_button = new QPushButton(com_groupbox);
        com_button->setObjectName(QString::fromUtf8("com_button"));
        com_button->setGeometry(QRect(100, 30, 91, 21));
        com_combobox = new QComboBox(com_groupbox);
        com_combobox->setObjectName(QString::fromUtf8("com_combobox"));
        com_combobox->setGeometry(QRect(10, 30, 81, 22));
        comstate_label = new QLabel(com_groupbox);
        comstate_label->setObjectName(QString::fromUtf8("comstate_label"));
        comstate_label->setGeometry(QRect(10, 60, 181, 16));
        comstate_label->setAlignment(Qt::AlignCenter);
        service_message = new QLabel(com_groupbox);
        service_message->setObjectName(QString::fromUtf8("service_message"));
        service_message->setGeometry(QRect(200, 80, 71, 21));
        service_message->setAlignment(Qt::AlignCenter);
        com_refresh_button = new QPushButton(com_groupbox);
        com_refresh_button->setObjectName(QString::fromUtf8("com_refresh_button"));
        com_refresh_button->setGeometry(QRect(10, 80, 181, 21));
        echo_button = new QPushButton(com_groupbox);
        echo_button->setObjectName(QString::fromUtf8("echo_button"));
        echo_button->setGeometry(QRect(210, 30, 51, 21));
        checkBox = new QCheckBox(com_groupbox);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(20, 110, 241, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        com_groupbox->setTitle(QCoreApplication::translate("MainWindow", "COM Port", nullptr));
        com_button->setText(QCoreApplication::translate("MainWindow", "Open port", nullptr));
        comstate_label->setText(QCoreApplication::translate("MainWindow", "Closed", nullptr));
        service_message->setText(QCoreApplication::translate("MainWindow", "Empty", nullptr));
        com_refresh_button->setText(QCoreApplication::translate("MainWindow", "Refresh", nullptr));
        echo_button->setText(QCoreApplication::translate("MainWindow", "Echo", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "\320\222\320\272\320\273\321\216\321\207\320\270\321\202\321\214/\320\222\321\213\320\272\320\273\321\216\321\207\320\270\321\202\321\214 \320\276\320\263\321\200\320\260\320\275\320\270\321\207\320\270\321\202\320\265\320\273\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
