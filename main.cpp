#include <iostream>
#include "structure.hpp"
using std::cout , std::cin , std::srand , std::rand;



int combatloop(Game *game);

int main()
{
  Player player {30, 3, 2};
  Player opponent {25, 2, 3};
  Game game {&player,&opponent};

  while (true) {
    if (combatloop(&game)) {
      break;
    }
  }



}


  