
//barbare.cpp
#include "barbare.h"
barbare::barbare(string nom):Personnage(nom){
vie = 200;
}
void barbare::bouclier(){
posture_defensive = false;
vie -=5;
cout<<GetNom()<<" :mmmmmmmmmmmm.... "<<endl;
}
void barbare::frapper(Personnage *cible){
posture_defensive = false;
cible->recevoir_degats(50);
cout<<nom<<" je te frappe (barbare) "<<cible->GetNom()<<" \n";
}
void barbare::attaque_speciale(Personnage *cible ){
vie -=20;
cible->recevoir_degats(50);
cout<<GetNom()<<" boom (barbare) "<<cible->GetNom()<<" \n";
}
