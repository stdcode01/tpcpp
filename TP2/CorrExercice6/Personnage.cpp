//Personnage.cpp
#include "Personnage.h"
Personnage::Personnage( string nom){
this->nom = nom;
this->vie = 100;
}
string Personnage::GetNom(){
return this->nom;
}
int Personnage::GetVie(){
return this->vie;
}
bool Personnage::tu_es_mort(){
if(vie <=0)
return true;
else return false;
}
void Personnage::recevoir_degats(int degats){
if (posture_defensive) degats /=2;
vie -= degats;
if(vie <=0) cout<<nom<<" je suis mort "<<endl;
posture_defensive = false;
}
void Personnage::frapper(Personnage *cible){
posture_defensive = false;
cible->recevoir_degats(30);
cout<<nom<<" je te frappe "<<cible->GetNom()<<" \n";
}
void Personnage::bouclier(){
posture_defensive = true;
cout<<" Bouclier "<<endl;
}
