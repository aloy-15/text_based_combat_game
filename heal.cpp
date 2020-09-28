#include <iostream>
#include "structure.hpp"
using std::cout, std::cin;

int d20;

void heal(Game *game){
  d20 = random()%20 + 1;
  if (d20 > 10){
    game->&current->hp += HEALTH_POTION + game->player->heal;
  }
}