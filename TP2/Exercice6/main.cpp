#include <iostream>

using namespace std;

class Personnage{
protected:
    bool bouclier_active = false;
    int hp;
    double puissance;
    double puissance_speciale;
public:
    virtual void recevoir_degats(int degat) =0;
    virtual void frapper(Personnage * cible) =0;
    virtual void bouclier() = 0;
    virtual void attaque_speciale(Personnage * cible)=0;
};


class Magicien : public Personnage {

public:
    Magicien(){
        Personnage::hp=90;
        Personnage::puissance =1.5;
        Personnage::puissance_speciale=1.9;
        }

    void recevoir_degats(int degat){
        if(bouclier_active) degat*= 0.3;
        hp-= degat;
        cout << "\nhp de Magicien : " << hp;
        if(hp<=0){
            cout << "\n (Magicien est mort)" << endl;
        }
    }

    void  frapper(Personnage * cible){
        cible->recevoir_degats(20*puissance);
    }

    void bouclier(){
        bouclier_active = true;
    }

    void attaque_speciale(Personnage * cible){
        cible->recevoir_degats((int) 20*puissance_speciale);
    }
};


class Snipper : public Personnage {
public:
    Snipper() {
        Personnage::hp=75;
        Personnage::puissance =1.9;
        Personnage::puissance_speciale=2.4;
    }

    void recevoir_degats(int degat){
        if(bouclier_active) degat*= 0.6;
        hp-= degat;
        cout << "\nhp de Snipper : " << hp;
        if(hp<=0){
            cout << "\n (Snipper est mort)" << endl;
        }
    }

    void  frapper(Personnage * cible){
        cible->recevoir_degats(20*puissance);
    }

    void bouclier(){
        bouclier_active = true;
    }

    void attaque_speciale(Personnage * cible){
        cible->recevoir_degats(20*puissance_speciale);
    }
};


class Barbare : public Personnage {
public:
    Barbare()
    {
        Personnage::hp=150;
        Personnage::puissance =0.9;
        Personnage::puissance_speciale=1.6;
    }

    void recevoir_degats(int degat){
        if(bouclier_active) degat*= 0.85;
        hp-= degat;
        cout << "\nhp de Barbare : " << hp;
        if(hp<=0){
            cout << "\n (Barbare est mort)" << endl;
        }

    }

    void  frapper(Personnage * cible){
        cible->recevoir_degats(20*puissance);
    }

    void bouclier(){
        bouclier_active = true;
    }

    void attaque_speciale(Personnage * cible){
        cible->recevoir_degats(20*puissance_speciale);
    }
};

int main()
{
    Magicien m;
    Snipper s;
    Barbare b;

    m.attaque_speciale(&b);
    m.attaque_speciale(&b);
    m.attaque_speciale(&b);
    m.attaque_speciale(&b);
    m.attaque_speciale(&b);
    m.attaque_speciale(&b);
    m.attaque_speciale(&b);


    return 0;
}
