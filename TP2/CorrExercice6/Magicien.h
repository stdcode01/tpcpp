//magicien.h
#ifndef __MAGICIEN_H__
#define __MAGICIEN_H__
#include "Personnage.h"
#include<time.h>
class magicien: public Personnage{
private:
int mana;
public:
magicien(string nom);
void recevoir_degats(int degats);
//void frapper(Personnage *cible);
//void bouclier();
void attaque_speciale(Personnage *cible );
};
#endif
