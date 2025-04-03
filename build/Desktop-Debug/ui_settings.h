/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QWidget *Settings;
    QHBoxLayout *horizontalLayout_4;
    QWidget *widget;
    QVBoxLayout *verticalLayout1;
    QVBoxLayout *mainLayout;
    QLabel *settingsLabel;
    QFrame *line_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *zoomPercentLabel;
    QSpacerItem *horizontalSpacer_4;
    QSpinBox *zoomPercentSpinBox;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *downloadDirLabel;
    QSpacerItem *horizontalSpacer;
    QLabel *downloadDirPath;
    QPushButton *downloadDirPathCopy;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *resetButton;
    QPushButton *browseButton;
    QFrame *line_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *monitorDirLabel;
    QLabel *monitorHelp;
    QSpacerItem *horizontalSpacer_6;
    QLabel *monitorDirPath;
    QPushButton *monitorDirPathCopy;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *monitorClear;
    QPushButton *monitorBrowse;
    QFrame *line_5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *moveToTrashLabel;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *moveToTrashToggle;
    QFrame *line_6;
    QHBoxLayout *horizontalLayout_9;
    QLabel *reopenTabLabel;
    QSpacerItem *horizontalSpacer_5;
    QCheckBox *reopenTabToggle;
    QSpacerItem *verticalSpacer;

    void setupUi(QScrollArea *scrollArea)
    {
        if (scrollArea->objectName().isEmpty())
            scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->resize(1029, 580);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1029, 580));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setAlignment(Qt::AlignCenter);
        Settings = new QWidget(scrollAreaWidgetContents);
        Settings->setObjectName(QString::fromUtf8("Settings"));
        Settings->setGeometry(QRect(0, 0, 1029, 580));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Settings->sizePolicy().hasHeightForWidth());
        Settings->setSizePolicy(sizePolicy);
        Settings->setMinimumSize(QSize(600, 450));
        horizontalLayout_4 = new QHBoxLayout(Settings);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(Settings);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout1 = new QVBoxLayout(widget);
        verticalLayout1->setObjectName(QString::fromUtf8("verticalLayout1"));
        mainLayout = new QVBoxLayout();
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        settingsLabel = new QLabel(widget);
        settingsLabel->setObjectName(QString::fromUtf8("settingsLabel"));
        settingsLabel->setMinimumSize(QSize(0, 0));

        mainLayout->addWidget(settingsLabel);

        line_3 = new QFrame(widget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        mainLayout->addWidget(line_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        zoomPercentLabel = new QLabel(widget);
        zoomPercentLabel->setObjectName(QString::fromUtf8("zoomPercentLabel"));

        horizontalLayout_2->addWidget(zoomPercentLabel);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        zoomPercentSpinBox = new QSpinBox(widget);
        zoomPercentSpinBox->setObjectName(QString::fromUtf8("zoomPercentSpinBox"));
        zoomPercentSpinBox->setFrame(false);
        zoomPercentSpinBox->setMinimum(30);
        zoomPercentSpinBox->setMaximum(500);
        zoomPercentSpinBox->setSingleStep(10);
        zoomPercentSpinBox->setValue(100);

        horizontalLayout_2->addWidget(zoomPercentSpinBox);


        mainLayout->addLayout(horizontalLayout_2);

        line_2 = new QFrame(widget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShadow(QFrame::Plain);
        line_2->setFrameShape(QFrame::HLine);

        mainLayout->addWidget(line_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        downloadDirLabel = new QLabel(widget);
        downloadDirLabel->setObjectName(QString::fromUtf8("downloadDirLabel"));

        horizontalLayout_3->addWidget(downloadDirLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        downloadDirPath = new QLabel(widget);
        downloadDirPath->setObjectName(QString::fromUtf8("downloadDirPath"));

        horizontalLayout_3->addWidget(downloadDirPath);

        downloadDirPathCopy = new QPushButton(widget);
        downloadDirPathCopy->setObjectName(QString::fromUtf8("downloadDirPathCopy"));

        horizontalLayout_3->addWidget(downloadDirPathCopy);


        mainLayout->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        resetButton = new QPushButton(widget);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));
        resetButton->setMouseTracking(true);
        resetButton->setAutoFillBackground(true);
        resetButton->setStyleSheet(QString::fromUtf8(""));
        resetButton->setAutoDefault(true);
        resetButton->setFlat(true);

        horizontalLayout_5->addWidget(resetButton);

        browseButton = new QPushButton(widget);
        browseButton->setObjectName(QString::fromUtf8("browseButton"));
        browseButton->setAutoFillBackground(true);
        browseButton->setStyleSheet(QString::fromUtf8(""));
        browseButton->setFlat(true);

        horizontalLayout_5->addWidget(browseButton);


        mainLayout->addLayout(horizontalLayout_5);

        line_4 = new QFrame(widget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        mainLayout->addWidget(line_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        monitorDirLabel = new QLabel(widget);
        monitorDirLabel->setObjectName(QString::fromUtf8("monitorDirLabel"));

        horizontalLayout_6->addWidget(monitorDirLabel);

        monitorHelp = new QLabel(widget);
        monitorHelp->setObjectName(QString::fromUtf8("monitorHelp"));
        monitorHelp->setTextFormat(Qt::AutoText);
        monitorHelp->setAlignment(Qt::AlignCenter);
        monitorHelp->setIndent(-5);

        horizontalLayout_6->addWidget(monitorHelp);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        monitorDirPath = new QLabel(widget);
        monitorDirPath->setObjectName(QString::fromUtf8("monitorDirPath"));

        horizontalLayout_6->addWidget(monitorDirPath);

        monitorDirPathCopy = new QPushButton(widget);
        monitorDirPathCopy->setObjectName(QString::fromUtf8("monitorDirPathCopy"));

        horizontalLayout_6->addWidget(monitorDirPathCopy);


        mainLayout->addLayout(horizontalLayout_6);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_7);

        monitorClear = new QPushButton(widget);
        monitorClear->setObjectName(QString::fromUtf8("monitorClear"));

        horizontalLayout_8->addWidget(monitorClear);

        monitorBrowse = new QPushButton(widget);
        monitorBrowse->setObjectName(QString::fromUtf8("monitorBrowse"));

        horizontalLayout_8->addWidget(monitorBrowse);


        mainLayout->addLayout(horizontalLayout_8);

        line_5 = new QFrame(widget);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        mainLayout->addWidget(line_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, -1, -1, 0);
        moveToTrashLabel = new QLabel(widget);
        moveToTrashLabel->setObjectName(QString::fromUtf8("moveToTrashLabel"));

        horizontalLayout_7->addWidget(moveToTrashLabel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);

        moveToTrashToggle = new QCheckBox(widget);
        moveToTrashToggle->setObjectName(QString::fromUtf8("moveToTrashToggle"));
        moveToTrashToggle->setChecked(true);

        horizontalLayout_7->addWidget(moveToTrashToggle);


        mainLayout->addLayout(horizontalLayout_7);

        line_6 = new QFrame(widget);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        mainLayout->addWidget(line_6);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(-1, 0, 0, -1);
        reopenTabLabel = new QLabel(widget);
        reopenTabLabel->setObjectName(QString::fromUtf8("reopenTabLabel"));

        horizontalLayout_9->addWidget(reopenTabLabel);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_5);

        reopenTabToggle = new QCheckBox(widget);
        reopenTabToggle->setObjectName(QString::fromUtf8("reopenTabToggle"));

        horizontalLayout_9->addWidget(reopenTabToggle);


        mainLayout->addLayout(horizontalLayout_9);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        mainLayout->addItem(verticalSpacer);


        verticalLayout1->addLayout(mainLayout);


        horizontalLayout_4->addWidget(widget);


        verticalLayout->addWidget(Settings);

        scrollArea->setWidget(scrollAreaWidgetContents);

        retranslateUi(scrollArea);

        QMetaObject::connectSlotsByName(scrollArea);
    } // setupUi

    void retranslateUi(QScrollArea *scrollArea)
    {
        Settings->setWindowTitle(QCoreApplication::translate("Settings", "Form", nullptr));
        settingsLabel->setText(QCoreApplication::translate("Settings", "Settings", nullptr));
        zoomPercentLabel->setText(QCoreApplication::translate("Settings", "Zoom level:", nullptr));
        zoomPercentSpinBox->setSuffix(QCoreApplication::translate("Settings", "%", nullptr));
        downloadDirLabel->setText(QCoreApplication::translate("Settings", "Download directory:", nullptr));
        downloadDirPath->setText(QString());
        downloadDirPathCopy->setText(QString());
        resetButton->setText(QCoreApplication::translate("Settings", "Reset", nullptr));
        browseButton->setText(QCoreApplication::translate("Settings", "Browse", nullptr));
        monitorDirLabel->setText(QCoreApplication::translate("Settings", "TextLabel", nullptr));
        monitorHelp->setText(QCoreApplication::translate("Settings", "?", nullptr));
        monitorDirPath->setText(QCoreApplication::translate("Settings", "TextLabel", nullptr));
        monitorDirPathCopy->setText(QString());
        monitorClear->setText(QCoreApplication::translate("Settings", "Reset", nullptr));
        monitorBrowse->setText(QCoreApplication::translate("Settings", "Browse", nullptr));
        moveToTrashLabel->setText(QCoreApplication::translate("Settings", "Move deleted files to trash", nullptr));
        moveToTrashToggle->setText(QString());
        reopenTabLabel->setText(QCoreApplication::translate("Settings", "Re-open closed tabs", nullptr));
        reopenTabToggle->setText(QString());
        (void)scrollArea;
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
