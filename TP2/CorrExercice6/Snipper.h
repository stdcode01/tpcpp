//snipper.h
#ifndef __SNIPPER_H__
#define __SNIPPER_H__
#include "Personnage.h"
#include<time.h>
class snipper: public Personnage{
private:
int munitions;
public:
snipper(string nom);
void recevoir_degats(int degats);
void frapper(Personnage *cible);
void bouclier();
void attaque_speciale(Personnage *cible );
};
#endif
