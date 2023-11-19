#include <iostream>
#include <cmath>

using namespace std;

float puissance(float x,int=4);

int main()
{
    cout << puissance(2,8) << endl;

}

float puissance(float x,int n){
    return pow(x,n);
}
