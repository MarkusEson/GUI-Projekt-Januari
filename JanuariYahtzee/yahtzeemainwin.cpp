#include "yahtzeemainwin.h"
#include "ui_yahtzeemainwin.h"
#include <QDebug>
#include <QAbstractButton>
#include <unistd.h>
#include <cstdlib>
#include <QString>



YahtzeeMainWin::YahtzeeMainWin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::YahtzeeMainWin)
{
    ui->setupUi(this);

    /*
     * A function that connects all the buttons in the grids A,B,C, and D.
     * Funktionen är inspirerad från GUI labbarna samt stackexchange sidan https://stackoverflow.com/questions/4065378/qt-get-children-from-layout
     *
     */

    for(int i = 0; i < ui->Agrid->count(); i++){
        QWidget *button = ui->Agrid->itemAt(i)->widget();
        connect(button, SIGNAL(clicked()), this, SLOT(aButtonWasClicked()));
    }
    for(int i = 0; i < ui->Bgrid->count(); i++){
        QWidget *button = ui->Bgrid->itemAt(i)->widget();
        connect(button, SIGNAL(clicked()), this, SLOT(aButtonWasClicked()));
    }
    for(int i = 0; i < ui->Cgrid->count(); i++){
        QWidget *button = ui->Cgrid->itemAt(i)->widget();
        connect(button, SIGNAL(clicked()), this, SLOT(aButtonWasClicked()));
    }
    for(int i = 0; i < ui->Dgrid->count(); i++){
        QWidget *button = ui->Dgrid->itemAt(i)->widget();
        connect(button, SIGNAL(clicked()), this, SLOT(aButtonWasClicked()));
    }
}

YahtzeeMainWin::~YahtzeeMainWin()
{
    delete ui;
}


void YahtzeeMainWin::optionsButtonClicked()
{
    if(ui->menuLabel->isHidden()){
        for(int i = 0; i < ui->menuLayout->count(); i++){
             QWidget *widg = ui->menuLayout->itemAt(i)->widget();
             widg->show();
        }
        ui->optionsBackground->show();
    }
    else{
        for(int i = 0; i < ui->menuLayout->count(); i++){
             QWidget *widg = ui->menuLayout->itemAt(i)->widget();
             widg->hide();
        }
        ui->optionsBackground->hide();
    }

}

void YahtzeeMainWin::showPlayerBlockersOnClick()
{
    // Shows the playerBlockers on click.
    ui->playerBlockerA->show();
    ui->playerBlockerB->show();
    ui->playerBlockerC->show();
    ui->playerBlockerD->show();
}

void YahtzeeMainWin::chooseAmountOfPlayers(int num)
{
    switch(num)
    {
    case 1:{
        // First turns on the player blocker windows, then hides them according to how many players are playing.
        showPlayerBlockersOnClick();
        optionsButtonClicked();
        ui->playerBlockerA->hide();
        break;
    }
    case 2:{
        showPlayerBlockersOnClick();
        optionsButtonClicked();
        ui->playerBlockerA->hide();
        ui->playerBlockerB->hide();
        break;
    }
    case 3:{
        showPlayerBlockersOnClick();
        optionsButtonClicked();
        ui->playerBlockerA->hide();
        ui->playerBlockerB->hide();
        ui->playerBlockerC->hide();
        break;
    }
    case 4:{
        showPlayerBlockersOnClick();
        optionsButtonClicked();
        ui->playerBlockerA->hide();
        ui->playerBlockerB->hide();
        ui->playerBlockerC->hide();
        ui->playerBlockerD->hide();
        break;
    }
    }

}

void YahtzeeMainWin::setDieImage(QLabel * label, int dieValue)
{
    // Med inspiration av grupp... mars? april?
    QString string = "QWidget {image: url(:/new/pictures/" + QString::number(dieValue) + "dice.png) }";
    label->setStyleSheet(string);
}

void YahtzeeMainWin::displayDiceOnScreen()
{
    gameBrain.rollDice();

    int * arrayWithDice = gameBrain.getDiceArray();

    setDieImage(ui->dice1Label, arrayWithDice[0]);
    setDieImage(ui->dice2Label, arrayWithDice[1]);
    setDieImage(ui->dice3Label, arrayWithDice[2]);
    setDieImage(ui->dice4Label, arrayWithDice[3]);
    setDieImage(ui->dice5Label, arrayWithDice[4]);

    delete arrayWithDice;
}


void YahtzeeMainWin::aButtonWasClicked()
{
    QPushButton *theButton = dynamic_cast<QPushButton*>(sender());

    // QAbstractButton *theDiceClicked = dynamic_cast<QAbstractButton*>(sender());
    /*
    theButton->setText("hej");
    theButton->setEnabled(false);

    ui->A7->setText("sum");
    */

    /*
    if(theButton == ui->A1)
    {
        ui->A1->setChecked(true);
    }
    */

    /*
     * This function gets called every time a player clicks the scoreboard.
     * Adds the players sum, Bonus, and total scores to the board.
     * And finally disbles the button so that it cannot be clicked again.
     * Inspired and copied from Ragnar Nohre - Lab 5
     */
    if(theButton){
        dynamic_cast<QPushButton*>(sender())->setText("12");
        dynamic_cast<QPushButton*>(sender())->setEnabled(false);

            ui->A7->setText(GameBrain::calculateScoreBoard(_activePlayer, 0));  // 0 = sum of first scores
            ui->A8->setText(GameBrain::calculateScoreBoard(_activePlayer, 1));  // 1 = bonus score if sum >= 64
            ui->A19->setText(GameBrain::calculateScoreBoard(_activePlayer, 2)); // 2 = total score
    }
}

void YahtzeeMainWin::on_onePlayerButton_clicked()
{
    _numOfPlayers = 1;
    chooseAmountOfPlayers(_numOfPlayers);
}

void YahtzeeMainWin::on_twoPlayerButton_clicked()
{
    _numOfPlayers = 2;
    chooseAmountOfPlayers(_numOfPlayers);
}

void YahtzeeMainWin::on_threePlayerButton_clicked()
{
    _numOfPlayers = 3;
    chooseAmountOfPlayers(_numOfPlayers);
}

void YahtzeeMainWin::on_fourPlayerButton_clicked()
{
    _numOfPlayers = 4;
    chooseAmountOfPlayers(_numOfPlayers);
}

void YahtzeeMainWin::on_optionsButton_clicked()
{
    optionsButtonClicked();
}

void YahtzeeMainWin::on_rollDiceButton_clicked()
{
    if(_timesRolled < 3)
        displayDiceOnScreen();
    _timesRolled++;
    qDebug() << _timesRolled << endl;
}


