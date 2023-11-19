//Personnage.h
#ifndef __PERSONNAGE_H__
#define __PERSONNAGE_H__
#include<iostream>
#include<string>
using namespace std;
class Personnage{
protected:
string nom;
int vie;
bool posture_defensive;
public:
Personnage( string nom);
string GetNom();
int GetVie();
bool tu_es_mort();
virtual void recevoir_degats(int degats);virtual void frapper(Personnage *cible);
virtual void bouclier();
virtual void attaque_speciale(Personnage *cible ) = 0;
};
#endif
