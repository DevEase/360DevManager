#include "PropertiesDockWidget.h"

PropertiesDockWidget::PropertiesDockWidget(std::shared_ptr<XBDM::DevConsole> console, QWidget *parent) :
    QDockWidget(parent)
{
    QWidget *dockWidgetContents = new QWidget();

    QVBoxLayout *verticalLayout_3 = new QVBoxLayout(dockWidgetContents);
    verticalLayout_3->setSpacing(6);
    verticalLayout_3->setContentsMargins(11, 11, 11, 11);

    QHBoxLayout *horizontalLayout = new QHBoxLayout();
    horizontalLayout->setSpacing(6);

    QVBoxLayout *verticalLayout_2 = new QVBoxLayout();
    verticalLayout_2->setSpacing(6);

    QLabel *label = new QLabel(dockWidgetContents);
    verticalLayout_2->addWidget(label);

    QLabel *label_2 = new QLabel(dockWidgetContents);
    verticalLayout_2->addWidget(label_2);

    QLabel *label_3 = new QLabel(dockWidgetContents);
    verticalLayout_2->addWidget(label_3);

    QLabel *label_4 = new QLabel(dockWidgetContents);
    verticalLayout_2->addWidget(label_4);

    QLabel *label_5 = new QLabel(dockWidgetContents);
    verticalLayout_2->addWidget(label_5);

    QLabel *label_6 = new QLabel(dockWidgetContents);
    verticalLayout_2->addWidget(label_6);

    QLabel *label_7 = new QLabel(dockWidgetContents);
    verticalLayout_2->addWidget(label_7);

    QLabel *label_8 = new QLabel(dockWidgetContents);
    verticalLayout_2->addWidget(label_8);

    QLabel *label_9 = new QLabel(dockWidgetContents);
    verticalLayout_2->addWidget(label_9);

    QLabel *label_10 = new QLabel(dockWidgetContents);
    verticalLayout_2->addWidget(label_10);

    QLabel *label_11 = new QLabel(dockWidgetContents);
    verticalLayout_2->addWidget(label_11);

    horizontalLayout->addLayout(verticalLayout_2);

    QVBoxLayout *verticalLayout = new QVBoxLayout();
    verticalLayout->setSpacing(6);
    QLabel *lblDebugName = new QLabel(dockWidgetContents);
    lblDebugName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

    verticalLayout->addWidget(lblDebugName);

    QLabel *lblHddEnabled = new QLabel(dockWidgetContents);
    lblHddEnabled->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

    verticalLayout->addWidget(lblHddEnabled);

    QLabel *lblDebugMemorySize = new QLabel(dockWidgetContents);
    lblDebugMemorySize->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

    verticalLayout->addWidget(lblDebugMemorySize);

    QLabel *lblType = new QLabel(dockWidgetContents);;
    lblType->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

    verticalLayout->addWidget(lblType);

    QLabel *lblFeatures = new QLabel(dockWidgetContents);
    lblFeatures->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

    verticalLayout->addWidget(lblFeatures);

    QLabel *lblPlatform = new QLabel(dockWidgetContents);
    lblPlatform->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

    verticalLayout->addWidget(lblPlatform);

    QLabel *lblMotherboard = new QLabel(dockWidgetContents);
    lblMotherboard->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

    verticalLayout->addWidget(lblMotherboard);

    QLabel *lblBaseKrnlVersion = new QLabel(dockWidgetContents);
    lblBaseKrnlVersion->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

    verticalLayout->addWidget(lblBaseKrnlVersion);

    QLabel *lblKrnlVersion = new QLabel(dockWidgetContents);
    lblKrnlVersion->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

    verticalLayout->addWidget(lblKrnlVersion);

    QLabel *lblRecoveryVersion = new QLabel(dockWidgetContents);
    lblRecoveryVersion->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

    verticalLayout->addWidget(lblRecoveryVersion);

    QLabel *lblActiveTitle = new QLabel(dockWidgetContents);
    lblActiveTitle->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

    verticalLayout->addWidget(lblActiveTitle);
    horizontalLayout->addLayout(verticalLayout);
    verticalLayout_3->addLayout(horizontalLayout);

    label->setText("Debug Name: ");
    label_2->setText("HDD Enabled: ");
    label_3->setText("Debug Memory Size: ");
    label_4->setText("Type: ");
    label_5->setText("Features: ");
    label_6->setText("Platform: ");
    label_7->setText("Motherboard: ");
    label_8->setText("Base Kernel Version: ");
    label_9->setText("Kernel Version: ");
    label_10->setText("Recovery Version: ");
    label_11->setText("Active Title: ");
    lblDebugName->setText("...");
    lblHddEnabled->setText("...");
    lblDebugMemorySize->setText("...");
    lblType->setText("...");
    lblFeatures->setText("...");
    lblPlatform->setText("...");
    lblMotherboard->setText("...");
    lblBaseKrnlVersion->setText("...");
    lblKrnlVersion->setText("...");
    lblRecoveryVersion->setText("...");
    lblActiveTitle->setText("...");

    setWindowTitle("Properties");

    // load all of the settings into the GUI
    bool ok;
    lblDebugName->setText(qs(console->GetDebugName(ok)));
    lblActiveTitle->setText(qs(console->GetActiveTitle(ok)));
    lblHddEnabled->setText(console->IsHddEnabled(ok) ? "Yes" : "No");
    lblType->setText(qs(console->GetType(ok)));
    lblFeatures->setText(qs(console->GetFeatures(ok)));
    lblPlatform->setText(qs(console->GetPlatform(ok)));
    lblMotherboard->setText(qs(console->GetMotherboard(ok)));
    lblBaseKrnlVersion->setText(qs(console->GetBaseKernelVersion(ok)));
    lblKrnlVersion->setText(qs(console->GetKernelVersion(ok)));
    lblRecoveryVersion->setText(qs(console->GetRecoveryVersion(ok)));
    lblDebugMemorySize->setText(qhex(console->GetDebugMemorySize(ok)));

    setWidget(dockWidgetContents);
}