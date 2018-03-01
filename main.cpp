#include "SecretDoor/SecretDoor.h"
#include <iostream>

using namespace std;

int main()
{
  SecretDoor game;
  int repe;
  int wins;
  
  cout<<"How many times do you want to play the game? ";
  cin>>repe;

  for(int x = 0; x < repe; x++)
  {
    game.newGame();
    game.guessDoorC();
    game.guessDoorC();
    if(game.isWinner() == true)
    {
      wins++;
    }
  }
  cout<<wins<<endl;


  return 0;
}
