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

private:
    int diceArray[5];
};

#endif // GAMEBRAIN_H
