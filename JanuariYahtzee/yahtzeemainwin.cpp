#include "yahtzeemainwin.h"
#include "ui_yahtzeemainwin.h"
#include <QDebug>
#include <unistd.h>



YahtzeeMainWin::YahtzeeMainWin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::YahtzeeMainWin)
{
    ui->setupUi(this);

    /*
     * En funktion som connectar alla knappar i layouterna Agrid, Bgrid, Cgrid och Dgrid.
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
}

YahtzeeMainWin::~YahtzeeMainWin()
{
    delete ui;
}


void YahtzeeMainWin::optionsButtonClicked()
{
    /*
     * Denna funktion kollar om menuLabel är dold eller ej, om den är det så sätts allt i Layouten till Show();
     * Om menuLabel inte syns, så sätts allt i layouten till Hide();
     */
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

void YahtzeeMainWin::displayDiceOnScreen()
{
    diceVector = {2,1,4,5,3};
    qDebug() << "HEHEHEHEHHE";

    /*
     * lägger in nya tärningsbilder i ui->diceLabel beroende på vad man rollade på tärningen
     * Koden kommr från DenisKormalev från följande sida - https://forum.qt.io/topic/1378/is-it-possible-to-set-a-background-image-to-a-widget
    */

    // TO DO
    // generalize and shorten this code.
    // priority - good looking code.
    // test 17:57

    // vilken del är detta?

        if(diceVector[0] == 1)
             ui->dice1Label->setStyleSheet("QWidget {image: url(:/new/pictures/1dice.png) }");
        else if(diceVector[0] == 2)
             ui->dice1Label->setStyleSheet("QWidget {image: url(:/new/pictures/2dice.png) }");
        else if(diceVector[0] == 3)
             ui->dice1Label->setStyleSheet("QWidget {image: url(:/new/pictures/3dice.png) }");
        else if(diceVector[0] == 4)
             ui->dice1Label->setStyleSheet("QWidget {image: url(:/new/pictures/4dice.png) }");
        else if(diceVector[0] == 5)
             ui->dice1Label->setStyleSheet("QWidget {image: url(:/new/pictures/5dice.png) }");


        if(diceVector[1] == 1)
            ui->dice2Label->setStyleSheet("QWidget {image: url(:/new/pictures/1dice.png) }");
        else if(diceVector[1] == 2)
            ui->dice2Label->setStyleSheet("QWidget {image: url(:/new/pictures/2dice.png) }");
        else if(diceVector[1] == 3)
            ui->dice2Label->setStyleSheet("QWidget {image: url(:/new/pictures/3dice.png) }");
        else if(diceVector[1] == 4)
            ui->dice2Label->setStyleSheet("QWidget {image: url(:/new/pictures/4dice.png) }");
        else if(diceVector[1] == 5)
            ui->dice2Label->setStyleSheet("QWidget {image: url(:/new/pictures/5dice.png) }");



        if(diceVector[2] == 1)
            ui->dice3Label->setStyleSheet("QWidget {image: url(:/new/pictures/1dice.png) }");
        else if(diceVector[2] == 2)
            ui->dice3Label->setStyleSheet("QWidget {image: url(:/new/pictures/2dice.png) }");
        else if(diceVector[2] == 3)
            ui->dice3Label->setStyleSheet("QWidget {image: url(:/new/pictures/3dice.png) }");
        else if(diceVector[2] == 4)
            ui->dice3Label->setStyleSheet("QWidget {image: url(:/new/pictures/4dice.png) }");
        else if(diceVector[2] == 5)
            ui->dice3Label->setStyleSheet("QWidget {image: url(:/new/pictures/5dice.png) }");


        if(diceVector[3] == 1)
            ui->dice4Label->setStyleSheet("QWidget {image: url(:/new/pictures/1dice.png) }");
        else if(diceVector[3] == 2)
            ui->dice4Label->setStyleSheet("QWidget {image: url(:/new/pictures/2dice.png) }");
        else if(diceVector[3] == 3)
            ui->dice4Label->setStyleSheet("QWidget {image: url(:/new/pictures/3dice.png) }");
        else if(diceVector[3] == 4)
            ui->dice4Label->setStyleSheet("QWidget {image: url(:/new/pictures/4dice.png) }");
        else if(diceVector[3] == 5)
            ui->dice4Label->setStyleSheet("QWidget {image: url(:/new/pictures/5dice.png) }");


        if(diceVector[4] == 1)
            ui->dice5Label->setStyleSheet("QWidget {image: url(:/new/pictures/1dice.png) }");
        else if(diceVector[4] == 2)
            ui->dice5Label->setStyleSheet("QWidget {image: url(:/new/pictures/2dice.png) }");
        else if(diceVector[4] == 3)
            ui->dice5Label->setStyleSheet("QWidget {image: url(:/new/pictures/3dice.png) }");
        else if(diceVector[4] == 4)
            ui->dice5Label->setStyleSheet("QWidget {image: url(:/new/pictures/4dice.png) }");
        else if(diceVector[4] == 5)
            ui->dice5Label->setStyleSheet("QWidget {image: url(:/new/pictures/5dice.png) }");
}



void YahtzeeMainWin::aButtonWasClicked()
{
    QPushButton *theButton = dynamic_cast<QPushButton*>(sender());

    //qDebug() << "FUNKTIONENENENENN";

    theButton->setText("hej");
    theButton->setEnabled(false);

    ui->A7->setText("sum");

    /*
    if(theButton == ui->A1)
    {
        ui->A1->setChecked(true);
    }
    */
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
    //qDebug() << "KLICKADE PÅ KNAPPEN";
    displayDiceOnScreen();
}


