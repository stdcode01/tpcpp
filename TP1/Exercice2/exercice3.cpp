#include <iostream>
using namespace std;


//Ecrire une fonction qui prend en arguments deux chaines de caractères s1 et s2 et
//renvoie 1 si la taille de s1<s2, 0 sinon.

int comparer(const string& ch1, const string& ch2){
    return ch1.length() < ch2.length() ? 1 : 0;
}

int main(){
    int i = comparer("Bonjour" , "Tout le monde");
    int j = comparer("Bonjour" , "ali");
    cout << "comparer(\"Bonjour\" , \"Tout le monde\") -> " i << endl;
    cout << "comparer(\"Bonjour\" , \"ali\") -> " j << endl;
}
