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
        button->setDisabled(true); // Disabled so that player can't lock the dice until rolled
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
    _activePlayer = PLAYERONE;
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

void YahtzeeMainWin::displayDiceOnScreen() // Removed rollDice func
{
    Die * arrayWithDice = gameBrain.getDiceArray();
    setDieImage(ui->dice1Button, arrayWithDice[0]);
    setDieImage(ui->dice2Button, arrayWithDice[1]);
    setDieImage(ui->dice3Button, arrayWithDice[2]);
    setDieImage(ui->dice4Button, arrayWithDice[3]);
    setDieImage(ui->dice5Button, arrayWithDice[4]);
    delete arrayWithDice;
}

void YahtzeeMainWin::playerTurn(int numplayers)
{
    _timesRolled = 0;                           // resets _timesRolled, so next player can now roll again.
    ui->rollDiceButton->setEnabled(true);       // sets the rollDice button to enabled, so it can be clicked.

    for(int i = 0; i < numplayers; i++){
        if(_activePlayer > numplayers)
            _activePlayer = PLAYERONE;

        if(_activePlayer == PLAYERONE){
            showPlayerBlockersOnClick();
            ui->playerBlockerA->hide();
        }
        else if(_activePlayer == PLAYERTWO){
            showPlayerBlockersOnClick();
            ui->playerBlockerB->hide();
        }
        else if(_activePlayer == PLAYERTHREE){
            showPlayerBlockersOnClick();
            ui->playerBlockerC->hide();
        }
        else if(_activePlayer == PLAYERFOUR){
            showPlayerBlockersOnClick();
            ui->playerBlockerD->hide();
        }
    }

    qDebug() << _activePlayer << endl;
}

void YahtzeeMainWin::aButtonWasClicked()
{
    QPushButton *theButton = dynamic_cast<QPushButton*>(sender());

    /*
     * This function gets called every time a player clicks the scoreboard.
     * Adds the players sum, Bonus, and total scores to the board.
     * And finally disbles the button so that it cannot be clicked again.
     * Inspired and copied from Ragnar Nohre - Lab 5
     */
    if(theButton){
        //dynamic_cast<QPushButton*>(sender())->setText("12");
        //dynamic_cast<QPushButton*>(sender())->setEnabled(false);

        if(_activePlayer == PLAYERONE){
            ui->A7->setText(GameBrain::calculateScoreBoard(_activePlayer, 0));  // calculateScoreBoard(<the players index in _scoreArray>, <the scoreIndexer>)
            ui->A8->setText(GameBrain::calculateScoreBoard(_activePlayer, 1));  // score indexer = 1: score, 2: bonus, 3: Total Score
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

        _activePlayer++;
        gameBrain.resetChecked();
        playerTurn(_numOfPlayers); // player func that changes turns to next player.
        displayDiceOnScreen();

        for(int i = 0; i < ui->diceButtonLayout->count() - 1; i++){
            QWidget *button = ui->diceButtonLayout->itemAt(i)->widget();
                button->setDisabled(true);
        }
    }
}

void YahtzeeMainWin::aDiceWasClicked()
{
    QPushButton *theButton = dynamic_cast<QPushButton*>(sender());

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

    displayDiceOnScreen();
}

void YahtzeeMainWin::on_rollDiceButton_clicked() // Added rollDice func
{
    if(_timesRolled <= 2 )
        gameBrain.rollDice();
        displayDiceOnScreen();
    if(_timesRolled == 2)
        ui->rollDiceButton->setDisabled(true);

    for(int i = 0; i < ui->diceButtonLayout->count(); i++){
        QWidget *button = ui->diceButtonLayout->itemAt(i)->widget();
            if(!button->isEnabled())
                button->setEnabled(true);
    }

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
