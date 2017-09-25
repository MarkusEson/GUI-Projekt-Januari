#ifndef GAMEBRAIN_H
#define GAMEBRAIN_H

#include <algorithm>
#include <QDebug>
#include <stdlib.h>
#include <time.h>

class Die {
public:
    Die();
    ~Die();

    void setValue(int newValue);
    int getValue();
    bool checkIsChecked();
    void checkDie();

private:
    int _value = 6;
    bool _isChecked = 0;

};

class GameBrain
{
public:
    GameBrain();
    ~GameBrain();

    void rollDice();
    Die *getDiceArray();
    void checkDie(int dieNumber);
    void oneToSix();
    void xOfAKind();
    void fullHouse();
    void smallLargeStraight();
    QString getScoreFromArray();
    QString calculateScoreBoard(int player, int sumBonusOrTotal);
    void resetChecked();
    void resetScoreBoard();

private:
    Die _diceArray[5];

    int throwValue [5] = {2,3,4,5,6};           //testvariabler för funktionerna
    int dieValue = 4;
    int sum = 0;
    int dieSort = 3;
    int smallLarge = 2;


    int _scoreArray[19][4];
};

#endif // GAMEBRAIN_H
