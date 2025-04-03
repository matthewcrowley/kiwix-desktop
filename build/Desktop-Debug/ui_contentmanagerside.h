/********************************************************************************
** Form generated from reading UI file 'contentmanagerside.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTENTMANAGERSIDE_H
#define UI_CONTENTMANAGERSIDE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "src/kiwixchoicebox.h"

QT_BEGIN_NAMESPACE

class Ui_contentmanagerside
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollContents;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *allFileButton;
    QRadioButton *localFileButton;
    QLineEdit *searcher;
    KiwixChoiceBox *languages;
    KiwixChoiceBox *categories;
    QFrame *contentTypeSelector;
    QVBoxLayout *verticalLayout_3;
    KiwixChoiceBox *contentType;
    QSpacerItem *verticalSpacer;
    QButtonGroup *buttonGroup;

    void setupUi(QWidget *contentmanagerside)
    {
        if (contentmanagerside->objectName().isEmpty())
            contentmanagerside->setObjectName(QString::fromUtf8("contentmanagerside"));
        contentmanagerside->resize(300, 386);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(contentmanagerside->sizePolicy().hasHeightForWidth());
        contentmanagerside->setSizePolicy(sizePolicy);
        contentmanagerside->setMinimumSize(QSize(250, 0));
        contentmanagerside->setAutoFillBackground(true);
        verticalLayout = new QVBoxLayout(contentmanagerside);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(contentmanagerside);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setAutoFillBackground(true);
        scrollArea->setWidgetResizable(true);
        scrollContents = new QWidget();
        scrollContents->setObjectName(QString::fromUtf8("scrollContents"));
        scrollContents->setGeometry(QRect(0, 0, 298, 384));
        verticalLayout_4 = new QVBoxLayout(scrollContents);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(9, -1, -1, -1);
        allFileButton = new QRadioButton(scrollContents);
        buttonGroup = new QButtonGroup(contentmanagerside);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(allFileButton);
        allFileButton->setObjectName(QString::fromUtf8("allFileButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(allFileButton->sizePolicy().hasHeightForWidth());
        allFileButton->setSizePolicy(sizePolicy1);
        allFileButton->setCursor(QCursor(Qt::PointingHandCursor));
        allFileButton->setIconSize(QSize(0, 0));

        verticalLayout_4->addWidget(allFileButton);

        localFileButton = new QRadioButton(scrollContents);
        buttonGroup->addButton(localFileButton);
        localFileButton->setObjectName(QString::fromUtf8("localFileButton"));
        sizePolicy1.setHeightForWidth(localFileButton->sizePolicy().hasHeightForWidth());
        localFileButton->setSizePolicy(sizePolicy1);
        localFileButton->setCursor(QCursor(Qt::PointingHandCursor));
        localFileButton->setChecked(true);

        verticalLayout_4->addWidget(localFileButton);

        searcher = new QLineEdit(scrollContents);
        searcher->setObjectName(QString::fromUtf8("searcher"));

        verticalLayout_4->addWidget(searcher);

        languages = new KiwixChoiceBox(scrollContents);
        languages->setObjectName(QString::fromUtf8("languages"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(languages->sizePolicy().hasHeightForWidth());
        languages->setSizePolicy(sizePolicy2);
        languages->setAutoFillBackground(true);

        verticalLayout_4->addWidget(languages);

        categories = new KiwixChoiceBox(scrollContents);
        categories->setObjectName(QString::fromUtf8("categories"));
        sizePolicy2.setHeightForWidth(categories->sizePolicy().hasHeightForWidth());
        categories->setSizePolicy(sizePolicy2);
        categories->setAutoFillBackground(true);

        verticalLayout_4->addWidget(categories);

        contentTypeSelector = new QFrame(scrollContents);
        contentTypeSelector->setObjectName(QString::fromUtf8("contentTypeSelector"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(contentTypeSelector->sizePolicy().hasHeightForWidth());
        contentTypeSelector->setSizePolicy(sizePolicy3);
        contentTypeSelector->setMinimumSize(QSize(0, 0));
        contentTypeSelector->setCursor(QCursor(Qt::PointingHandCursor));
        contentTypeSelector->setFrameShape(QFrame::NoFrame);
        contentTypeSelector->setFrameShadow(QFrame::Sunken);
        contentTypeSelector->setLineWidth(0);
        verticalLayout_3 = new QVBoxLayout(contentTypeSelector);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 0, -1, 0);

        verticalLayout_4->addWidget(contentTypeSelector);

        contentType = new KiwixChoiceBox(scrollContents);
        contentType->setObjectName(QString::fromUtf8("contentType"));

        verticalLayout_4->addWidget(contentType);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        scrollArea->setWidget(scrollContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(contentmanagerside);

        QMetaObject::connectSlotsByName(contentmanagerside);
    } // setupUi

    void retranslateUi(QWidget *contentmanagerside)
    {
        contentmanagerside->setWindowTitle(QCoreApplication::translate("contentmanagerside", "Form", nullptr));
        allFileButton->setText(QCoreApplication::translate("contentmanagerside", "All Files", nullptr));
        localFileButton->setText(QCoreApplication::translate("contentmanagerside", "Local Files", nullptr));
    } // retranslateUi

};

namespace Ui {
    class contentmanagerside: public Ui_contentmanagerside {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTENTMANAGERSIDE_H
