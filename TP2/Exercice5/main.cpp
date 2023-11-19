#include <iostream>

using namespace std;

template<typename U, typename V>
class pointcol{
private:
    U x,y;
    V couleur;
public:
    pointcol(U x, U y, V couleur){
        this->x = x;
        this->y = y;
        this->couleur = couleur;
    }
    void afficher(){
        cout << "coordonnees : (" << x << "," << y << ")\n";
        cout << "couleur : " << couleur;
    }
};

template<typename U> U calcSomme(U* tab, int nbrElements){
    U somme = 0;
    for(int i=0; i<nbrElements; i++ ){
        somme += tab[i];
    }
    return somme;
}

int main()
{
//    int tabInt[] = {1,2,3,4,5};
//    float tabFloat[] = {1.f,2.f,3.f,4.f,5.f};
//    double tabDouble[] = {1.,2.,3.,4.,5.};
//
//    int sommeInt = calcSomme(tabInt,5);
//    float sommeFloat  = calcSomme(tabFloat,5);
//    double sommeDouble = calcSomme(tabDouble,5);
//
//    cout << "sommeInt  = " << sommeInt << "\n";
//    cout << " et sommeFloat  = " << sommeFloat << "\n";
//    cout << " et sommeDouble = " << sommeDouble << "\n";

      pointcol<int,char*> pCol(5,6,"white\n");
      pCol.afficher();

    cin.get();

    return 0;
}
