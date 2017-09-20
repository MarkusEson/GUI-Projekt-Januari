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
    ui->dice1Button->hide();
    ui->dice2Button->hide();
    ui->dice3Button->hide();
    ui->dice4Button->hide();
    ui->dice5Button->hide();
    */

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
    }
    else{
        for(int i = 0; i < ui->menuLayout->count(); i++){
             QWidget *widg = ui->menuLayout->itemAt(i)->widget();
             widg->hide();
        }
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

void YahtzeeMainWin::setDieImage(QPushButton * button, int dieValue)
{
    // Med inspiration av grupp... mars? april?
    QString string = "QPushButton {border-image: url(:/new/pictures/" + QString::number(dieValue) + "dice.png) }";
    button->setStyleSheet(string);
}

void YahtzeeMainWin::displayDiceOnScreen()
{
    gameBrain.rollDice();

    int * arrayWithDice = gameBrain.getDiceArray();
    setDieImage(ui->dice1Button, arrayWithDice[0]);
    setDieImage(ui->dice2Button, arrayWithDice[1]);
    setDieImage(ui->dice3Button, arrayWithDice[2]);
    setDieImage(ui->dice4Button, arrayWithDice[3]);
    setDieImage(ui->dice5Button, arrayWithDice[4]);
    delete arrayWithDice;

}

void YahtzeeMainWin::playerTurn(int numplayers)
{
    if(numplayers == 1){
        _activePlayer = 1;
    }

    if(numplayers == 2){
        _activePlayer++;
        if(_activePlayer == 3)
            _activePlayer = 1;
    }

    if(numplayers == 3){
        _activePlayer++;
        if(_activePlayer == 4)
            _activePlayer = 1;
    }

    if(numplayers == 4){
        _activePlayer++;
        if(_activePlayer == 5)
            _activePlayer = 1;
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

        if(_activePlayer == 1){
            ui->A7->setText(GameBrain::calculateScoreBoard(0, 0));  // 0 = sum of first scores
            ui->A8->setText(GameBrain::calculateScoreBoard(0, 1));  // 1 = bonus score if sum >= 64
            ui->A19->setText(GameBrain::calculateScoreBoard(0, 2)); // 2 = total score
        }
        if(_activePlayer == 2){
            ui->B7->setText(GameBrain::calculateScoreBoard(1, 0));  // 0 = sum of first scores
            ui->B8->setText(GameBrain::calculateScoreBoard(1, 1));  // 1 = bonus score if sum >= 64
            ui->B19->setText(GameBrain::calculateScoreBoard(1, 2)); // 2 = total score
        }
        if(_activePlayer == 3){
            ui->C7->setText(GameBrain::calculateScoreBoard(2, 0));  // 0 = sum of first scores
            ui->C8->setText(GameBrain::calculateScoreBoard(2, 1));  // 1 = bonus score if sum >= 64
            ui->C19->setText(GameBrain::calculateScoreBoard(2, 2)); // 2 = total score
        }
        if(_activePlayer == 4){
            ui->D7->setText(GameBrain::calculateScoreBoard(3, 0));  // 0 = sum of first scores
            ui->D8->setText(GameBrain::calculateScoreBoard(3, 1));  // 1 = bonus score if sum >= 64
            ui->D19->setText(GameBrain::calculateScoreBoard(3, 2)); // 2 = total score
        }
        playerTurn(_numOfPlayers); // player func that changes turns to next player.
    }
}

void YahtzeeMainWin::aDiceWasClicked()
{
    QPushButton *theButton = dynamic_cast<QPushButton*>(sender());
    // QAbstractButton *theDiceClicked = dynamic_cast<QAbstractButton*>(sender());

    if(theButton == ui->dice1Button || ui->dice2Button || ui->dice3Button || ui->dice4Button || ui->dice5Button)
        qDebug() << "hej tärning";
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
}


