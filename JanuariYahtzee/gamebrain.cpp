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

void GameBrain::xOfAKind(){


    for(int j=1; j<6; j++){
        int count = 0;
        for( int i = 0; i < 5; i++ )
        {
          if( throwValue[i] == j )
          {
            count +=1;
          }
          if(count >= dieSort){
              sum = j * dieSort;
          }


        }
    }
      qDebug() << sum;
      qDebug() << "ahh";
}

void GameBrain::oneToSix(){

      for( int i = 0; i < 5; i++ )
      {
        if( throwValue[i] == dieValue )
        {
          sum += dieValue;
        }
      }
      qDebug() << sum;
}




void GameBrain::fullHouse(){

 if( (((throwValue[0] == throwValue[1]) && (throwValue[1] == throwValue[2])) && // Three of a Kind
 (throwValue[3] == throwValue[4]) && // Two of a Kind
 (throwValue[2] != throwValue[3])) ||
 ((throwValue[0] == throwValue[1]) && // Two of a Kind
 ((throwValue[2] == throwValue[3]) && (throwValue[3] == throwValue[4])) && // Three of a Kind
 (throwValue[1] != throwValue[2])) ){
     sum = throwValue[0]+throwValue[1]+throwValue[2]+throwValue[3]+throwValue[4];
 }

qDebug() << sum;
}

void GameBrain::smallLargeStraight(){

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
    for( int i = 0; i <4; i++ ){
        straightNumber++;
        straightValue += straightNumber;
    }
  sum = straightValue;
}
qDebug() << sum;
}
