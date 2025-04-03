/********************************************************************************
** Form generated from reading UI file 'readinglistbar.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_READINGLISTBAR_H
#define UI_READINGLISTBAR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_readinglistbar
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *titleLabel;
    QSpacerItem *horizontalSpacer;
    QPushButton *readingListMenuButton;
    QFrame *line;
    QListWidget *listWidget;

    void setupUi(QWidget *readinglistbar)
    {
        if (readinglistbar->objectName().isEmpty())
            readinglistbar->setObjectName(QString::fromUtf8("readinglistbar"));
        readinglistbar->resize(400, 300);
        verticalLayout = new QVBoxLayout(readinglistbar);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        titleLabel = new QLabel(readinglistbar);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        QFont font;
        font.setPointSize(16);
        titleLabel->setFont(font);

        horizontalLayout->addWidget(titleLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        readingListMenuButton = new QPushButton(readinglistbar);
        readingListMenuButton->setObjectName(QString::fromUtf8("readingListMenuButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/more-vertical.svg"), QSize(), QIcon::Normal, QIcon::Off);
        readingListMenuButton->setIcon(icon);
        readingListMenuButton->setIconSize(QSize(25, 25));
        readingListMenuButton->setFlat(true);

        horizontalLayout->addWidget(readingListMenuButton);


        verticalLayout->addLayout(horizontalLayout);

        line = new QFrame(readinglistbar);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        listWidget = new QListWidget(readinglistbar);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setFrameShape(QFrame::NoFrame);
        listWidget->setLineWidth(0);
        listWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        listWidget->setTextElideMode(Qt::ElideRight);
        listWidget->setProperty("isWrapping", QVariant(false));
        listWidget->setUniformItemSizes(true);
        listWidget->setWordWrap(true);

        verticalLayout->addWidget(listWidget);


        retranslateUi(readinglistbar);

        QMetaObject::connectSlotsByName(readinglistbar);
    } // setupUi

    void retranslateUi(QWidget *readinglistbar)
    {
        readinglistbar->setWindowTitle(QCoreApplication::translate("readinglistbar", "Form", nullptr));
        titleLabel->setText(QCoreApplication::translate("readinglistbar", "Reading List", nullptr));
        readingListMenuButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class readinglistbar: public Ui_readinglistbar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READINGLISTBAR_H
