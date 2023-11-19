#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Personne{
private:
    string nom;
    string prenom;
    int age;

public:
    Personne(){}

    Personne(string nom, string prenom, int age): nom(nom), prenom(prenom), age(age) {}

    void sePresenter(){
        cout << "Je m'appele " << nom
        << " " << prenom
        << " et je suis " << age
        << " ans" <<endl;
    }

    string getNom(){
        return nom;
    }
    string getPrenom(){
        return prenom;
    }
    int getAge(){
        return age;
    }

    void setNom(const string& nom){
        this->nom = nom;
    }
    void setPrenom(const string& prenom){
        this->prenom = prenom;
    }
    void setAge(const int& age){
        this->age = age;
    }

    bool operator<(Personne autre){
        return age < autre.age;
    }
};

int main()
{
    Personne p1("Mohammad","Elfilali",20);
    Personne p2("Khalid","Bougri",21);
    Personne p3("Layla","Benmoussa",19);

    //creation et  ajout des elements au vecteur
    vector<Personne> v;
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);

    //meme chose pour une liste
    list<Personne> l;
    l.push_back(p1);
    l.push_back(p2);
    l.push_back(p3);


    //affichage des elements du  vecteur
    cout << "Boucler sur le vecteur : \n";
    for(size_t i=0; i< v.size(); i++){
        cout << v[i].getNom() << " : " << v[i].getAge() << endl;
    }

    //methode d'iterateur
    cout << "\nEn utilisant un iterateur sur le vetceur : \n";
    for(auto it = v.begin(); it != v.end(); it++){
        cout << it->getNom() << " : " << it->getAge() << endl;
    }

    //affichage des elements du liste
    cout << "\nBoucler sur la liste : \n";
    for(Personne& p : l ){
        cout << p.getNom() << " : " << p.getAge() << endl;
    }

    //methode d'iterateur sur la liste
    cout << "\nEn utilisant un iterateur sur le vetceur : \n";
    for(auto it = v.begin(); it != v.end(); it++){
        cout << it->getNom() << " : " << it->getAge() << endl;
    }


    //Une map associe une cle a une valeur ( un 'string' a une 'Personne' dans ce cas)
    map<string, Personne> m = {
        {"mohammade",p1},
        {"mustapha",p2},
        {"layla",p3},
    };

    //premiere methode : boucler sur une map
    cout << "\nBoucler sur la map : \n";
    for(auto keyValue: m){
        string key = keyValue.first;    //la cle
        Personne p  = keyValue.second;  //la valeur

        cout << key << " : " << p.getAge() << endl;
    }

    // deuxieme methode : l'iterateur
    cout << "\nEn utilisant un iterateur sur la map : \n";
    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " : " << it->second.getAge() << endl;
    }
//

    cout << "\n================= for_each ==================\n";

    // for_each sur un vecteur
    cout << "\nEn utilisant for_each sur le vecteur : \n";
    for_each(v.begin(),v.end(),[](Personne& p){cout << p.getNom() << " :" << p.getAge() << endl;});

    // for_each sur une liste
    cout << "\nEn utilisant for_each sur la liste : \n";
    for_each(l.begin(),l.end(),[](Personne& p){cout << p.getNom() << " :" << p.getAge() << endl;});

    // for_each sur une map
    cout << "\nEn utilisant for_each sur la map : \n";
    for_each(m.begin(),m.end(),[](pair<string,Personne> key_value){
             cout << key_value.first <<" : " << key_value.second.getAge() << endl;
             });


    cout << "================= sort ==================\n";

    cout << "\nAvant sort : " << endl;
    for_each(v.begin(),v.end(),[](Personne& p){cout << p.getAge() << endl;});


    cout << "\nOrdonner les elements du vecteur avec sort..." << endl;
    sort(v.begin(), v.end(), [](Personne p1, Personne p2)->bool{
                return p1.getAge()<p2.getAge()? true:false;
           });

    cout << "\nApres sort : " << endl;
    for_each(v.begin(),v.end(),[](Personne& p){cout << p.getAge() << endl;});
}

