#ifndef YAHTZEEMAINWIN_H
#define YAHTZEEMAINWIN_H

#include <QMainWindow>
#include <QLabel>

#include "gamebrain.h"

namespace Ui {
class YahtzeeMainWin;
}

class YahtzeeMainWin : public QMainWindow, GameBrain
{
    Q_OBJECT

public:
    explicit YahtzeeMainWin(QWidget *parent = 0);
    ~YahtzeeMainWin();
    void optionsButtonClicked();
    void showPlayerBlockersOnClick();
    void chooseAmountOfPlayers(int numOfPlayers);
    void setDieImage(QLabel * label, int dieValue);
    void displayDiceOnScreen();
    void calculateScoreOnGameBoard();


private:
    Ui::YahtzeeMainWin *ui;
    int _numOfPlayers = 0;
    GameBrain gameBrain;
    int _scoreArray[20][4];

private slots:
    void aButtonWasClicked();
    void on_onePlayerButton_clicked();
    void on_twoPlayerButton_clicked();
    void on_threePlayerButton_clicked();
    void on_fourPlayerButton_clicked();
    void on_optionsButton_clicked();
    void on_rollDiceButton_clicked();

};

#endif // YAHTZEEMAINWIN_H
