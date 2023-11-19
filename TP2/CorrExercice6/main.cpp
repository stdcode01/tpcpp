//main.cpp
#include <iostream>
#include<string>
#include "Personnage.h"
#include "Snipper.h"
#include "Magicien.h"
#include "Barbare.h"
Personnage *ajout_joueur();
void action_joueur(Personnage *joueur,Personnage *cible);
void statut_joueur(Personnage *joueur);
void qui_est_vainquer(Personnage *joueur1,Personnage *joueur2);
int main(){
Personnage *joueur1,*joueur2;
cout<< "Joueur 1 : "<<endl;
joueur1 = ajout_joueur();
cout<< "Joueur 2 : "<<endl;joueur2 = ajout_joueur();
int rounds = 0;
do{
rounds++;
cout<<"##############Round" <<rounds<<"###########"<<endl;
action_joueur(joueur1,joueur2);
action_joueur(joueur2,joueur1);
statut_joueur(joueur1);
statut_joueur(joueur2);
}while(!joueur1->tu_es_mort() && !joueur2->tu_es_mort() );
qui_est_vainquer(joueur1,joueur2);
delete joueur1;
delete joueur2;
return 0;
}
void qui_est_vainquer(Personnage *joueur1,Personnage *joueur2){
if(joueur1->tu_es_mort()&&joueur2->tu_es_mort()){
cout<<"vous etes tous mort..."<<endl;
}else if (joueur1->tu_es_mort()){
cout<<"le combattant "<<joueur2->GetNom()<<" est le grand vainqeur"<<endl;
}else {
cout<<"le combattant "<<joueur1->GetNom()<<" est le grand vainqeur"<<endl;
}
}
void statut_joueur(Personnage *joueur){
if(joueur->tu_es_mort()){
cout<<" le combattant "<<joueur->GetNom()<< " est mort "<<endl;
}
else cout<<" il reste "<<joueur->GetVie()<< " au combattant "<<joueur->GetNom()<<endl;
}
Personnage *ajout_joueur(){
Personnage *j;
string nom;
cout<< "Quel est ton nom ? "<<endl;
cin>>nom;
char c;
cout<< "Quelle classe de personnage veux-tu ? Barabre(b), Magicien(m) ou Snipper(s)"<<endl;
cin>>c;
switch(c){
case 'b':
j = new barbare(nom);
break;
case 'm':
j = new magicien(nom);break;
case 's':
default:
j = new snipper(nom);
}
return j;
}
void action_joueur(Personnage *joueur,Personnage *cible){
char c;
cout<<joueur->GetNom()<<" Que veux tu faire ? frapper(f), bouclier(b) ou attaque speciale(a)"<<endl;
cin>>c;
switch(c){
case 'f':
joueur->frapper(cible);
break;
case 'a':
joueur->attaque_speciale(cible);
break;
case 'b':
default:
joueur->bouclier();
} }
