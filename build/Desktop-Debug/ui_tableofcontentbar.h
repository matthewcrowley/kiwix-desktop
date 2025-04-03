/********************************************************************************
** Form generated from reading UI file 'tableofcontentbar.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLEOFCONTENTBAR_H
#define UI_TABLEOFCONTENTBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tableofcontentbar
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *titleLabel;
    QSpacerItem *horizontalSpacer;
    QLabel *hideLabel;
    QFrame *line;
    QTreeWidget *tree;

    void setupUi(QWidget *tableofcontentbar)
    {
        if (tableofcontentbar->objectName().isEmpty())
            tableofcontentbar->setObjectName(QString::fromUtf8("tableofcontentbar"));
        tableofcontentbar->resize(400, 300);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableofcontentbar->sizePolicy().hasHeightForWidth());
        tableofcontentbar->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(tableofcontentbar);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        titleLabel = new QLabel(tableofcontentbar);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        QFont font;
        font.setPointSize(16);
        titleLabel->setFont(font);
        titleLabel->setIndent(0);

        horizontalLayout->addWidget(titleLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        hideLabel = new QLabel(tableofcontentbar);
        hideLabel->setObjectName(QString::fromUtf8("hideLabel"));
        hideLabel->setIndent(0);

        horizontalLayout->addWidget(hideLabel);


        verticalLayout->addLayout(horizontalLayout);

        line = new QFrame(tableofcontentbar);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        tree = new QTreeWidget(tableofcontentbar);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        tree->setHeaderItem(__qtreewidgetitem);
        tree->setObjectName(QString::fromUtf8("tree"));
        tree->setFrameShape(QFrame::NoFrame);
        tree->setLineWidth(0);
        tree->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tree->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tree->setTextElideMode(Qt::ElideRight);
        tree->setIndentation(30);
        tree->setUniformRowHeights(true);
        tree->setItemsExpandable(true);
        tree->setHeaderHidden(true);
        tree->setExpandsOnDoubleClick(false);

        verticalLayout->addWidget(tree);


        retranslateUi(tableofcontentbar);

        QMetaObject::connectSlotsByName(tableofcontentbar);
    } // setupUi

    void retranslateUi(QWidget *tableofcontentbar)
    {
        tableofcontentbar->setWindowTitle(QCoreApplication::translate("tableofcontentbar", "Form", nullptr));
        titleLabel->setText(QString());
        hideLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class tableofcontentbar: public Ui_tableofcontentbar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLEOFCONTENTBAR_H
