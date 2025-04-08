/********************************************************************************
** Form generated from reading UI file 'choiceitem.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOICEITEM_H
#define UI_CHOICEITEM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChoiceItem
{
public:
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QLabel *itemLabel;
    QPushButton *closeButton;

    void setupUi(QWidget *ChoiceItem)
    {
        if (ChoiceItem->objectName().isEmpty())
            ChoiceItem->setObjectName(QString::fromUtf8("ChoiceItem"));
        ChoiceItem->resize(119, 35);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ChoiceItem->sizePolicy().hasHeightForWidth());
        ChoiceItem->setSizePolicy(sizePolicy);
        ChoiceItem->setMinimumSize(QSize(0, 30));
        horizontalLayout = new QHBoxLayout(ChoiceItem);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(ChoiceItem);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setMaximumSize(QSize(16777215, 16777215));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(3, 3, 3, 3);
        itemLabel = new QLabel(frame);
        itemLabel->setObjectName(QString::fromUtf8("itemLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(itemLabel->sizePolicy().hasHeightForWidth());
        itemLabel->setSizePolicy(sizePolicy2);
        itemLabel->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_2->addWidget(itemLabel);

        closeButton = new QPushButton(frame);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setEnabled(true);
        sizePolicy.setHeightForWidth(closeButton->sizePolicy().hasHeightForWidth());
        closeButton->setSizePolicy(sizePolicy);
        closeButton->setMinimumSize(QSize(0, 0));
        closeButton->setMaximumSize(QSize(10, 16777215));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/xmark-solid.svg"), QSize(), QIcon::Normal, QIcon::Off);
        closeButton->setIcon(icon);
        closeButton->setIconSize(QSize(10, 20));
        closeButton->setFlat(true);

        horizontalLayout_2->addWidget(closeButton);


        horizontalLayout->addWidget(frame);


        retranslateUi(ChoiceItem);

        QMetaObject::connectSlotsByName(ChoiceItem);
    } // setupUi

    void retranslateUi(QWidget *ChoiceItem)
    {
        ChoiceItem->setWindowTitle(QCoreApplication::translate("ChoiceItem", "Form", nullptr));
        itemLabel->setText(QCoreApplication::translate("ChoiceItem", "TextLabel", nullptr));
        closeButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ChoiceItem: public Ui_ChoiceItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOICEITEM_H
