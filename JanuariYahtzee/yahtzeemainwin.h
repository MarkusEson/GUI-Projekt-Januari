#ifndef YAHTZEEMAINWIN_H
#define YAHTZEEMAINWIN_H

#include <QMainWindow>
#include <vector>

namespace Ui {
class YahtzeeMainWin;
}

class YahtzeeMainWin : public QMainWindow
{
    Q_OBJECT

public:
    explicit YahtzeeMainWin(QWidget *parent = 0);
    ~YahtzeeMainWin();
    void optionsButtonClicked();
    void showPlayerBlockersOnClick();
    void chooseAmountOfPlayers(int numOfPlayers);
    void displayDiceOnScreen();


private:
    Ui::YahtzeeMainWin *ui;
    int _numOfPlayers = 0;
    std::vector<int> diceVector;

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
