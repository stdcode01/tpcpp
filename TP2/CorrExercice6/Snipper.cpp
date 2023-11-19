

//snipper.cpp
#include "snipper.h"
snipper::snipper(string nom):Personnage(nom){munitions = 1;
srand(time(NULL));
}
void snipper::recevoir_degats(int degats){
if (posture_defensive) degats =(degats*3)/4;
vie -= degats;
if(vie <=0) cout<<nom<<" snipper mort... "<<endl;
posture_defensive = false;
}
void snipper::frapper(Personnage *cible){
posture_defensive = false;
cible->recevoir_degats(15);
cout<<nom<<" je te frappe (snipper) "<<cible->GetNom()<<" \n";
}
void snipper::bouclier(){
posture_defensive = true;
cout<<" Bouclier "<<endl;
if (rand( ) % 2 )
munitions++;
cout<<" j'ai rechargé "<<endl;
}
void snipper::attaque_speciale(Personnage *cible ){
if(munitions>0){
munitions--;
if(rand()%8<7){
cible->recevoir_degats(50);
cout<<nom<<" : "<< " touché..."<<endl;
}
else
cout<<nom<<" : "<<cible->GetNom()<< " raté..."<<endl;
}else{
cout<<cible->GetNom()<< " je n'ai plus de balle... "<<endl;
}
}
