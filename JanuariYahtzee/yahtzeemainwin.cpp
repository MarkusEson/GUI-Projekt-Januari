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
    ui->rollDiceButton->setEnabled(false);

    /*
     * A function that connects all the buttons in the grids A,B,C, and D.
     * Funktionen är inspirerad från GUI labbarna samt stackexchange sidan https://stackoverflow.com/questions/4065378/qt-get-children-from-layout
     * - Markus
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
    for(int i = 0; i < ui->diceButtonLayout->count(); i++){
        QWidget *button = ui->diceButtonLayout->itemAt(i)->widget();
        connect(button, SIGNAL(clicked()), this, SLOT(aDiceWasClicked()));
    }
}

YahtzeeMainWin::~YahtzeeMainWin()
{
    delete ui;
}


void YahtzeeMainWin::showPlayerBlockersOnClick()
{
    // Shows the playerBlockers on click.
    ui->playerBlockerA->show();
    ui->playerBlockerB->show();
    ui->playerBlockerC->show();
    ui->playerBlockerD->show();
}

void YahtzeeMainWin::chooseAmountOfPlayers()
{
    // First turns on the player blocker windows, then hides them according to how many players are playing.
    showPlayerBlockersOnClick();
    ui->playerBlockerA->hide();
}

void YahtzeeMainWin::setDieImage(QPushButton * button, Die die)
{
    // Med inspiration av grupp mars
    if (!die.checkIsChecked())
    {
        QString string = "QPushButton {border-image: url(:/new/pictures/" + QString::number(die.getValue()) + "dice.png) }";
        button->setStyleSheet(string);
    }
    else
    {
        QString string = "QPushButton {border-image: url(:/new/pictures/" + QString::number(die.getValue()) + "diceClicked.png) }";
        button->setStyleSheet(string);
    }

}

void YahtzeeMainWin::displayDiceOnScreen()
{
    gameBrain.rollDice();

    Die * arrayWithDice = gameBrain.getDiceArray();
    setDieImage(ui->dice1Button, arrayWithDice[0]);
    setDieImage(ui->dice2Button, arrayWithDice[1]);
    setDieImage(ui->dice3Button, arrayWithDice[2]);
    setDieImage(ui->dice4Button, arrayWithDice[3]);
    setDieImage(ui->dice5Button, arrayWithDice[4]);
    //delete arrayWithDice;
    //delete arrayWithDice;
}

void YahtzeeMainWin::displayScoreOnScreen()
{
    /*
     * A function that displays the Scores, Bonuses and TOtal Scores on the display.
     * Looks at who is the active player to update the scores.
     * - Markus
     */
    if(_activePlayer == PLAYERONE){
        ui->A7->setText(GameBrain::calculateScoreBoard(_activePlayer, 0));
        ui->A8->setText(GameBrain::calculateScoreBoard(_activePlayer, 1));
        ui->A19->setText(GameBrain::calculateScoreBoard(_activePlayer, 2));
    }
    if(_activePlayer == PLAYERTWO){
        ui->B7->setText(GameBrain::calculateScoreBoard(_activePlayer, 0));
        ui->B8->setText(GameBrain::calculateScoreBoard(_activePlayer, 1));
        ui->B19->setText(GameBrain::calculateScoreBoard(_activePlayer, 2));
    }
    if(_activePlayer == PLAYERTHREE){
        ui->C7->setText(GameBrain::calculateScoreBoard(_activePlayer, 0));
        ui->C8->setText(GameBrain::calculateScoreBoard(_activePlayer, 1));
        ui->C19->setText(GameBrain::calculateScoreBoard(_activePlayer, 2));
    }
    if(_activePlayer == PLAYERFOUR){
        ui->D7->setText(GameBrain::calculateScoreBoard(_activePlayer, 0));
        ui->D8->setText(GameBrain::calculateScoreBoard(_activePlayer, 1));
        ui->D19->setText(GameBrain::calculateScoreBoard(_activePlayer, 2));
    }

}

