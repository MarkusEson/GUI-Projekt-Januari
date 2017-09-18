#ifndef GAMEBRAIN_H
#define GAMEBRAIN_H

// #include <iostream>
#include <algorithm>
#include <QDebug>
#include <stdlib.h>
#include <time.h>

class GameBrain
{
public:
    GameBrain();
    ~GameBrain();

    void rollDice();
    int *getDiceArray();
    //void oneToSix();
    void xOfAKind();
    //void fullHouse();
    //void smallLargeStraight();

private:
    int diceArray[5];
    int throwValue [5] = {1,1,1,1,5};
    int sum = 0;
    int dieSort = 3;
};

#endif // GAMEBRAIN_H
