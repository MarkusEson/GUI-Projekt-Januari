/********************************************************************************
** Form generated from reading UI file 'yahtzeemainwin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_YAHTZEEMAINWIN_H
#define UI_YAHTZEEMAINWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_YahtzeeMainWin
{
public:
    QWidget *centralWidget;
    QGraphicsView *gameBackground;
    QWidget *gridLayoutWidget_4;
    QGridLayout *Agrid;
    QPushButton *A8;
    QPushButton *A17;
    QPushButton *A18;
    QPushButton *A13;
    QPushButton *A1;
    QPushButton *A15;
    QPushButton *A14;
    QPushButton *A5;
    QPushButton *A10;
    QPushButton *A11;
    QPushButton *A2;
    QPushButton *A9;
    QPushButton *A19;
    QPushButton *A6;
    QPushButton *A3;
    QPushButton *A12;
    QPushButton *A7;
    QPushButton *A4;
    QPushButton *A16;
    QWidget *gridLayoutWidget_5;
    QGridLayout *Bgrid;
    QPushButton *B14;
    QPushButton *B12;
    QPushButton *B7;
    QPushButton *B18;
    QPushButton *B1;
    QPushButton *B13;
    QPushButton *B11;
    QPushButton *B17;
    QPushButton *B9;
    QPushButton *B16;
    QPushButton *B8;
    QPushButton *B6;
    QPushButton *B19;
    QPushButton *B10;
    QPushButton *B15;
    QPushButton *B4;
    QPushButton *B2;
    QPushButton *B5;
    QPushButton *B3;
    QWidget *gridLayoutWidget_6;
    QGridLayout *Cgrid;
    QPushButton *C17;
    QPushButton *C13;
    QPushButton *C14;
    QPushButton *C9;
    QPushButton *C15;
    QPushButton *C18;
    QPushButton *C2;
    QPushButton *C19;
    QPushButton *C5;
    QPushButton *C3;
    QPushButton *C11;
    QPushButton *C6;
    QPushButton *C10;
    QPushButton *C12;
    QPushButton *C7;
    QPushButton *C8;
    QPushButton *C4;
    QPushButton *C16;
    QPushButton *C1;
    QWidget *gridLayoutWidget_7;
    QGridLayout *Dgrid;
    QPushButton *D4;
    QPushButton *D16;
    QPushButton *D13;
    QPushButton *D15;
    QPushButton *D9;
    QPushButton *D3;
    QPushButton *D14;
    QPushButton *D1;
    QPushButton *D6;
    QPushButton *D17;
    QPushButton *D19;
    QPushButton *D8;
    QPushButton *D10;
    QPushButton *D12;
    QPushButton *D2;
    QPushButton *D11;
    QPushButton *D18;
    QPushButton *D5;
    QPushButton *D7;
    QGraphicsView *playerBlockerA;
    QGraphicsView *playerBlockerB;
    QGraphicsView *playerBlockerC;
    QGraphicsView *playerBlockerD;
    QToolButton *optionsButton;
    QWidget *layoutWidget;
    QHBoxLayout *menuLayout;
    QPushButton *onePlayerButton;
    QPushButton *twoPlayerButton;
    QPushButton *threePlayerButton;
    QPushButton *fourPlayerButton;
    QLabel *menuLabel;
    QWidget *verticalLayoutWidget;
    QGridLayout *diceButtonLayout;
    QPushButton *dice1Button;
    QPushButton *dice3Button;
    QPushButton *dice2Button;
    QPushButton *dice5Button;
    QPushButton *dice4Button;
    QPushButton *rollDiceButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *YahtzeeMainWin)
    {
        if (YahtzeeMainWin->objectName().isEmpty())
            YahtzeeMainWin->setObjectName(QStringLiteral("YahtzeeMainWin"));
        YahtzeeMainWin->resize(650, 698);
        YahtzeeMainWin->setMinimumSize(QSize(650, 698));
        YahtzeeMainWin->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(YahtzeeMainWin);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gameBackground = new QGraphicsView(centralWidget);
        gameBackground->setObjectName(QStringLiteral("gameBackground"));
        gameBackground->setGeometry(QRect(0, 0, 650, 699));
        gameBackground->setStyleSheet(QStringLiteral("background-image: url(:/new/pictures/DMPYZY BACKGROUND.png);"));
        gridLayoutWidget_4 = new QWidget(centralWidget);
        gridLayoutWidget_4->setObjectName(QStringLiteral("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(150, 40, 71, 601));
        Agrid = new QGridLayout(gridLayoutWidget_4);
        Agrid->setSpacing(0);
        Agrid->setContentsMargins(11, 11, 11, 11);
        Agrid->setObjectName(QStringLiteral("Agrid"));
        Agrid->setSizeConstraint(QLayout::SetDefaultConstraint);
        Agrid->setContentsMargins(0, 0, 0, 0);
        A8 = new QPushButton(gridLayoutWidget_4);
        A8->setObjectName(QStringLiteral("A8"));
        A8->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(A8->sizePolicy().hasHeightForWidth());
        A8->setSizePolicy(sizePolicy);
        A8->setMinimumSize(QSize(69, 32));
        A8->setMaximumSize(QSize(69, 32));
        A8->setFlat(true);

        Agrid->addWidget(A8, 7, 0, 1, 1);

        A17 = new QPushButton(gridLayoutWidget_4);
        A17->setObjectName(QStringLiteral("A17"));
        sizePolicy.setHeightForWidth(A17->sizePolicy().hasHeightForWidth());
        A17->setSizePolicy(sizePolicy);
        A17->setMinimumSize(QSize(69, 32));
        A17->setMaximumSize(QSize(69, 32));
        A17->setFlat(true);

        Agrid->addWidget(A17, 16, 0, 1, 1);

        A18 = new QPushButton(gridLayoutWidget_4);
        A18->setObjectName(QStringLiteral("A18"));
        sizePolicy.setHeightForWidth(A18->sizePolicy().hasHeightForWidth());
        A18->setSizePolicy(sizePolicy);
        A18->setMinimumSize(QSize(69, 32));
        A18->setMaximumSize(QSize(69, 32));
        A18->setFlat(true);

        Agrid->addWidget(A18, 17, 0, 1, 1);

        A13 = new QPushButton(gridLayoutWidget_4);
        A13->setObjectName(QStringLiteral("A13"));
        sizePolicy.setHeightForWidth(A13->sizePolicy().hasHeightForWidth());
        A13->setSizePolicy(sizePolicy);
        A13->setMinimumSize(QSize(69, 32));
        A13->setMaximumSize(QSize(69, 32));
        A13->setFlat(true);

        Agrid->addWidget(A13, 12, 0, 1, 1);

        A1 = new QPushButton(gridLayoutWidget_4);
        A1->setObjectName(QStringLiteral("A1"));
        sizePolicy.setHeightForWidth(A1->sizePolicy().hasHeightForWidth());
        A1->setSizePolicy(sizePolicy);
        A1->setMinimumSize(QSize(69, 32));
        A1->setMaximumSize(QSize(69, 32));
        A1->setCheckable(false);
        A1->setFlat(true);

        Agrid->addWidget(A1, 0, 0, 1, 1);

        A15 = new QPushButton(gridLayoutWidget_4);
        A15->setObjectName(QStringLiteral("A15"));
        sizePolicy.setHeightForWidth(A15->sizePolicy().hasHeightForWidth());
        A15->setSizePolicy(sizePolicy);
        A15->setMinimumSize(QSize(69, 32));
        A15->setMaximumSize(QSize(69, 32));
        A15->setFlat(true);

        Agrid->addWidget(A15, 14, 0, 1, 1);

        A14 = new QPushButton(gridLayoutWidget_4);
        A14->setObjectName(QStringLiteral("A14"));
        sizePolicy.setHeightForWidth(A14->sizePolicy().hasHeightForWidth());
        A14->setSizePolicy(sizePolicy);
        A14->setMinimumSize(QSize(69, 32));
        A14->setMaximumSize(QSize(69, 32));
        A14->setFlat(true);

        Agrid->addWidget(A14, 13, 0, 1, 1);

        A5 = new QPushButton(gridLayoutWidget_4);
        A5->setObjectName(QStringLiteral("A5"));
        sizePolicy.setHeightForWidth(A5->sizePolicy().hasHeightForWidth());
        A5->setSizePolicy(sizePolicy);
        A5->setMinimumSize(QSize(69, 32));
        A5->setMaximumSize(QSize(69, 32));
        A5->setFlat(true);

        Agrid->addWidget(A5, 4, 0, 1, 1);

        A10 = new QPushButton(gridLayoutWidget_4);
        A10->setObjectName(QStringLiteral("A10"));
        sizePolicy.setHeightForWidth(A10->sizePolicy().hasHeightForWidth());
        A10->setSizePolicy(sizePolicy);
        A10->setMinimumSize(QSize(69, 32));
        A10->setMaximumSize(QSize(69, 32));
        A10->setFlat(true);

        Agrid->addWidget(A10, 9, 0, 1, 1);

        A11 = new QPushButton(gridLayoutWidget_4);
        A11->setObjectName(QStringLiteral("A11"));
        sizePolicy.setHeightForWidth(A11->sizePolicy().hasHeightForWidth());
        A11->setSizePolicy(sizePolicy);
        A11->setMinimumSize(QSize(69, 32));
        A11->setMaximumSize(QSize(69, 32));
        A11->setFlat(true);

        Agrid->addWidget(A11, 10, 0, 1, 1);

        A2 = new QPushButton(gridLayoutWidget_4);
        A2->setObjectName(QStringLiteral("A2"));
        sizePolicy.setHeightForWidth(A2->sizePolicy().hasHeightForWidth());
        A2->setSizePolicy(sizePolicy);
        A2->setMinimumSize(QSize(69, 32));
        A2->setMaximumSize(QSize(69, 32));
        A2->setFlat(true);

        Agrid->addWidget(A2, 1, 0, 1, 1);

        A9 = new QPushButton(gridLayoutWidget_4);
        A9->setObjectName(QStringLiteral("A9"));
        sizePolicy.setHeightForWidth(A9->sizePolicy().hasHeightForWidth());
        A9->setSizePolicy(sizePolicy);
        A9->setMinimumSize(QSize(69, 32));
        A9->setMaximumSize(QSize(69, 32));
        A9->setFlat(true);

        Agrid->addWidget(A9, 8, 0, 1, 1);

        A19 = new QPushButton(gridLayoutWidget_4);
        A19->setObjectName(QStringLiteral("A19"));
        A19->setEnabled(false);
        sizePolicy.setHeightForWidth(A19->sizePolicy().hasHeightForWidth());
        A19->setSizePolicy(sizePolicy);
        A19->setMinimumSize(QSize(69, 64));
        A19->setMaximumSize(QSize(69, 64));
        A19->setFlat(true);

        Agrid->addWidget(A19, 18, 0, 2, 1);

        A6 = new QPushButton(gridLayoutWidget_4);
        A6->setObjectName(QStringLiteral("A6"));
        sizePolicy.setHeightForWidth(A6->sizePolicy().hasHeightForWidth());
        A6->setSizePolicy(sizePolicy);
        A6->setMinimumSize(QSize(69, 32));
        A6->setMaximumSize(QSize(69, 32));
        A6->setFlat(true);

        Agrid->addWidget(A6, 5, 0, 1, 1);

        A3 = new QPushButton(gridLayoutWidget_4);
        A3->setObjectName(QStringLiteral("A3"));
        sizePolicy.setHeightForWidth(A3->sizePolicy().hasHeightForWidth());
        A3->setSizePolicy(sizePolicy);
        A3->setMinimumSize(QSize(69, 32));
        A3->setMaximumSize(QSize(69, 32));
        A3->setFlat(true);

        Agrid->addWidget(A3, 2, 0, 1, 1);

        A12 = new QPushButton(gridLayoutWidget_4);
        A12->setObjectName(QStringLiteral("A12"));
        sizePolicy.setHeightForWidth(A12->sizePolicy().hasHeightForWidth());
        A12->setSizePolicy(sizePolicy);
        A12->setMinimumSize(QSize(69, 32));
        A12->setMaximumSize(QSize(69, 32));
        A12->setFlat(true);

        Agrid->addWidget(A12, 11, 0, 1, 1);

        A7 = new QPushButton(gridLayoutWidget_4);
        A7->setObjectName(QStringLiteral("A7"));
        A7->setEnabled(false);
        sizePolicy.setHeightForWidth(A7->sizePolicy().hasHeightForWidth());
        A7->setSizePolicy(sizePolicy);
        A7->setMinimumSize(QSize(69, 32));
        A7->setMaximumSize(QSize(69, 32));
        A7->setFlat(true);

        Agrid->addWidget(A7, 6, 0, 1, 1);

        A4 = new QPushButton(gridLayoutWidget_4);
        A4->setObjectName(QStringLiteral("A4"));
        sizePolicy.setHeightForWidth(A4->sizePolicy().hasHeightForWidth());
        A4->setSizePolicy(sizePolicy);
        A4->setMinimumSize(QSize(69, 32));
        A4->setMaximumSize(QSize(69, 32));
        A4->setFlat(true);

        Agrid->addWidget(A4, 3, 0, 1, 1);

        A16 = new QPushButton(gridLayoutWidget_4);
        A16->setObjectName(QStringLiteral("A16"));
        sizePolicy.setHeightForWidth(A16->sizePolicy().hasHeightForWidth());
        A16->setSizePolicy(sizePolicy);
        A16->setMinimumSize(QSize(69, 32));
        A16->setMaximumSize(QSize(69, 32));
        A16->setFlat(true);

        Agrid->addWidget(A16, 15, 0, 1, 1);

        gridLayoutWidget_5 = new QWidget(centralWidget);
        gridLayoutWidget_5->setObjectName(QStringLiteral("gridLayoutWidget_5"));
        gridLayoutWidget_5->setGeometry(QRect(220, 40, 71, 601));
        Bgrid = new QGridLayout(gridLayoutWidget_5);
        Bgrid->setSpacing(0);
        Bgrid->setContentsMargins(11, 11, 11, 11);
        Bgrid->setObjectName(QStringLiteral("Bgrid"));
        Bgrid->setSizeConstraint(QLayout::SetDefaultConstraint);
        Bgrid->setContentsMargins(0, 0, 0, 0);
        B14 = new QPushButton(gridLayoutWidget_5);
        B14->setObjectName(QStringLiteral("B14"));
        sizePolicy.setHeightForWidth(B14->sizePolicy().hasHeightForWidth());
        B14->setSizePolicy(sizePolicy);
        B14->setMinimumSize(QSize(69, 32));
        B14->setMaximumSize(QSize(69, 32));
        B14->setFlat(true);

        Bgrid->addWidget(B14, 13, 0, 1, 1);

        B12 = new QPushButton(gridLayoutWidget_5);
        B12->setObjectName(QStringLiteral("B12"));
        sizePolicy.setHeightForWidth(B12->sizePolicy().hasHeightForWidth());
        B12->setSizePolicy(sizePolicy);
        B12->setMinimumSize(QSize(69, 32));
        B12->setMaximumSize(QSize(69, 32));
        B12->setFlat(true);

        Bgrid->addWidget(B12, 11, 0, 1, 1);

        B7 = new QPushButton(gridLayoutWidget_5);
        B7->setObjectName(QStringLiteral("B7"));
        B7->setEnabled(false);
        sizePolicy.setHeightForWidth(B7->sizePolicy().hasHeightForWidth());
        B7->setSizePolicy(sizePolicy);
        B7->setMinimumSize(QSize(69, 32));
        B7->setMaximumSize(QSize(69, 32));
        B7->setFlat(true);

        Bgrid->addWidget(B7, 6, 0, 1, 1);

        B18 = new QPushButton(gridLayoutWidget_5);
        B18->setObjectName(QStringLiteral("B18"));
        sizePolicy.setHeightForWidth(B18->sizePolicy().hasHeightForWidth());
        B18->setSizePolicy(sizePolicy);
        B18->setMinimumSize(QSize(69, 30));
        B18->setMaximumSize(QSize(69, 32));
        B18->setFlat(true);

        Bgrid->addWidget(B18, 17, 0, 1, 1);

        B1 = new QPushButton(gridLayoutWidget_5);
        B1->setObjectName(QStringLiteral("B1"));
        sizePolicy.setHeightForWidth(B1->sizePolicy().hasHeightForWidth());
        B1->setSizePolicy(sizePolicy);
        B1->setMinimumSize(QSize(69, 32));
        B1->setMaximumSize(QSize(69, 32));
        B1->setFlat(true);

        Bgrid->addWidget(B1, 0, 0, 1, 1);

        B13 = new QPushButton(gridLayoutWidget_5);
        B13->setObjectName(QStringLiteral("B13"));
        sizePolicy.setHeightForWidth(B13->sizePolicy().hasHeightForWidth());
        B13->setSizePolicy(sizePolicy);
        B13->setMinimumSize(QSize(69, 32));
        B13->setMaximumSize(QSize(69, 32));
        B13->setFlat(true);

        Bgrid->addWidget(B13, 12, 0, 1, 1);

        B11 = new QPushButton(gridLayoutWidget_5);
        B11->setObjectName(QStringLiteral("B11"));
        sizePolicy.setHeightForWidth(B11->sizePolicy().hasHeightForWidth());
        B11->setSizePolicy(sizePolicy);
        B11->setMinimumSize(QSize(69, 32));
        B11->setMaximumSize(QSize(69, 32));
        B11->setFlat(true);

        Bgrid->addWidget(B11, 10, 0, 1, 1);

        B17 = new QPushButton(gridLayoutWidget_5);
        B17->setObjectName(QStringLiteral("B17"));
        sizePolicy.setHeightForWidth(B17->sizePolicy().hasHeightForWidth());
        B17->setSizePolicy(sizePolicy);
        B17->setMinimumSize(QSize(69, 32));
        B17->setMaximumSize(QSize(69, 32));
        B17->setFlat(true);

        Bgrid->addWidget(B17, 16, 0, 1, 1);

        B9 = new QPushButton(gridLayoutWidget_5);
        B9->setObjectName(QStringLiteral("B9"));
        sizePolicy.setHeightForWidth(B9->sizePolicy().hasHeightForWidth());
        B9->setSizePolicy(sizePolicy);
        B9->setMinimumSize(QSize(69, 32));
        B9->setMaximumSize(QSize(69, 32));
        B9->setFlat(true);

        Bgrid->addWidget(B9, 8, 0, 1, 1);

        B16 = new QPushButton(gridLayoutWidget_5);
        B16->setObjectName(QStringLiteral("B16"));
        sizePolicy.setHeightForWidth(B16->sizePolicy().hasHeightForWidth());
        B16->setSizePolicy(sizePolicy);
        B16->setMinimumSize(QSize(69, 32));
        B16->setMaximumSize(QSize(69, 32));
        B16->setFlat(true);

        Bgrid->addWidget(B16, 15, 0, 1, 1);

        B8 = new QPushButton(gridLayoutWidget_5);
        B8->setObjectName(QStringLiteral("B8"));
        B8->setEnabled(false);
        sizePolicy.setHeightForWidth(B8->sizePolicy().hasHeightForWidth());
        B8->setSizePolicy(sizePolicy);
        B8->setMinimumSize(QSize(69, 32));
        B8->setMaximumSize(QSize(69, 32));
        B8->setFlat(true);

        Bgrid->addWidget(B8, 7, 0, 1, 1);

        B6 = new QPushButton(gridLayoutWidget_5);
        B6->setObjectName(QStringLiteral("B6"));
        sizePolicy.setHeightForWidth(B6->sizePolicy().hasHeightForWidth());
        B6->setSizePolicy(sizePolicy);
        B6->setMinimumSize(QSize(69, 32));
        B6->setMaximumSize(QSize(69, 32));
        B6->setFlat(true);

        Bgrid->addWidget(B6, 5, 0, 1, 1);

        B19 = new QPushButton(gridLayoutWidget_5);
        B19->setObjectName(QStringLiteral("B19"));
        B19->setEnabled(false);
        sizePolicy.setHeightForWidth(B19->sizePolicy().hasHeightForWidth());
        B19->setSizePolicy(sizePolicy);
        B19->setMinimumSize(QSize(69, 64));
        B19->setMaximumSize(QSize(69, 64));
        B19->setFlat(true);

        Bgrid->addWidget(B19, 18, 0, 2, 1);

        B10 = new QPushButton(gridLayoutWidget_5);
        B10->setObjectName(QStringLiteral("B10"));
        sizePolicy.setHeightForWidth(B10->sizePolicy().hasHeightForWidth());
        B10->setSizePolicy(sizePolicy);
        B10->setMinimumSize(QSize(69, 32));
        B10->setMaximumSize(QSize(69, 32));
        B10->setFlat(true);

        Bgrid->addWidget(B10, 9, 0, 1, 1);

        B15 = new QPushButton(gridLayoutWidget_5);
        B15->setObjectName(QStringLiteral("B15"));
        sizePolicy.setHeightForWidth(B15->sizePolicy().hasHeightForWidth());
        B15->setSizePolicy(sizePolicy);
        B15->setMinimumSize(QSize(69, 32));
        B15->setMaximumSize(QSize(69, 32));
        B15->setFlat(true);

        Bgrid->addWidget(B15, 14, 0, 1, 1);

        B4 = new QPushButton(gridLayoutWidget_5);
        B4->setObjectName(QStringLiteral("B4"));
        sizePolicy.setHeightForWidth(B4->sizePolicy().hasHeightForWidth());
        B4->setSizePolicy(sizePolicy);
        B4->setMinimumSize(QSize(69, 32));
        B4->setMaximumSize(QSize(69, 32));
        B4->setFlat(true);

        Bgrid->addWidget(B4, 3, 0, 1, 1);

        B2 = new QPushButton(gridLayoutWidget_5);
        B2->setObjectName(QStringLiteral("B2"));
        sizePolicy.setHeightForWidth(B2->sizePolicy().hasHeightForWidth());
        B2->setSizePolicy(sizePolicy);
        B2->setMinimumSize(QSize(69, 32));
        B2->setMaximumSize(QSize(69, 32));
        B2->setFlat(true);

        Bgrid->addWidget(B2, 1, 0, 1, 1);

        B5 = new QPushButton(gridLayoutWidget_5);
        B5->setObjectName(QStringLiteral("B5"));
        sizePolicy.setHeightForWidth(B5->sizePolicy().hasHeightForWidth());
        B5->setSizePolicy(sizePolicy);
        B5->setMinimumSize(QSize(69, 32));
        B5->setMaximumSize(QSize(69, 32));
        B5->setFlat(true);

        Bgrid->addWidget(B5, 4, 0, 1, 1);

        B3 = new QPushButton(gridLayoutWidget_5);
        B3->setObjectName(QStringLiteral("B3"));
        sizePolicy.setHeightForWidth(B3->sizePolicy().hasHeightForWidth());
        B3->setSizePolicy(sizePolicy);
        B3->setMinimumSize(QSize(69, 32));
        B3->setMaximumSize(QSize(69, 32));
        B3->setFlat(true);

        Bgrid->addWidget(B3, 2, 0, 1, 1);

        gridLayoutWidget_6 = new QWidget(centralWidget);
        gridLayoutWidget_6->setObjectName(QStringLiteral("gridLayoutWidget_6"));
        gridLayoutWidget_6->setGeometry(QRect(290, 40, 71, 601));
        Cgrid = new QGridLayout(gridLayoutWidget_6);
        Cgrid->setSpacing(0);
        Cgrid->setContentsMargins(11, 11, 11, 11);
        Cgrid->setObjectName(QStringLiteral("Cgrid"));
        Cgrid->setSizeConstraint(QLayout::SetDefaultConstraint);
        Cgrid->setContentsMargins(0, 0, 0, 0);
        C17 = new QPushButton(gridLayoutWidget_6);
        C17->setObjectName(QStringLiteral("C17"));
        sizePolicy.setHeightForWidth(C17->sizePolicy().hasHeightForWidth());
        C17->setSizePolicy(sizePolicy);
        C17->setMinimumSize(QSize(69, 32));
        C17->setMaximumSize(QSize(69, 32));
        C17->setFlat(true);

        Cgrid->addWidget(C17, 16, 0, 1, 1);

        C13 = new QPushButton(gridLayoutWidget_6);
        C13->setObjectName(QStringLiteral("C13"));
        sizePolicy.setHeightForWidth(C13->sizePolicy().hasHeightForWidth());
        C13->setSizePolicy(sizePolicy);
        C13->setMinimumSize(QSize(69, 32));
        C13->setMaximumSize(QSize(69, 32));
        C13->setFlat(true);

        Cgrid->addWidget(C13, 12, 0, 1, 1);

        C14 = new QPushButton(gridLayoutWidget_6);
        C14->setObjectName(QStringLiteral("C14"));
        sizePolicy.setHeightForWidth(C14->sizePolicy().hasHeightForWidth());
        C14->setSizePolicy(sizePolicy);
        C14->setMinimumSize(QSize(69, 32));
        C14->setMaximumSize(QSize(69, 32));
        C14->setFlat(true);

        Cgrid->addWidget(C14, 13, 0, 1, 1);

        C9 = new QPushButton(gridLayoutWidget_6);
        C9->setObjectName(QStringLiteral("C9"));
        sizePolicy.setHeightForWidth(C9->sizePolicy().hasHeightForWidth());
        C9->setSizePolicy(sizePolicy);
        C9->setMinimumSize(QSize(69, 32));
        C9->setMaximumSize(QSize(69, 32));
        C9->setFlat(true);

        Cgrid->addWidget(C9, 8, 0, 1, 1);

        C15 = new QPushButton(gridLayoutWidget_6);
        C15->setObjectName(QStringLiteral("C15"));
        sizePolicy.setHeightForWidth(C15->sizePolicy().hasHeightForWidth());
        C15->setSizePolicy(sizePolicy);
        C15->setMinimumSize(QSize(69, 32));
        C15->setMaximumSize(QSize(69, 32));
        C15->setFlat(true);

        Cgrid->addWidget(C15, 14, 0, 1, 1);

        C18 = new QPushButton(gridLayoutWidget_6);
        C18->setObjectName(QStringLiteral("C18"));
        sizePolicy.setHeightForWidth(C18->sizePolicy().hasHeightForWidth());
        C18->setSizePolicy(sizePolicy);
        C18->setMinimumSize(QSize(69, 32));
        C18->setMaximumSize(QSize(69, 32));
        C18->setFlat(true);

        Cgrid->addWidget(C18, 17, 0, 1, 1);

        C2 = new QPushButton(gridLayoutWidget_6);
        C2->setObjectName(QStringLiteral("C2"));
        sizePolicy.setHeightForWidth(C2->sizePolicy().hasHeightForWidth());
        C2->setSizePolicy(sizePolicy);
        C2->setMinimumSize(QSize(69, 32));
        C2->setMaximumSize(QSize(69, 32));
        C2->setFlat(true);

        Cgrid->addWidget(C2, 1, 0, 1, 1);

        C19 = new QPushButton(gridLayoutWidget_6);
        C19->setObjectName(QStringLiteral("C19"));
        C19->setEnabled(false);
        sizePolicy.setHeightForWidth(C19->sizePolicy().hasHeightForWidth());
        C19->setSizePolicy(sizePolicy);
        C19->setMinimumSize(QSize(69, 64));
        C19->setMaximumSize(QSize(69, 64));
        C19->setFlat(true);

        Cgrid->addWidget(C19, 18, 0, 2, 1);

        C5 = new QPushButton(gridLayoutWidget_6);
        C5->setObjectName(QStringLiteral("C5"));
        sizePolicy.setHeightForWidth(C5->sizePolicy().hasHeightForWidth());
        C5->setSizePolicy(sizePolicy);
        C5->setMinimumSize(QSize(69, 32));
        C5->setMaximumSize(QSize(69, 32));
        C5->setFlat(true);

        Cgrid->addWidget(C5, 4, 0, 1, 1);

        C3 = new QPushButton(gridLayoutWidget_6);
        C3->setObjectName(QStringLiteral("C3"));
        sizePolicy.setHeightForWidth(C3->sizePolicy().hasHeightForWidth());
        C3->setSizePolicy(sizePolicy);
        C3->setMinimumSize(QSize(69, 32));
        C3->setMaximumSize(QSize(69, 32));
        C3->setFlat(true);

        Cgrid->addWidget(C3, 2, 0, 1, 1);

        C11 = new QPushButton(gridLayoutWidget_6);
        C11->setObjectName(QStringLiteral("C11"));
        sizePolicy.setHeightForWidth(C11->sizePolicy().hasHeightForWidth());
        C11->setSizePolicy(sizePolicy);
        C11->setMinimumSize(QSize(69, 32));
        C11->setMaximumSize(QSize(69, 32));
        C11->setFlat(true);

        Cgrid->addWidget(C11, 10, 0, 1, 1);

        C6 = new QPushButton(gridLayoutWidget_6);
        C6->setObjectName(QStringLiteral("C6"));
        sizePolicy.setHeightForWidth(C6->sizePolicy().hasHeightForWidth());
        C6->setSizePolicy(sizePolicy);
        C6->setMinimumSize(QSize(69, 32));
        C6->setMaximumSize(QSize(69, 32));
        C6->setFlat(true);

        Cgrid->addWidget(C6, 5, 0, 1, 1);

        C10 = new QPushButton(gridLayoutWidget_6);
        C10->setObjectName(QStringLiteral("C10"));
        sizePolicy.setHeightForWidth(C10->sizePolicy().hasHeightForWidth());
        C10->setSizePolicy(sizePolicy);
        C10->setMinimumSize(QSize(69, 32));
        C10->setMaximumSize(QSize(69, 32));
        C10->setFlat(true);

        Cgrid->addWidget(C10, 9, 0, 1, 1);

        C12 = new QPushButton(gridLayoutWidget_6);
        C12->setObjectName(QStringLiteral("C12"));
        sizePolicy.setHeightForWidth(C12->sizePolicy().hasHeightForWidth());
        C12->setSizePolicy(sizePolicy);
        C12->setMinimumSize(QSize(69, 32));
        C12->setMaximumSize(QSize(69, 32));
        C12->setFlat(true);

        Cgrid->addWidget(C12, 11, 0, 1, 1);

        C7 = new QPushButton(gridLayoutWidget_6);
        C7->setObjectName(QStringLiteral("C7"));
        C7->setEnabled(false);
        sizePolicy.setHeightForWidth(C7->sizePolicy().hasHeightForWidth());
        C7->setSizePolicy(sizePolicy);
        C7->setMinimumSize(QSize(69, 32));
        C7->setMaximumSize(QSize(69, 32));
        C7->setFlat(true);

        Cgrid->addWidget(C7, 6, 0, 1, 1);

        C8 = new QPushButton(gridLayoutWidget_6);
        C8->setObjectName(QStringLiteral("C8"));
        C8->setEnabled(false);
        sizePolicy.setHeightForWidth(C8->sizePolicy().hasHeightForWidth());
        C8->setSizePolicy(sizePolicy);
        C8->setMinimumSize(QSize(69, 32));
        C8->setMaximumSize(QSize(69, 32));
        C8->setFlat(true);

        Cgrid->addWidget(C8, 7, 0, 1, 1);

        C4 = new QPushButton(gridLayoutWidget_6);
        C4->setObjectName(QStringLiteral("C4"));
        sizePolicy.setHeightForWidth(C4->sizePolicy().hasHeightForWidth());
        C4->setSizePolicy(sizePolicy);
        C4->setMinimumSize(QSize(69, 32));
        C4->setMaximumSize(QSize(69, 32));
        C4->setFlat(true);

        Cgrid->addWidget(C4, 3, 0, 1, 1);

        C16 = new QPushButton(gridLayoutWidget_6);
        C16->setObjectName(QStringLiteral("C16"));
        sizePolicy.setHeightForWidth(C16->sizePolicy().hasHeightForWidth());
        C16->setSizePolicy(sizePolicy);
        C16->setMinimumSize(QSize(69, 32));
        C16->setMaximumSize(QSize(69, 32));
        C16->setFlat(true);

        Cgrid->addWidget(C16, 15, 0, 1, 1);

        C1 = new QPushButton(gridLayoutWidget_6);
        C1->setObjectName(QStringLiteral("C1"));
        sizePolicy.setHeightForWidth(C1->sizePolicy().hasHeightForWidth());
        C1->setSizePolicy(sizePolicy);
        C1->setMinimumSize(QSize(69, 32));
        C1->setMaximumSize(QSize(69, 32));
        C1->setFlat(true);

        Cgrid->addWidget(C1, 0, 0, 1, 1);

        gridLayoutWidget_7 = new QWidget(centralWidget);
        gridLayoutWidget_7->setObjectName(QStringLiteral("gridLayoutWidget_7"));
        gridLayoutWidget_7->setGeometry(QRect(360, 40, 71, 601));
        Dgrid = new QGridLayout(gridLayoutWidget_7);
        Dgrid->setSpacing(0);
        Dgrid->setContentsMargins(11, 11, 11, 11);
        Dgrid->setObjectName(QStringLiteral("Dgrid"));
        Dgrid->setSizeConstraint(QLayout::SetDefaultConstraint);
        Dgrid->setContentsMargins(0, 0, 0, 0);
        D4 = new QPushButton(gridLayoutWidget_7);
        D4->setObjectName(QStringLiteral("D4"));
        sizePolicy.setHeightForWidth(D4->sizePolicy().hasHeightForWidth());
        D4->setSizePolicy(sizePolicy);
        D4->setMinimumSize(QSize(69, 32));
        D4->setMaximumSize(QSize(69, 32));
        D4->setFlat(true);

        Dgrid->addWidget(D4, 3, 0, 1, 1);

        D16 = new QPushButton(gridLayoutWidget_7);
        D16->setObjectName(QStringLiteral("D16"));
        sizePolicy.setHeightForWidth(D16->sizePolicy().hasHeightForWidth());
        D16->setSizePolicy(sizePolicy);
        D16->setMinimumSize(QSize(69, 32));
        D16->setMaximumSize(QSize(69, 32));
        D16->setFlat(true);

        Dgrid->addWidget(D16, 15, 0, 1, 1);

        D13 = new QPushButton(gridLayoutWidget_7);
        D13->setObjectName(QStringLiteral("D13"));
        sizePolicy.setHeightForWidth(D13->sizePolicy().hasHeightForWidth());
        D13->setSizePolicy(sizePolicy);
        D13->setMinimumSize(QSize(69, 32));
        D13->setMaximumSize(QSize(69, 32));
        D13->setFlat(true);

        Dgrid->addWidget(D13, 12, 0, 1, 1);

        D15 = new QPushButton(gridLayoutWidget_7);
        D15->setObjectName(QStringLiteral("D15"));
        sizePolicy.setHeightForWidth(D15->sizePolicy().hasHeightForWidth());
        D15->setSizePolicy(sizePolicy);
        D15->setMinimumSize(QSize(69, 32));
        D15->setMaximumSize(QSize(69, 32));
        D15->setFlat(true);

        Dgrid->addWidget(D15, 14, 0, 1, 1);

        D9 = new QPushButton(gridLayoutWidget_7);
        D9->setObjectName(QStringLiteral("D9"));
        sizePolicy.setHeightForWidth(D9->sizePolicy().hasHeightForWidth());
        D9->setSizePolicy(sizePolicy);
        D9->setMinimumSize(QSize(69, 32));
        D9->setMaximumSize(QSize(69, 32));
        D9->setFlat(true);

        Dgrid->addWidget(D9, 8, 0, 1, 1);

        D3 = new QPushButton(gridLayoutWidget_7);
        D3->setObjectName(QStringLiteral("D3"));
        sizePolicy.setHeightForWidth(D3->sizePolicy().hasHeightForWidth());
        D3->setSizePolicy(sizePolicy);
        D3->setMinimumSize(QSize(69, 32));
        D3->setMaximumSize(QSize(69, 32));
        D3->setFlat(true);

        Dgrid->addWidget(D3, 2, 0, 1, 1);

        D14 = new QPushButton(gridLayoutWidget_7);
        D14->setObjectName(QStringLiteral("D14"));
        sizePolicy.setHeightForWidth(D14->sizePolicy().hasHeightForWidth());
        D14->setSizePolicy(sizePolicy);
        D14->setMinimumSize(QSize(69, 32));
        D14->setMaximumSize(QSize(69, 32));
        D14->setFlat(true);

        Dgrid->addWidget(D14, 13, 0, 1, 1);

        D1 = new QPushButton(gridLayoutWidget_7);
        D1->setObjectName(QStringLiteral("D1"));
        sizePolicy.setHeightForWidth(D1->sizePolicy().hasHeightForWidth());
        D1->setSizePolicy(sizePolicy);
        D1->setMinimumSize(QSize(69, 32));
        D1->setMaximumSize(QSize(69, 32));
        D1->setFlat(true);

        Dgrid->addWidget(D1, 0, 0, 1, 1);

        D6 = new QPushButton(gridLayoutWidget_7);
        D6->setObjectName(QStringLiteral("D6"));
        sizePolicy.setHeightForWidth(D6->sizePolicy().hasHeightForWidth());
        D6->setSizePolicy(sizePolicy);
        D6->setMinimumSize(QSize(69, 32));
        D6->setMaximumSize(QSize(69, 32));
        D6->setFlat(true);

        Dgrid->addWidget(D6, 5, 0, 1, 1);

        D17 = new QPushButton(gridLayoutWidget_7);
        D17->setObjectName(QStringLiteral("D17"));
        sizePolicy.setHeightForWidth(D17->sizePolicy().hasHeightForWidth());
        D17->setSizePolicy(sizePolicy);
        D17->setMinimumSize(QSize(69, 32));
        D17->setMaximumSize(QSize(69, 32));
        D17->setFlat(true);

        Dgrid->addWidget(D17, 16, 0, 1, 1);

        D19 = new QPushButton(gridLayoutWidget_7);
        D19->setObjectName(QStringLiteral("D19"));
        D19->setEnabled(false);
        sizePolicy.setHeightForWidth(D19->sizePolicy().hasHeightForWidth());
        D19->setSizePolicy(sizePolicy);
        D19->setMinimumSize(QSize(69, 64));
        D19->setMaximumSize(QSize(69, 64));
        D19->setFlat(true);

        Dgrid->addWidget(D19, 18, 0, 2, 1);

        D8 = new QPushButton(gridLayoutWidget_7);
        D8->setObjectName(QStringLiteral("D8"));
        D8->setEnabled(false);
        sizePolicy.setHeightForWidth(D8->sizePolicy().hasHeightForWidth());
        D8->setSizePolicy(sizePolicy);
        D8->setMinimumSize(QSize(69, 32));
        D8->setMaximumSize(QSize(69, 32));
        D8->setFlat(true);

        Dgrid->addWidget(D8, 7, 0, 1, 1);

        D10 = new QPushButton(gridLayoutWidget_7);
        D10->setObjectName(QStringLiteral("D10"));
        sizePolicy.setHeightForWidth(D10->sizePolicy().hasHeightForWidth());
        D10->setSizePolicy(sizePolicy);
        D10->setMinimumSize(QSize(69, 32));
        D10->setMaximumSize(QSize(69, 32));
        D10->setFlat(true);

        Dgrid->addWidget(D10, 9, 0, 1, 1);

        D12 = new QPushButton(gridLayoutWidget_7);
        D12->setObjectName(QStringLiteral("D12"));
        sizePolicy.setHeightForWidth(D12->sizePolicy().hasHeightForWidth());
        D12->setSizePolicy(sizePolicy);
        D12->setMinimumSize(QSize(69, 32));
        D12->setMaximumSize(QSize(69, 32));
        D12->setFlat(true);

        Dgrid->addWidget(D12, 11, 0, 1, 1);

        D2 = new QPushButton(gridLayoutWidget_7);
        D2->setObjectName(QStringLiteral("D2"));
        sizePolicy.setHeightForWidth(D2->sizePolicy().hasHeightForWidth());
        D2->setSizePolicy(sizePolicy);
        D2->setMinimumSize(QSize(69, 32));
        D2->setMaximumSize(QSize(69, 32));
        D2->setFlat(true);

        Dgrid->addWidget(D2, 1, 0, 1, 1);

        D11 = new QPushButton(gridLayoutWidget_7);
        D11->setObjectName(QStringLiteral("D11"));
        sizePolicy.setHeightForWidth(D11->sizePolicy().hasHeightForWidth());
        D11->setSizePolicy(sizePolicy);
        D11->setMinimumSize(QSize(69, 32));
        D11->setMaximumSize(QSize(69, 32));
        D11->setFlat(true);

        Dgrid->addWidget(D11, 10, 0, 1, 1);

        D18 = new QPushButton(gridLayoutWidget_7);
        D18->setObjectName(QStringLiteral("D18"));
        sizePolicy.setHeightForWidth(D18->sizePolicy().hasHeightForWidth());
        D18->setSizePolicy(sizePolicy);
        D18->setMinimumSize(QSize(69, 32));
        D18->setMaximumSize(QSize(69, 32));
        D18->setFlat(true);

        Dgrid->addWidget(D18, 17, 0, 1, 1);

        D5 = new QPushButton(gridLayoutWidget_7);
        D5->setObjectName(QStringLiteral("D5"));
        sizePolicy.setHeightForWidth(D5->sizePolicy().hasHeightForWidth());
        D5->setSizePolicy(sizePolicy);
        D5->setMinimumSize(QSize(69, 32));
        D5->setMaximumSize(QSize(69, 32));
        D5->setFlat(true);

        Dgrid->addWidget(D5, 4, 0, 1, 1);

        D7 = new QPushButton(gridLayoutWidget_7);
        D7->setObjectName(QStringLiteral("D7"));
        D7->setEnabled(false);
        sizePolicy.setHeightForWidth(D7->sizePolicy().hasHeightForWidth());
        D7->setSizePolicy(sizePolicy);
        D7->setMinimumSize(QSize(69, 32));
        D7->setMaximumSize(QSize(69, 32));
        D7->setFlat(true);

        Dgrid->addWidget(D7, 6, 0, 1, 1);

        playerBlockerA = new QGraphicsView(centralWidget);
        playerBlockerA->setObjectName(QStringLiteral("playerBlockerA"));
        playerBlockerA->setGeometry(QRect(150, 40, 71, 599));
        playerBlockerA->setStyleSheet(QLatin1String("background-color: rgba(114, 110, 168, 76);\n"
"border-top-left-radius: 20;\n"
"border-bottom-left-radius: 20;"));
        playerBlockerB = new QGraphicsView(centralWidget);
        playerBlockerB->setObjectName(QStringLiteral("playerBlockerB"));
        playerBlockerB->setGeometry(QRect(219, 40, 71, 599));
        playerBlockerB->setStyleSheet(QStringLiteral("background-color: rgba(114, 110, 168, 76);"));
        playerBlockerC = new QGraphicsView(centralWidget);
        playerBlockerC->setObjectName(QStringLiteral("playerBlockerC"));
        playerBlockerC->setGeometry(QRect(290, 40, 71, 599));
        playerBlockerC->setStyleSheet(QStringLiteral("background-color: rgba(114, 110, 168, 76);"));
        playerBlockerD = new QGraphicsView(centralWidget);
        playerBlockerD->setObjectName(QStringLiteral("playerBlockerD"));
        playerBlockerD->setGeometry(QRect(360, 40, 74, 598));
        playerBlockerD->setStyleSheet(QLatin1String("background-color: rgba(114, 110, 168, 76);\n"
"border-top-right-radius: 20;\n"
"border-bottom-right-radius: 20;"));
        optionsButton = new QToolButton(centralWidget);
        optionsButton->setObjectName(QStringLiteral("optionsButton"));
        optionsButton->setGeometry(QRect(610, 10, 31, 22));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(147, 4, 331, 41));
        menuLayout = new QHBoxLayout(layoutWidget);
        menuLayout->setSpacing(0);
        menuLayout->setContentsMargins(11, 11, 11, 11);
        menuLayout->setObjectName(QStringLiteral("menuLayout"));
        menuLayout->setContentsMargins(0, 0, 0, 0);
        onePlayerButton = new QPushButton(layoutWidget);
        onePlayerButton->setObjectName(QStringLiteral("onePlayerButton"));

        menuLayout->addWidget(onePlayerButton);

        twoPlayerButton = new QPushButton(layoutWidget);
        twoPlayerButton->setObjectName(QStringLiteral("twoPlayerButton"));

        menuLayout->addWidget(twoPlayerButton);

        threePlayerButton = new QPushButton(layoutWidget);
        threePlayerButton->setObjectName(QStringLiteral("threePlayerButton"));

        menuLayout->addWidget(threePlayerButton);

        fourPlayerButton = new QPushButton(layoutWidget);
        fourPlayerButton->setObjectName(QStringLiteral("fourPlayerButton"));

        menuLayout->addWidget(fourPlayerButton);

        menuLabel = new QLabel(layoutWidget);
        menuLabel->setObjectName(QStringLiteral("menuLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(menuLabel->sizePolicy().hasHeightForWidth());
        menuLabel->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QStringLiteral("Trebuchet MS"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        menuLabel->setFont(font);
        menuLabel->setAlignment(Qt::AlignCenter);

        menuLayout->addWidget(menuLabel);

        fourPlayerButton->raise();
        menuLabel->raise();
        onePlayerButton->raise();
        twoPlayerButton->raise();
        threePlayerButton->raise();
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(490, 60, 111, 561));
        diceButtonLayout = new QGridLayout(verticalLayoutWidget);
        diceButtonLayout->setSpacing(6);
        diceButtonLayout->setContentsMargins(11, 11, 11, 11);
        diceButtonLayout->setObjectName(QStringLiteral("diceButtonLayout"));
        diceButtonLayout->setContentsMargins(0, 0, 0, 0);
        dice1Button = new QPushButton(verticalLayoutWidget);
        dice1Button->setObjectName(QStringLiteral("dice1Button"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(dice1Button->sizePolicy().hasHeightForWidth());
        dice1Button->setSizePolicy(sizePolicy2);
        dice1Button->setStyleSheet(QStringLiteral("border-image: url(:/new/pictures/4dice.png);"));
        dice1Button->setCheckable(false);
        dice1Button->setChecked(false);

        diceButtonLayout->addWidget(dice1Button, 0, 0, 1, 1);

        dice3Button = new QPushButton(verticalLayoutWidget);
        dice3Button->setObjectName(QStringLiteral("dice3Button"));
        sizePolicy2.setHeightForWidth(dice3Button->sizePolicy().hasHeightForWidth());
        dice3Button->setSizePolicy(sizePolicy2);
        dice3Button->setStyleSheet(QStringLiteral("border-image: url(:/new/pictures/1dice.png);"));

        diceButtonLayout->addWidget(dice3Button, 2, 0, 1, 1);

        dice2Button = new QPushButton(verticalLayoutWidget);
        dice2Button->setObjectName(QStringLiteral("dice2Button"));
        sizePolicy2.setHeightForWidth(dice2Button->sizePolicy().hasHeightForWidth());
        dice2Button->setSizePolicy(sizePolicy2);
        dice2Button->setStyleSheet(QStringLiteral("border-image: url(:/new/pictures/2dice.png);"));

        diceButtonLayout->addWidget(dice2Button, 1, 0, 1, 1);

        dice5Button = new QPushButton(verticalLayoutWidget);
        dice5Button->setObjectName(QStringLiteral("dice5Button"));
        sizePolicy2.setHeightForWidth(dice5Button->sizePolicy().hasHeightForWidth());
        dice5Button->setSizePolicy(sizePolicy2);
        dice5Button->setStyleSheet(QStringLiteral("border-image: url(:/new/pictures/3dice.png);"));
        dice5Button->setAutoDefault(false);
        dice5Button->setFlat(false);

        diceButtonLayout->addWidget(dice5Button, 4, 0, 1, 1);

        dice4Button = new QPushButton(verticalLayoutWidget);
        dice4Button->setObjectName(QStringLiteral("dice4Button"));
        sizePolicy2.setHeightForWidth(dice4Button->sizePolicy().hasHeightForWidth());
        dice4Button->setSizePolicy(sizePolicy2);
        dice4Button->setStyleSheet(QStringLiteral("border-image: url(:/new/pictures/4dice.png);"));

        diceButtonLayout->addWidget(dice4Button, 3, 0, 1, 1);

        rollDiceButton = new QPushButton(verticalLayoutWidget);
        rollDiceButton->setObjectName(QStringLiteral("rollDiceButton"));
        rollDiceButton->setEnabled(true);
        rollDiceButton->setAutoDefault(false);
        rollDiceButton->setFlat(false);

        diceButtonLayout->addWidget(rollDiceButton, 5, 0, 1, 1);

        dice4Button->raise();
        dice1Button->raise();
        dice5Button->raise();
        dice2Button->raise();
        dice3Button->raise();
        rollDiceButton->raise();
        YahtzeeMainWin->setCentralWidget(centralWidget);
        gameBackground->raise();
        layoutWidget->raise();
        gridLayoutWidget_4->raise();
        gridLayoutWidget_5->raise();
        gridLayoutWidget_6->raise();
        gridLayoutWidget_7->raise();
        playerBlockerA->raise();
        playerBlockerB->raise();
        playerBlockerC->raise();
        playerBlockerD->raise();
        optionsButton->raise();
        verticalLayoutWidget->raise();
        menuBar = new QMenuBar(YahtzeeMainWin);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 650, 22));
        YahtzeeMainWin->setMenuBar(menuBar);
        mainToolBar = new QToolBar(YahtzeeMainWin);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        YahtzeeMainWin->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(YahtzeeMainWin);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        YahtzeeMainWin->setStatusBar(statusBar);

        retranslateUi(YahtzeeMainWin);

        QMetaObject::connectSlotsByName(YahtzeeMainWin);
    } // setupUi

    void retranslateUi(QMainWindow *YahtzeeMainWin)
    {
        YahtzeeMainWin->setWindowTitle(QApplication::translate("YahtzeeMainWin", "YahtzeeMainWin", Q_NULLPTR));
        A8->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        A17->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        A18->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        A13->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        A1->setText(QApplication::translate("YahtzeeMainWin", "1", Q_NULLPTR));
        A15->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        A14->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        A5->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        A10->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        A11->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        A2->setText(QApplication::translate("YahtzeeMainWin", "3", Q_NULLPTR));
        A9->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        A19->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        A6->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        A3->setText(QApplication::translate("YahtzeeMainWin", "0 ", Q_NULLPTR));
        A12->setText(QApplication::translate("YahtzeeMainWin", "2", Q_NULLPTR));
        A7->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        A4->setText(QApplication::translate("YahtzeeMainWin", "5", Q_NULLPTR));
        A16->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        B14->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        B12->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        B7->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        B18->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        B1->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        B13->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        B11->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        B17->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        B9->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        B16->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        B8->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        B6->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        B19->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        B10->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        B15->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        B4->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        B2->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        B5->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        B3->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        C17->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        C13->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        C14->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        C9->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        C15->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        C18->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        C2->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        C19->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        C5->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        C3->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        C11->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        C6->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        C10->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        C12->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        C7->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        C8->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        C4->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        C16->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        C1->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        D4->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        D16->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        D13->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        D15->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        D9->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        D3->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        D14->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        D1->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        D6->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        D17->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        D19->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        D8->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        D10->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        D12->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        D2->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        D11->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        D18->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        D5->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        D7->setText(QApplication::translate("YahtzeeMainWin", "0", Q_NULLPTR));
        optionsButton->setText(QApplication::translate("YahtzeeMainWin", "Menu", Q_NULLPTR));
        onePlayerButton->setText(QApplication::translate("YahtzeeMainWin", "1 Player", Q_NULLPTR));
        twoPlayerButton->setText(QApplication::translate("YahtzeeMainWin", "2 Players", Q_NULLPTR));
        threePlayerButton->setText(QApplication::translate("YahtzeeMainWin", "3 Players", Q_NULLPTR));
        fourPlayerButton->setText(QApplication::translate("YahtzeeMainWin", "4 Players", Q_NULLPTR));
        menuLabel->setText(QApplication::translate("YahtzeeMainWin", "MENU", Q_NULLPTR));
        dice1Button->setText(QString());
        dice3Button->setText(QString());
        dice2Button->setText(QString());
        dice5Button->setText(QString());
        dice4Button->setText(QString());
        rollDiceButton->setText(QApplication::translate("YahtzeeMainWin", "Roll", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class YahtzeeMainWin: public Ui_YahtzeeMainWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YAHTZEEMAINWIN_H
