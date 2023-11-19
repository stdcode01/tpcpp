//magicien.cpp
#include "magicien.h"
magicien::magicien(string nom):Personnage(nom){
mana = 50;
}
void magicien::recevoir_degats(int degats){
if (posture_defensive) degats= degats;
vie -= degats;
if(vie <=0) cout<<nom<<" magicien mort... "<<endl;
posture_defensive = false;
}void magicien::attaque_speciale(Personnage *cible ){
int magi;
cout<< " Magicien "<< nom<<" combien de mana tu-veux utiliser ? "<<endl;
cin>>magi;
cible->recevoir_degats(magi);
cout<<nom<<" : "<< " WoW..."<<endl;
}
