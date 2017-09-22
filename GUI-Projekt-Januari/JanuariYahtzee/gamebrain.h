#ifndef GAMEBRAIN_H
#define GAMEBRAIN_H

// #include <iostream>
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
    int *getDiceArray();

private:
    Die _diceArray[5];
};

#endif // GAMEBRAIN_H
