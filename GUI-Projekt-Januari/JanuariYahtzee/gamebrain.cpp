Klassen Die har skapats, i denna har vi tärningens värde samt om den är klickad eller inte
Detta för att slumpandet av tärningar sker i Gamebrain


#include "gamebrain.h"

GameBrain::GameBrain()
{
}

GameBrain::~GameBrain()
{
}

void GameBrain::rollDice()
{
    for (unsigned int i = 0; i < sizeof(_diceArray)/sizeof(_diceArray[0]); i++)
    {
        if (!_diceArray[i].checkIsChecked())
        {
            _diceArray[i].setValue(rand() % 6 + 1);
            qDebug() << "Dice nr " << (i + 1) << " fick värdet" << _diceArray[i].getValue();
        }
        else
            qDebug() << "Dice nr " << (i + 1) << " har fortfarande värdet" << _diceArray[i].getValue();
    }
    std::sort(_diceArray, _diceArray + 5, [](Die & a, Die & b) -> bool { return a.getValue() < b.getValue(); });
    qDebug() << "Sorterat!";
    // Här har vi använt kod inspirerad av https://stackoverflow.com/questions/12823573/c-sorting-class-array
    // Lambakoden förklarar för sort att objekten ska sorteras efter värdena som returneras från "getValue()"
    // Tänkte att det var nog bäst att ha lambakod eftersom det bara är i rollDice() den är relevant

}

int * GameBrain::getDiceArray() // Returns copy of array
{
    int * pointerToDiceArrayCopy = new int[5];
    for (int i = 0; i < 5; i++)
        pointerToDiceArrayCopy[i] = _diceArray[i].getValue();
    return pointerToDiceArrayCopy;
}

// ------ Die - koden -----------------

Die::Die()
{

}

Die::~Die()
{

}

void Die::setValue(int newValue)
{
    _value = newValue;
}

int Die::getValue()
{
    return _value;
}

bool Die::checkIsChecked()
{
    return _isChecked;
}
