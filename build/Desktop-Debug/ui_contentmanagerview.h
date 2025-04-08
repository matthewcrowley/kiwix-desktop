/********************************************************************************
** Form generated from reading UI file 'contentmanagerview.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTENTMANAGERVIEW_H
#define UI_CONTENTMANAGERVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_contentmanagerview
{
public:
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *contents;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QTreeView *m_view;
    QWidget *loading;
    QGridLayout *gridLayout;
    QWidget *widget;

    void setupUi(QWidget *contentmanagerview)
    {
        if (contentmanagerview->objectName().isEmpty())
            contentmanagerview->setObjectName(QString::fromUtf8("contentmanagerview"));
        contentmanagerview->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(contentmanagerview);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        stackedWidget = new QStackedWidget(contentmanagerview);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        contents = new QWidget();
        contents->setObjectName(QString::fromUtf8("contents"));
        verticalLayout_3 = new QVBoxLayout(contents);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        m_view = new QTreeView(contents);
        m_view->setObjectName(QString::fromUtf8("m_view"));

        verticalLayout->addWidget(m_view);


        verticalLayout_3->addLayout(verticalLayout);

        stackedWidget->addWidget(contents);
        loading = new QWidget();
        loading->setObjectName(QString::fromUtf8("loading"));
        gridLayout = new QGridLayout(loading);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget = new QWidget(loading);
        widget->setObjectName(QString::fromUtf8("widget"));

        gridLayout->addWidget(widget, 0, 0, 1, 1);

        stackedWidget->addWidget(loading);

        verticalLayout_2->addWidget(stackedWidget);


        retranslateUi(contentmanagerview);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(contentmanagerview);
    } // setupUi

    void retranslateUi(QWidget *contentmanagerview)
    {
        contentmanagerview->setWindowTitle(QCoreApplication::translate("contentmanagerview", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class contentmanagerview: public Ui_contentmanagerview {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTENTMANAGERVIEW_H
