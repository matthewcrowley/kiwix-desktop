/********************************************************************************
** Form generated from reading UI file 'kiwixchoicebox.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KIWIXCHOICEBOX_H
#define UI_KIWIXCHOICEBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_kiwixchoicebox
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QLabel *choiceLabel;
    QPushButton *clearButton;
    QWidget *currentChoices;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *kiwixchoicebox)
    {
        if (kiwixchoicebox->objectName().isEmpty())
            kiwixchoicebox->setObjectName(QString::fromUtf8("kiwixchoicebox"));
        kiwixchoicebox->resize(268, 54);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(kiwixchoicebox->sizePolicy().hasHeightForWidth());
        kiwixchoicebox->setSizePolicy(sizePolicy);
        kiwixchoicebox->setMinimumSize(QSize(0, 0));
        verticalLayout = new QVBoxLayout(kiwixchoicebox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 0, -1, 0);
        frame_2 = new QFrame(kiwixchoicebox);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Plain);
        horizontalLayout = new QHBoxLayout(frame_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        choiceLabel = new QLabel(frame_2);
        choiceLabel->setObjectName(QString::fromUtf8("choiceLabel"));

        horizontalLayout->addWidget(choiceLabel);

        clearButton = new QPushButton(frame_2);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        clearButton->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(clearButton);


        verticalLayout->addWidget(frame_2);

        currentChoices = new QWidget(kiwixchoicebox);
        currentChoices->setObjectName(QString::fromUtf8("currentChoices"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(currentChoices->sizePolicy().hasHeightForWidth());
        currentChoices->setSizePolicy(sizePolicy1);
        currentChoices->setMinimumSize(QSize(250, 0));

        verticalLayout->addWidget(currentChoices);

        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(kiwixchoicebox);

        QMetaObject::connectSlotsByName(kiwixchoicebox);
    } // setupUi

    void retranslateUi(QWidget *kiwixchoicebox)
    {
        kiwixchoicebox->setWindowTitle(QCoreApplication::translate("kiwixchoicebox", "Form", nullptr));
        choiceLabel->setText(QCoreApplication::translate("kiwixchoicebox", "TextLabel", nullptr));
        clearButton->setText(QCoreApplication::translate("kiwixchoicebox", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class kiwixchoicebox: public Ui_kiwixchoicebox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KIWIXCHOICEBOX_H