void YahtzeeMainWin::playerTurn(int numplayers)
{
    /*
     * A bad PlayerTurn function, loops through the player turns.
     * If there are three players,it loops through player grid A, B and C.
     * input = how many players are playing?
     * - Markus
     */
    _timesRolled = 0;                           // resets _timesRolled, so next player can now roll again.
    ui->rollDiceButton->setEnabled(true);       // sets the rollDice button to enabled, so it can be clicked.

    // If there are one player playing do this:
    if(numplayers == 1){
        _activePlayer = PLAYERONE;
    }

    // If there are two players Playing do this:
    if(numplayers == 2){
        _activePlayer++;
        if(_activePlayer == 3)
            _activePlayer = PLAYERONE;
        if(_activePlayer == PLAYERONE){
            ui->playerBlockerA->hide();
            ui->playerBlockerB->show();
        }
        else{
            ui->playerBlockerA->show();
            ui->playerBlockerB->hide();
        }
    }

    // If there are three players playing do this:
    if(numplayers == 3){
        _activePlayer++;
        if(_activePlayer == 4)
            _activePlayer = PLAYERONE;

        if(_activePlayer == PLAYERONE){
            ui->playerBlockerA->hide();
            ui->playerBlockerB->show();
            ui->playerBlockerC->show();
        }
        else if(_activePlayer == PLAYERTWO){
            ui->playerBlockerA->show();
            ui->playerBlockerB->hide();
            ui->playerBlockerC->show();
        }
        else{
            ui->playerBlockerA->show();
            ui->playerBlockerB->show();
            ui->playerBlockerC->hide();
        }
    }

    // If there are four players playing do this:
    if(numplayers == 4){
        _activePlayer++;
        if(_activePlayer == 5)
            _activePlayer = PLAYERONE;

        if(_activePlayer == PLAYERONE){
            ui->playerBlockerA->hide();
            ui->playerBlockerB->show();
            ui->playerBlockerC->show();
            ui->playerBlockerD->show();
        }
        else if(_activePlayer == PLAYERTWO){
            ui->playerBlockerA->show();
            ui->playerBlockerB->hide();
            ui->playerBlockerC->show();
            ui->playerBlockerD->show();
        }
        else if(_activePlayer == PLAYERTHREE){
            ui->playerBlockerA->show();
            ui->playerBlockerB->show();
            ui->playerBlockerC->hide();
            ui->playerBlockerD->show();
        }
        else{
            ui->playerBlockerA->show();
            ui->playerBlockerB->show();
            ui->playerBlockerC->show();
            ui->playerBlockerD->hide();
        }
    }
    qDebug() << "Current player is: " << _activePlayer << endl;
}


void YahtzeeMainWin::aButtonWasClicked()
{
    QPushButton *theButton = dynamic_cast<QPushButton*>(sender());
    theButton->setText("hej");

    if(theButton)
    {
        theButton->setEnabled(false); // disables the button so that you cannot add points here again.
        displayScoreOnScreen();
        playerTurn(_numOfPlayers); // player func that changes turns to next player.
    }
}


void YahtzeeMainWin::aDiceWasClicked()
{
    QPushButton *theButton = dynamic_cast<QPushButton*>(sender());
    // QAbstractButton *theDiceClicked = dynamic_cast<QAbstractButton*>(sender());

    if(theButton == ui->dice1Button || ui->dice2Button || ui->dice3Button || ui->dice4Button || ui->dice5Button)
        qDebug() << "Clicked a dicebutton" << endl;

    if (theButton == ui->dice1Button)
        gameBrain.checkDie(1);
    else if (theButton == ui->dice2Button)
        gameBrain.checkDie(2);
    else if (theButton == ui->dice3Button)
        gameBrain.checkDie(3);
    else if (theButton == ui->dice4Button)
        gameBrain.checkDie(4);
    else if (theButton == ui->dice5Button)
        gameBrain.checkDie(5);
}

void YahtzeeMainWin::on_rollDiceButton_clicked()
{
    /*
     * Calls the function displayDiceOnScreen to roll the dice and display the dive image.
     * Does this 3 times, then locks the Roll button.
     * - Markus
     */

    if(_timesRolled <= 2)
        displayDiceOnScreen();
    if(_timesRolled == 2)
        ui->rollDiceButton->setEnabled(false);

    _timesRolled++;
}

void YahtzeeMainWin::on_onePlayerButton_triggered()
{
    ui->rollDiceButton->setEnabled(true);
    _numOfPlayers = 1;
    chooseAmountOfPlayers();
}

void YahtzeeMainWin::on_twoPlayerButton_triggered()
{
    ui->rollDiceButton->setEnabled(true);
    _numOfPlayers = 2;
    chooseAmountOfPlayers();
}

void YahtzeeMainWin::on_threePlayerButton_triggered()
{
    ui->rollDiceButton->setEnabled(true);
    _numOfPlayers = 3;
    chooseAmountOfPlayers();
}

void YahtzeeMainWin::on_fourPlayerButton_triggered()
{
    ui->rollDiceButton->setEnabled(true);
    _numOfPlayers = 4;
    chooseAmountOfPlayers();
}

