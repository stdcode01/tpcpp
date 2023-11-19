#include <iostream>

using namespace std;

int main()
{
    int* tab = new int[5];
    for(int i=0; i<5; i++){
        tab[i] = i;
    }
    int moy=0;
    for(int i = 0; i<5; i++){
        moy+=tab[i];
    }
    moy/= 5;

    cout << moy << endl;

}
