#include <iostream>

using namespace std;

class Personnel{
private:
    int sonAge;
    int sonAnciennete;
    int sonSalaire;
public:
    Personnel( int sonAge, int sonAnciennete, int sonSalaire):
        sonAge(sonAge), sonAnciennete(sonAnciennete), sonSalaire(sonSalaire){}
    int getAge(){
        return sonAge;
    }
    int getAnciennete(){
        return sonAnciennete;
    }
    int getSalaire(){
        return sonSalaire;
    }
    void setAge(int sonSalaire){
        this->sonAge = sonAge;
    }
    void setAnciennete(int sonAnciennete){
        this->sonAnciennete = sonAnciennete;
    }
    void setSalaire(int sonSalaire){
        this->sonSalaire = sonSalaire;
    }

    double arrondi(){
        int partieEntiere = sonSalaire - ( sonSalaire % 100 );
        if( sonSalaire - partieEntiere < 50 ){
            return partieEntiere;
        }
        else{
            return partieEntiere + 100;
        }
    }

    void afficheInfo(){
        cout << "age=" << sonAge << " anciennete=" << sonAnciennete << " salaire=" << sonSalaire << endl;
    }
};

int main()
{
    cout << "Hello world!" << endl;
    Personnel p1(30,5,3650);
    Personnel p2(40,8,7520);

    cout << "p1 : ";
    p1.afficheInfo();
    cout << "p2 : ";
    p2.afficheInfo();

    cout << "salaire arrondi de p1 = " << p1.arrondi() << endl;
    cout << "salaire arrondi de p2 = " << p2.arrondi() << endl;


    return 0;
}
