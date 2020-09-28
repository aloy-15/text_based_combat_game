#include <iostream>
#include "structure.hpp"
using std::cout , std::istream, std::cin, std::endl;


void sword_attack(Game *game) {
  int dodge;
  int d20;

  dodge = random() % 20 + 1;
  d20 = random() % 20 + 1;
  cout<<"\nFor d20 you rolled "<<d20<<"\nAnd your opponent rolled "<<dodge<<" for dodge\n";
  switch (d20) {
    case 20:
      if (dodge == 20) {
        game->opponent->hp -= (DAMAGE_SWORD + game->player->melee);
        cout << "you hit your opponent for " << DAMAGE_SWORD + game->player->melee << "\n";
      }
      else {
        game->opponent->hp = ((DAMAGE_SWORD + game->player->melee) * 2);
        cout << "you hit your opponent for " << (DAMAGE_SWORD + game->player->melee) * 2 << "\n";
        }
    break;

    case 1:
      game->player->hp -= DAMAGE_SWORD;
      cout << "you hit yourself for " << DAMAGE_SWORD << "\n";

    break;

    default:
      if (d20 + game->player->melee > dodge) {
        game->opponent->hp -= DAMAGE_SWORD + game->player->melee;
        cout << "you hit your opponent for " << DAMAGE_SWORD + game->player->melee <<"\n";
      }
      else {
      cout << "you missed your hit or your opponent dodged it.\n";
      }
      break;
    }
}