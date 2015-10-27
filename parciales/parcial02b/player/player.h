#pragma once

class Player {
 public:
  Player(unsigned short nLife,
         unsigned short nBullets,
         unsigned short armorLevel,
         unsigned short shotFactor);
  void setLifes(unsigned short nLifes);
  void setArmorLevel(unsigned short level);
  void chargeCartridge(unsigned short nBullets);
  void receiveShot();
  void fireMachineGun();
  bool isAlive() const;
  unsigned short getLifes() const;
  unsigned short getArmorLevel() const;
  unsigned short getNbrBullets() const;
 private:
  unsigned short nLifes;
  unsigned short nBullets;
  unsigned short armorLevel;
  unsigned short shotFactor;
};
