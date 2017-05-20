/********************************************************************************
** Form generated from reading UI file 'connectwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTWINDOW_H
#define UI_CONNECTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConnectWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QLineEdit *ipField;
    QLineEdit *portField;
    QLineEdit *nameField;
    QSpacerItem *verticalSpacer;
    QPushButton *connectButton;
    QPushButton *exitButton;

    void setupUi(QMainWindow *ConnectWindow)
    {
        if (ConnectWindow->objectName().isEmpty())
            ConnectWindow->setObjectName(QStringLiteral("ConnectWindow"));
        ConnectWindow->setWindowModality(Qt::WindowModal);
        ConnectWindow->resize(240, 270);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ConnectWindow->sizePolicy().hasHeightForWidth());
        ConnectWindow->setSizePolicy(sizePolicy);
        ConnectWindow->setLayoutDirection(Qt::LeftToRight);
        centralwidget = new QWidget(ConnectWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy1);
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        ipField = new QLineEdit(centralwidget);
        ipField->setObjectName(QStringLiteral("ipField"));
        ipField->setMaxLength(15);
        ipField->setClearButtonEnabled(false);

        verticalLayout->addWidget(ipField);

        portField = new QLineEdit(centralwidget);
        portField->setObjectName(QStringLiteral("portField"));

        verticalLayout->addWidget(portField);

        nameField = new QLineEdit(centralwidget);
        nameField->setObjectName(QStringLiteral("nameField"));

        verticalLayout->addWidget(nameField);


        verticalLayout_3->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        connectButton = new QPushButton(centralwidget);
        connectButton->setObjectName(QStringLiteral("connectButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(connectButton->sizePolicy().hasHeightForWidth());
        connectButton->setSizePolicy(sizePolicy2);

        verticalLayout_3->addWidget(connectButton);

        exitButton = new QPushButton(centralwidget);
        exitButton->setObjectName(QStringLiteral("exitButton"));
        sizePolicy2.setHeightForWidth(exitButton->sizePolicy().hasHeightForWidth());
        exitButton->setSizePolicy(sizePolicy2);

        verticalLayout_3->addWidget(exitButton);

        ConnectWindow->setCentralWidget(centralwidget);

        retranslateUi(ConnectWindow);

        connectButton->setDefault(true);


        QMetaObject::connectSlotsByName(ConnectWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ConnectWindow)
    {
        ConnectWindow->setWindowTitle(QApplication::translate("ConnectWindow", "MainWindow", Q_NULLPTR));
        ipField->setText(QString());
        ipField->setPlaceholderText(QApplication::translate("ConnectWindow", "IP Address", Q_NULLPTR));
        portField->setPlaceholderText(QApplication::translate("ConnectWindow", "Port number", Q_NULLPTR));
        nameField->setPlaceholderText(QApplication::translate("ConnectWindow", "Name", Q_NULLPTR));
        connectButton->setText(QApplication::translate("ConnectWindow", "Connect", Q_NULLPTR));
        exitButton->setText(QApplication::translate("ConnectWindow", "Exit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ConnectWindow: public Ui_ConnectWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTWINDOW_H
