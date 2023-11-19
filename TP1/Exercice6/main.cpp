#include <iostream>
#define factoriel(n) for(int i=n-1; i>0; i--) n = n *i

using namespace std;

inline int facto(int n){
    for(int i=n-1; i>0; i--)
        n = n *i;
    return n;
}

int main()
{
    int n = 6;
    int a = factoriel(n);

//    cout << for(int i=n-1; i>0; i--) n = n *i << endl;
}
