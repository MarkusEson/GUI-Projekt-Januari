#include "gamebrain.h"

GameBrain::GameBrain()
{
    for (unsigned int i = 0; i < sizeof(diceArray)/sizeof(diceArray[0]); i++)
    {
        diceArray[i] = 6;
    }
}

GameBrain::~GameBrain()
{

}

void GameBrain::rollDice()
{
    for (unsigned int i = 0; i < sizeof(diceArray)/sizeof(diceArray[0]); i++)
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

QString GameBrain::calculateScoreBoard(int _activePlayer, int sumBonusOrTotal)
{
    _scoreArray[0][0] = 5;
    _scoreArray[1][0] = 5;
    _scoreArray[2][0] = 2;
    _scoreArray[3][0] = 20;
    _scoreArray[4][0] = 20;
    _scoreArray[5][0] = 20;
    /*
     * A function that takes the active player, and on click sums all the players currents points and returns these to be displayed.
     * Calculates the Sum, Bonus, and Total scores.
     */
    int score = 0;
    switch(sumBonusOrTotal){
        case 0:{                                            // sums up the first scores.
            for(int i = 0; i < 6; i++)
                score += _scoreArray[i][_activePlayer];
            _scoreArray[6][_activePlayer] = score;
            break;
        }
        case 1:{                                            // adds bonus scores based on the sum.
            if(_scoreArray[6][_activePlayer] >= 63)
                _scoreArray[7][_activePlayer] = 35;
            else
                _scoreArray[7][_activePlayer] = 0;

            score = _scoreArray[7][_activePlayer];
            break;
        }
        case 2:{                                            // sums upp the total score.
            for(int i = 6; i < 20; i++)
                score += _scoreArray[i][_activePlayer];
            break;
        }
    }
    QString scoreToReturn = QString::number(score);
    return scoreToReturn;
}


