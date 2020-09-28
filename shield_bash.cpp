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
        cout<<"both you and your opponent rolled a natural 20\n";
        game->player->hp -= DAMAGE_SHIELDBASH;
        d20 = random()%20+1;
        if (d20 > 10){
          game->opponent->stunned = true;
        }
      }
      else if(dodge < 20){
        cout<<"you rolled a natural 20 and you deal critical damage\n";
      game->player->hp -= (DAMAGE_SHIELDBASH + game->player->melee);
      game->opponent->stunned = true;
      }
    break;

    case 1:
      cout<<"you rolled a natural one so you will take damage\n";
      game->player->hp -= DAMAGE_SHIELDBASH;

    break;

    default:

      if( dodge == 20 ){
        cout<<"the opponent rolled a natural 20 so he makes a perfect dodge\n";
      }

      else if(d20 + game->player->melee > dodge){
        game->opponent->hp -= DAMAGE_SHIELDBASH;
        d20 = random()%20 +1;

        if (d20 > 10){
          game->opponent->stunned = true;
          cout<<"you stunned your opponent\n";
        }
        cout<<"you hit your opponent"; 
      }  

      else {
        cout<<"your opponent dodged the blow";
      }
      
    break;




  

    
  }

}