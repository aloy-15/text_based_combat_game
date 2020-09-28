#include <iostream>
using std::string;

const int DAMAGE_SWORD = 3;
const int DAMAGE_SHIELDBASH = 1;
const int HEALTH_POTION = 3;

struct Player
{

  int hp;
  int melee;
  int heal;
  bool stunned;
};

struct Game
{
  Player *player;
  Player *opponent;
};