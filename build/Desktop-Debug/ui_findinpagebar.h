/********************************************************************************
** Form generated from reading UI file 'findinpagebar.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDINPAGEBAR_H
#define UI_FINDINPAGEBAR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_FindInPageBar
{
public:
    QHBoxLayout *horizontalLayout;
    QLineEdit *findEdit;
    QPushButton *fNextButton;
    QPushButton *fPreviousButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *hideButton;

    void setupUi(QFrame *FindInPageBar)
    {
        if (FindInPageBar->objectName().isEmpty())
            FindInPageBar->setObjectName(QString::fromUtf8("FindInPageBar"));
        FindInPageBar->resize(833, 43);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FindInPageBar->sizePolicy().hasHeightForWidth());
        FindInPageBar->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(FindInPageBar);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        findEdit = new QLineEdit(FindInPageBar);
        findEdit->setObjectName(QString::fromUtf8("findEdit"));

        horizontalLayout->addWidget(findEdit);

        fNextButton = new QPushButton(FindInPageBar);
        fNextButton->setObjectName(QString::fromUtf8("fNextButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/search_forward.svg"), QSize(), QIcon::Normal, QIcon::Off);
        fNextButton->setIcon(icon);
        fNextButton->setFlat(true);

        horizontalLayout->addWidget(fNextButton);

        fPreviousButton = new QPushButton(FindInPageBar);
        fPreviousButton->setObjectName(QString::fromUtf8("fPreviousButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/search_backward.svg"), QSize(), QIcon::Normal, QIcon::Off);
        fPreviousButton->setIcon(icon1);
        fPreviousButton->setFlat(true);

        horizontalLayout->addWidget(fPreviousButton);

        horizontalSpacer = new QSpacerItem(350, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        hideButton = new QPushButton(FindInPageBar);
        hideButton->setObjectName(QString::fromUtf8("hideButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/close.svg"), QSize(), QIcon::Normal, QIcon::Off);
        hideButton->setIcon(icon2);
        hideButton->setFlat(true);

        horizontalLayout->addWidget(hideButton);


        retranslateUi(FindInPageBar);

        QMetaObject::connectSlotsByName(FindInPageBar);
    } // setupUi

    void retranslateUi(QFrame *FindInPageBar)
    {
        FindInPageBar->setWindowTitle(QCoreApplication::translate("FindInPageBar", "Frame", nullptr));
        findEdit->setPlaceholderText(QCoreApplication::translate("FindInPageBar", "Find in page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindInPageBar: public Ui_FindInPageBar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDINPAGEBAR_H
