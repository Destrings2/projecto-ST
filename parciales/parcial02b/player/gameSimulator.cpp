#include "player.h"
#include <iostream>

using namespace std;

enum GameEvent { setLife = 1,
                 setArmor = 2,
                 charge = 3,
                 shot = 4,
                 fire = 5,
                 end = 6};

int
main() {

  unsigned short nLifes;
  unsigned short nBullets;
  unsigned short armorLevel;
  unsigned short shotFactor;

  cin >> nLifes >> nBullets >> armorLevel >> shotFactor;

  Player player(nLifes, nBullets, armorLevel, shotFactor);

  short event; 

  cin >> event;

  while (event != end) {
    switch (event) {
    case setLife:
      cin >> nLifes;
      player.setLifes(nLifes);
      break;

    case setArmor:
      cin >> armorLevel;
      player.setArmorLevel(armorLevel);
      break;

    case charge:
      cin >> nBullets;
      player.chargeCartridge(nBullets);
      break;

    case shot:
      player.receiveShot();
      break;

    case fire:
      player.fireMachineGun();
      break;
    }

    cin >> event;
  }

  cout << "player is: " << (player.isAlive() ? "alive" : "dead") << endl;
  cout << "lifes: " << player.getLifes() << endl;
  cout << "armor: " << player.getArmorLevel() << endl;
  cout << "bullets: " << player.getNbrBullets() << endl;
  return 0;
}
