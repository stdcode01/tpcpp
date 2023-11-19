#include <iostream>
#include <new>

using namespace std;

void insuffisant(){
    cout << "Memoire insuffisante !" << endl;
    exit(-1);
}

int main()
{
    long long n, somme = 0;
    char * tab;
    int i = 0;
    cout << "Entrer le nombre de cases memoires a allouer : ";
    cin >> n;
    set_new_handler(insuffisant);

    while(true){
        tab = new char[n];
        cout << "Allocation de bloc Numero : " << i++ << endl;
    }
}
