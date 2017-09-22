#ifndef YAHTZEEMAINWIN_H
#define YAHTZEEMAINWIN_H

#include <QMainWindow>
#include <QLabel>
#include <QPushButton>
#include "gamebrain.h"

#define PLAYERONE 1
#define PLAYERTWO 2
#define PLAYERTHREE 3
#define PLAYERFOUR 4


namespace Ui {
class YahtzeeMainWin;
}

class YahtzeeMainWin : public QMainWindow, GameBrain
{
    Q_OBJECT

public:
    explicit YahtzeeMainWin(QWidget *parent = 0);
    ~YahtzeeMainWin();
    void showPlayerBlockersOnClick();
    void chooseAmountOfPlayers();
    void setDieImage(QPushButton * button, Die die);
    void displayDiceOnScreen();
    void playerTurn(int _numOfPlayers);

private:
    Ui::YahtzeeMainWin *ui;
    int _numOfPlayers = 0;
    int _activePlayer = 1;
    int _timesRolled = 0;
    GameBrain gameBrain;


private slots:
    void aButtonWasClicked();
    void aDiceWasClicked();
    void on_rollDiceButton_clicked();
    void on_threePlayerButton_triggered();
    void on_onePlayerButton_triggered();
    void on_twoPlayerButton_triggered();
    void on_fourPlayerButton_triggered();

};

#endif // YAHTZEEMAINWIN_H
