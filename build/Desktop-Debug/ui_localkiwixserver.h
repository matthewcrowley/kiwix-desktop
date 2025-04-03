/********************************************************************************
** Form generated from reading UI file 'localkiwixserver.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOCALKIWIXSERVER_H
#define UI_LOCALKIWIXSERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LocalKiwixServer
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *closeButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *KiwixServerButton;
    QStackedWidget *stackedWidget;
    QWidget *StartServerOptions;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *IpChooser;
    QLineEdit *PortChooser;
    QWidget *ServerRunningOptions;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *IpAddress;
    QPushButton *OpenInBrowserButton;
    QLabel *KiwixServerText;

    void setupUi(QDialog *LocalKiwixServer)
    {
        if (LocalKiwixServer->objectName().isEmpty())
            LocalKiwixServer->setObjectName(QString::fromUtf8("LocalKiwixServer"));
        LocalKiwixServer->resize(594, 271);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LocalKiwixServer->sizePolicy().hasHeightForWidth());
        LocalKiwixServer->setSizePolicy(sizePolicy);
        LocalKiwixServer->setMinimumSize(QSize(0, 0));
        LocalKiwixServer->setSizeGripEnabled(false);
        LocalKiwixServer->setModal(true);
        gridLayout = new QGridLayout(LocalKiwixServer);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetFixedSize);
        label = new QLabel(LocalKiwixServer);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        closeButton = new QPushButton(LocalKiwixServer);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        closeButton->setFont(font1);
        closeButton->setCursor(QCursor(Qt::PointingHandCursor));
        closeButton->setFlat(true);

        gridLayout->addWidget(closeButton, 4, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 4, 0, 1, 1);

        KiwixServerButton = new QPushButton(LocalKiwixServer);
        KiwixServerButton->setObjectName(QString::fromUtf8("KiwixServerButton"));
        KiwixServerButton->setFont(font1);
        KiwixServerButton->setCursor(QCursor(Qt::PointingHandCursor));
        KiwixServerButton->setAutoFillBackground(false);
        KiwixServerButton->setFlat(true);

        gridLayout->addWidget(KiwixServerButton, 4, 2, 1, 1);

        stackedWidget = new QStackedWidget(LocalKiwixServer);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy1);
        stackedWidget->setMinimumSize(QSize(50, 50));
        StartServerOptions = new QWidget();
        StartServerOptions->setObjectName(QString::fromUtf8("StartServerOptions"));
        horizontalLayout_2 = new QHBoxLayout(StartServerOptions);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        IpChooser = new QComboBox(StartServerOptions);
        IpChooser->setObjectName(QString::fromUtf8("IpChooser"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(IpChooser->sizePolicy().hasHeightForWidth());
        IpChooser->setSizePolicy(sizePolicy2);
        IpChooser->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(IpChooser);

        PortChooser = new QLineEdit(StartServerOptions);
        PortChooser->setObjectName(QString::fromUtf8("PortChooser"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(PortChooser->sizePolicy().hasHeightForWidth());
        PortChooser->setSizePolicy(sizePolicy3);

        horizontalLayout_2->addWidget(PortChooser);

        stackedWidget->addWidget(StartServerOptions);
        ServerRunningOptions = new QWidget();
        ServerRunningOptions->setObjectName(QString::fromUtf8("ServerRunningOptions"));
        horizontalLayout_3 = new QHBoxLayout(ServerRunningOptions);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        IpAddress = new QLineEdit(ServerRunningOptions);
        IpAddress->setObjectName(QString::fromUtf8("IpAddress"));

        horizontalLayout_3->addWidget(IpAddress);

        OpenInBrowserButton = new QPushButton(ServerRunningOptions);
        OpenInBrowserButton->setObjectName(QString::fromUtf8("OpenInBrowserButton"));
        OpenInBrowserButton->setEnabled(true);
        OpenInBrowserButton->setFont(font1);
        OpenInBrowserButton->setCursor(QCursor(Qt::PointingHandCursor));
        OpenInBrowserButton->setFlat(true);

        horizontalLayout_3->addWidget(OpenInBrowserButton);

        stackedWidget->addWidget(ServerRunningOptions);

        gridLayout->addWidget(stackedWidget, 2, 0, 1, 3);

        KiwixServerText = new QLabel(LocalKiwixServer);
        KiwixServerText->setObjectName(QString::fromUtf8("KiwixServerText"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(KiwixServerText->sizePolicy().hasHeightForWidth());
        KiwixServerText->setSizePolicy(sizePolicy4);
        KiwixServerText->setMinimumSize(QSize(450, 0));
        QFont font2;
        font2.setPointSize(12);
        KiwixServerText->setFont(font2);
        KiwixServerText->setWordWrap(true);

        gridLayout->addWidget(KiwixServerText, 1, 0, 1, 3);


        retranslateUi(LocalKiwixServer);

        KiwixServerButton->setDefault(false);
        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(LocalKiwixServer);
    } // setupUi

    void retranslateUi(QDialog *LocalKiwixServer)
    {
        LocalKiwixServer->setWindowTitle(QCoreApplication::translate("LocalKiwixServer", "Local Kiwix Server Settings - Kiwix", nullptr));
        label->setText(QCoreApplication::translate("LocalKiwixServer", "Local Kiwix Server", nullptr));
        closeButton->setText(QCoreApplication::translate("LocalKiwixServer", "Close", nullptr));
        KiwixServerButton->setText(QCoreApplication::translate("LocalKiwixServer", "Start Kiwix Server", nullptr));
        OpenInBrowserButton->setText(QCoreApplication::translate("LocalKiwixServer", "Open in browser", nullptr));
        KiwixServerText->setText(QCoreApplication::translate("LocalKiwixServer", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LocalKiwixServer: public Ui_LocalKiwixServer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOCALKIWIXSERVER_H
