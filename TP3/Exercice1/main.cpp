#include <iostream>
#include "Banque.h"
using namespace std;

class Banque1 : public Banque_Strategie{

public:
    Banque1() = default;

    void action_effectuer(){
        std::cout << "strategie de la banque 1" << std::endl;

    }
};

class Banque2 : public Banque_Strategie{

public:
    Banque2() = default;

    void action_effectuer(){
        std::cout << "strategie de la banque 2" << std::endl;

    }
};

class Guichet{
private:
    Banque_Strategie * BS;

public:
    Guichet(){
        BS = nullptr;
    }

    void setStrategie(Banque_Strategie * c){
        this->BS =c;
    }

    void calcule(){
        BS->action_effectuer();
    }

};

int main()
{
    Banque1 B1;
    Banque2 B2;
    Guichet G;
    G.setStrategie(&B1);
    G.calcule();

    return 0;
}
