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

    void oneToSix();
    void xOfAKind();
    void fullHouse();
    void smallLargeStraight();

private:
    int diceArray[5];



    int throwValue [5] = {2,3,4,5,6};           //testvariabler för funktionerna
    int dieValue = 4;
    int sum = 0;
    int dieSort = 3;
    int smallLarge = 2;
};

#endif // GAMEBRAIN_H
