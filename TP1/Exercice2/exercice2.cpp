#include <iostream>
using namespace std;

struct essai {
    int n;
    float x;
};

void raz(essai *);
void raz2(essai&);

int main(){
    essai e1 = {5,7};
    cout << "e1 avant raz(&e1) = " << e1.n << ", " << e1.x << endl;
    raz(&e1);
    cout << "e1 apres raz(&e1) = " << e1.n << ", " << e1.x << endl;
    e1 = {6,9};
    cout << "e1 avant raz2(e1) = " << e1.n << ", " << e1.x << endl;
    raz2(e1);
    cout << "e1 apres raz2(e1) = " << e1.n << ", " << e1.x << endl;

}

void raz(essai * e){
    e->n = 0;
    e->x = 0;
}

void raz2(essai& e){
    e.n = 0;
    e.x = 0;
}
