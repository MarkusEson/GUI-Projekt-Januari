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

Die * GameBrain::getDiceArray() // Returns copy of array
{
    Die * pointerToDiceArrayCopy = new Die[5];
    for (int i = 0; i < 5; i++)
        pointerToDiceArrayCopy[i] = _diceArray[i];
    return pointerToDiceArrayCopy;
}

void GameBrain::checkDie(int dieNumber)
{
    _diceArray[dieNumber - 1].checkDie();
    qDebug() << "Tärning nr: " << dieNumber << "blev checkad/avcheckad";
}

void GameBrain::xOfAKind()
{
    for(int j=1; j<6; j++)
    {
        int count = 0;
        for( int i = 0; i < 5; i++ )
        {
            if( throwValue[i] == j )
                count +=1;
            if(count >= dieSort)
                sum = j * dieSort;
        }
    }
}

void GameBrain::oneToSix()
{
      for( int i = 0; i < 5; i++ )
      {
        if( throwValue[i] == dieValue )
            sum += dieValue;
      }
      qDebug() << sum;
}

void GameBrain::fullHouse()
{
    if( (((throwValue[0] == throwValue[1]) && (throwValue[1] == throwValue[2])) && // Three of a Kind
        (throwValue[3] == throwValue[4]) && // Two of a Kind
        (throwValue[2] != throwValue[3])) ||
        ((throwValue[0] == throwValue[1]) && // Two of a Kind
        ((throwValue[2] == throwValue[3]) && (throwValue[3] == throwValue[4])) && // Three of a Kind
        (throwValue[1] != throwValue[2])) )
    {
        sum = throwValue[0]+throwValue[1]+throwValue[2]+throwValue[3]+throwValue[4];
    }

    qDebug() << sum;
}

void GameBrain::smallLargeStraight()
{
    int firstStraight = 1;
    if (smallLarge == 2){firstStraight ++;}

    if( ((throwValue[0] == firstStraight) &&
     (throwValue[1] == firstStraight +1) &&
     (throwValue[2] == firstStraight +2) &&
     (throwValue[3] == firstStraight +3) &&
     (throwValue[4] == firstStraight +4)))
    {
        int straightNumber = firstStraight;
        int straightValue = firstStraight;
        for( int i = 0; i <4; i++ )
        {
            straightNumber++;
            straightValue += straightNumber;
        }
        sum = straightValue;
    }
    qDebug() << sum;
}

QString GameBrain::getScoreFromArray()
{
    //QString numToPrint = QString::number();
}

QString GameBrain::calculateScoreBoard(int player, int sumBonusOrTotal)
{
    /*
    _scoreArray[0][1] = 5;
    _scoreArray[1][1] = 5;
    _scoreArray[2][1] = 2;
    _scoreArray[3][1] = 20;
    _scoreArray[4][1] = 20;
    _scoreArray[5][1] = 20;

    _scoreArray[0][2] = 5;
    _scoreArray[1][2] = 5;
    _scoreArray[2][2] = 2;
    _scoreArray[3][2] = 20;
    _scoreArray[4][2] = 30;
    _scoreArray[5][2] = 30;

    _scoreArray[0][3] = 5;
    _scoreArray[1][3] = 5;
    _scoreArray[2][3] = 2;
    _scoreArray[3][3] = 10;
    _scoreArray[4][3] = 0;
    _scoreArray[5][3] = 1;
    */
    /*
     * A function that takes the active player, and on click sums all the players currents points and returns these to be displayed.
     * Calculates the Sum, Bonus, and Total scores.
     */
    int score = 0;
    switch(sumBonusOrTotal){
        case 0:{                                            // sums up the first scores.
            for(int i = 0; i < 6; i++)
                score += _scoreArray[i][player];
            _scoreArray[6][player] = score;
            break;
        }
        case 1:{                                            // adds bonus scores based on the sum.
            if(_scoreArray[6][player] >= 63)
                _scoreArray[7][player] = 35;
            else
                _scoreArray[7][player] = 0;

            score = _scoreArray[7][player];
            break;
        }
        case 2:{                                            // sums upp the total score.
            for(int i = 6; i < 19; i++)
                score += _scoreArray[i][player];
            break;
        }
    }
    QString scoreToReturn = QString::number(score);
    return scoreToReturn;
}

void GameBrain::resetChecked()
{
    for(int i = 0; i < 5; i++){
        if(_diceArray[i].checkIsChecked())
            _diceArray[i].checkDie();
    }
}

void GameBrain::resetScoreBoard()
{
    for(int i = 0; i < 19; i++)
        for(int j = 0; j < 4; j++)
            _scoreArray[i][j] = 0;
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

void Die::checkDie()
{
    if (_isChecked)
        _isChecked = false;
    else
        _isChecked = true;
}

