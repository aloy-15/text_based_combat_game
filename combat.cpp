#include <iostream>
#include "structure.hpp"
using std::cout , std::cin , std::srand , std::rand,
std::string;

void sword_attack(Game *game);
void shield_bash(Game *game);
void heal(Game *game);

int combatloop(Game *game){

  int d20;
  string answer;

  if ((game->player->hp <= 0) && (game->opponent->hp <= 0)){
    return true;
  }

  cout<<"what action do you want to perform.\n1 sword\n2 shield\n3 heal\n";
  getline(cin, answer);
  if (answer == "sword attack"){
    //the sword attack
    sword_attack(game);
  }
  else if(answer == "shield bash"){
    game->player->shield();
  }
  else if(answer == "heal"){
    game->player->regen();
  }
  cout<<"\nyou have "<<game->player->hp<<" hp\nand your opponent has "<<game->opponent->hp<<" hp\n\n";
  return false;
}
