/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "src/contentmanagerside.h"
#include "src/readinglistbar.h"
#include "src/tabbar.h"
#include "src/tableofcontentbar.h"
#include "src/topwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *tabBarLayout;
    QToolButton *prevTabButton;
    TabBar *tabBar;
    QToolButton *newTabSideButton;
    QToolButton *nextTabButton;
    QHBoxLayout *horizontalLayout;
    QStackedWidget *sideBar;
    ContentManagerSide *contentmanagerside;
    TableOfContentBar *tableofcontentbar;
    ReadingListBar *readinglistbar;
    QStackedWidget *mainView;
    TopWidget *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(968, 576);
        MainWindow->setDocumentMode(true);
        MainWindow->setDockOptions(QMainWindow::AnimatedDocks);
        MainWindow->setUnifiedTitleAndToolBarOnMac(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        tabBarLayout = new QHBoxLayout();
        tabBarLayout->setSpacing(0);
        tabBarLayout->setObjectName(QString::fromUtf8("tabBarLayout"));
        prevTabButton = new QToolButton(centralWidget);
        prevTabButton->setObjectName(QString::fromUtf8("prevTabButton"));
        prevTabButton->setMaximumSize(QSize(40, 40));
        prevTabButton->setIconSize(QSize(24, 24));

        tabBarLayout->addWidget(prevTabButton);

        tabBar = new TabBar(centralWidget);
        tabBar->setObjectName(QString::fromUtf8("tabBar"));

        tabBarLayout->addWidget(tabBar);

        newTabSideButton = new QToolButton(centralWidget);
        newTabSideButton->setObjectName(QString::fromUtf8("newTabSideButton"));
        newTabSideButton->setMaximumSize(QSize(40, 40));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/new-tab-icon.svg"), QSize(), QIcon::Normal, QIcon::Off);
        newTabSideButton->setIcon(icon);
        newTabSideButton->setIconSize(QSize(16, 16));

        tabBarLayout->addWidget(newTabSideButton);

        nextTabButton = new QToolButton(centralWidget);
        nextTabButton->setObjectName(QString::fromUtf8("nextTabButton"));
        nextTabButton->setMaximumSize(QSize(40, 40));
        nextTabButton->setIconSize(QSize(24, 24));

        tabBarLayout->addWidget(nextTabButton);


        verticalLayout_3->addLayout(tabBarLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        sideBar = new QStackedWidget(centralWidget);
        sideBar->setObjectName(QString::fromUtf8("sideBar"));
        sideBar->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sideBar->sizePolicy().hasHeightForWidth());
        sideBar->setSizePolicy(sizePolicy);
        sideBar->setFrameShape(QFrame::NoFrame);
        sideBar->setFrameShadow(QFrame::Plain);
        sideBar->setLineWidth(0);
        contentmanagerside = new ContentManagerSide();
        contentmanagerside->setObjectName(QString::fromUtf8("contentmanagerside"));
        sizePolicy.setHeightForWidth(contentmanagerside->sizePolicy().hasHeightForWidth());
        contentmanagerside->setSizePolicy(sizePolicy);
        sideBar->addWidget(contentmanagerside);
        tableofcontentbar = new TableOfContentBar();
        tableofcontentbar->setObjectName(QString::fromUtf8("tableofcontentbar"));
        sideBar->addWidget(tableofcontentbar);
        readinglistbar = new ReadingListBar();
        readinglistbar->setObjectName(QString::fromUtf8("readinglistbar"));
        sideBar->addWidget(readinglistbar);

        horizontalLayout->addWidget(sideBar);

        mainView = new QStackedWidget(centralWidget);
        mainView->setObjectName(QString::fromUtf8("mainView"));
        mainView->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(mainView);


        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout->addLayout(verticalLayout_3);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new TopWidget(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setMovable(false);
        mainToolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Kiwix", nullptr));
        prevTabButton->setText(QString());
        newTabSideButton->setText(QString());
        nextTabButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
