#include <iostream>

using namespace std;

void affiche(float x, int n = 0);
void affiche(int n, float x=0);

int main()
{
    affiche(3.f, 3);
    affiche(3.f);
    affiche(0.f);
    affiche(0.f,1);
    cout << endl;

    affiche(3, 3.f);
    affiche(3);
    affiche(0);
    affiche(0,1.f);


    return 0;
}

void affiche(float x, int n){
    float result = 1;
    for (int i=0; i<n; i++){
        result*=x;
    }
    cout << "x^n = " << result << endl;
}

void affiche(int n, float x){
    float result = x==0? 0:1;
    for (int i=0; i<n; i++){
        result*=x;
    }
    cout << "x^n = " << result << endl;
}
