#include "gamebrain.h"

GameBrain::GameBrain()
{
    for (int i = 0; i < sizeof(diceArray)/sizeof(diceArray[0]); i++)
    {
        diceArray[i] = 6;
    }
}

GameBrain::~GameBrain()
{
    delete diceArray;
}

void GameBrain::rollDice()
{
    for (int i = 0; i < sizeof(diceArray)/sizeof(diceArray[0]); i++)
    {
        diceArray[i] = rand() % 6 + 1;
        qDebug() << "Dice nr " << (i + 1) << " fick värdet" << diceArray[i];
    }
    std::sort(diceArray, diceArray + 5);
    qDebug() << "Sorterat!";

}

int * GameBrain::getDiceArray() // Returns copy of array
{
    int * pointerToDiceArrayCopy = new int[5];
    for (int i = 0; i < 5; i++)
        pointerToDiceArrayCopy[i] = diceArray[i];
    return pointerToDiceArrayCopy;
}
