//barbare.h
#ifndef __BARBARE_H__
#define __BARBARE_H__
#include "Personnage.h"
#include<time.h>
class barbare: public Personnage{
private:bool arme;
public:
barbare(string nom);
// void recevoir_degats(int degats);
void frapper(Personnage *cible);
void bouclier();
void attaque_speciale(Personnage *cible );
};
#endif
