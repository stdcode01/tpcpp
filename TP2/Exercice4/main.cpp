#include <iostream>

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

    string getNoom(){
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
    int nbrPersonnes;
    string nom, prenom;
    int age;
    Personne* tabPersonnes;

    cout << "SVP entrez le nombre de personnes que vous vouler encoder :";
    cin >> nbrPersonnes;

    tabPersonnes = new Personne[nbrPersonnes];

    for(int i=0; i<nbrPersonnes; i++){
        cout << "\nEntrer les infos de la Personne numero  " << i+1 << " :\n"
        << "\tNom : ";
        cin >> nom;
        cout << "\tPrenom : ";
        cin >> prenom;
        cout << "\tAge : ";
        cin >> age;

        tabPersonnes[i].setNom(nom);
        tabPersonnes[i].setPrenom(prenom);
        tabPersonnes[i].setAge(age);
    }

    int i,j;
    for(i=nbrPersonnes-1; i>0; i--){
        j = i;
        for(j=0; j<i; j++){
            if(!(tabPersonnes[j] < tabPersonnes[j+1])){
                Personne temp = tabPersonnes[j];
                tabPersonnes[j] = tabPersonnes[j+1];
                tabPersonnes[j+1] = temp;
            }
        }
    }

    cout << "=============================\n" << endl;

    for(int i=0; i<nbrPersonnes; i++){
        cout << "Personne " << i+1 << " : ";
        tabPersonnes[i].sePresenter();
    }

    cin.get();
    return 0;
}
