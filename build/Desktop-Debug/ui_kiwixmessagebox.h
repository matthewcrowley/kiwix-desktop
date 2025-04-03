/********************************************************************************
** Form generated from reading UI file 'kiwixmessagebox.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KIWIXMESSAGEBOX_H
#define UI_KIWIXMESSAGEBOX_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_kiwixmessagebox
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *yesButton;
    QPushButton *okButton;
    QPushButton *noButton;
    QLabel *confirmText;
    QHBoxLayout *horizontalLayout_2;
    QLabel *confirmTitle;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *closeButton;

    void setupUi(QDialog *kiwixmessagebox)
    {
        if (kiwixmessagebox->objectName().isEmpty())
            kiwixmessagebox->setObjectName(QString::fromUtf8("kiwixmessagebox"));
        kiwixmessagebox->resize(368, 166);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(kiwixmessagebox->sizePolicy().hasHeightForWidth());
        kiwixmessagebox->setSizePolicy(sizePolicy);
        kiwixmessagebox->setMaximumSize(QSize(474, 16777215));
        gridLayout = new QGridLayout(kiwixmessagebox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(250, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        yesButton = new QPushButton(kiwixmessagebox);
        yesButton->setObjectName(QString::fromUtf8("yesButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(yesButton->sizePolicy().hasHeightForWidth());
        yesButton->setSizePolicy(sizePolicy1);
        yesButton->setMinimumSize(QSize(100, 0));
        yesButton->setCursor(QCursor(Qt::PointingHandCursor));
        yesButton->setFlat(true);

        horizontalLayout->addWidget(yesButton);

        okButton = new QPushButton(kiwixmessagebox);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        sizePolicy1.setHeightForWidth(okButton->sizePolicy().hasHeightForWidth());
        okButton->setSizePolicy(sizePolicy1);
        okButton->setMinimumSize(QSize(100, 0));
        okButton->setCursor(QCursor(Qt::PointingHandCursor));
        okButton->setFlat(true);

        horizontalLayout->addWidget(okButton);

        noButton = new QPushButton(kiwixmessagebox);
        noButton->setObjectName(QString::fromUtf8("noButton"));
        sizePolicy1.setHeightForWidth(noButton->sizePolicy().hasHeightForWidth());
        noButton->setSizePolicy(sizePolicy1);
        noButton->setMinimumSize(QSize(100, 0));
        noButton->setCursor(QCursor(Qt::PointingHandCursor));
        noButton->setFlat(true);

        horizontalLayout->addWidget(noButton);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 1);

        confirmText = new QLabel(kiwixmessagebox);
        confirmText->setObjectName(QString::fromUtf8("confirmText"));
        sizePolicy.setHeightForWidth(confirmText->sizePolicy().hasHeightForWidth());
        confirmText->setSizePolicy(sizePolicy);
        confirmText->setMaximumSize(QSize(600, 16777215));

        gridLayout->addWidget(confirmText, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        confirmTitle = new QLabel(kiwixmessagebox);
        confirmTitle->setObjectName(QString::fromUtf8("confirmTitle"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(confirmTitle->sizePolicy().hasHeightForWidth());
        confirmTitle->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(confirmTitle);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        closeButton = new QPushButton(kiwixmessagebox);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(closeButton->sizePolicy().hasHeightForWidth());
        closeButton->setSizePolicy(sizePolicy3);
        closeButton->setMaximumSize(QSize(20, 16777215));
        closeButton->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/close.svg"), QSize(), QIcon::Normal, QIcon::Off);
        closeButton->setIcon(icon);

        horizontalLayout_2->addWidget(closeButton);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);


        retranslateUi(kiwixmessagebox);

        QMetaObject::connectSlotsByName(kiwixmessagebox);
    } // setupUi

    void retranslateUi(QDialog *kiwixmessagebox)
    {
        kiwixmessagebox->setWindowTitle(QCoreApplication::translate("kiwixmessagebox", "Dialog", nullptr));
        yesButton->setText(QCoreApplication::translate("kiwixmessagebox", "Yes", nullptr));
        okButton->setText(QCoreApplication::translate("kiwixmessagebox", "Ok", nullptr));
        noButton->setText(QCoreApplication::translate("kiwixmessagebox", "No", nullptr));
        confirmText->setText(QCoreApplication::translate("kiwixmessagebox", "Would you like to confirm doing xyz?", nullptr));
        confirmTitle->setText(QCoreApplication::translate("kiwixmessagebox", "Confirm title", nullptr));
        closeButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class kiwixmessagebox: public Ui_kiwixmessagebox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KIWIXMESSAGEBOX_H
