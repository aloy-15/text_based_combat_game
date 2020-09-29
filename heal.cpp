#include <iostream>
#include "structure.hpp"
using std::cout, std::cin;

int d20;

void Player::regen(){
  d20 = random()%20 + 1;
  if (d20 > 10){
    this->hp += HEALTH_POTION + this->heal;
    //what do you mean with this? where are you pointing to?
  }
}
