#include <iostream>
#include "structure.hpp"
using std::cout, std::cin;

void shield_bash(Game *game){
  int d20;
  int dodge;

  d20 = random()%20 +1;
  dodge = random()%20 +1;

  cout<<"\nFor d20 you rolled "<<d20<<"\nAnd your opponent rolled "<<dodge<<" for dodge\n";

  switch(d20){
    case 20:
      if (dodge == 20){
        cout<<"both you and your opponent rolled a natural 20";
        game->player->hp -=

      }
      break;

  }

}