#include <iostream>

using namespace std;

class point{
private:
    static int nbrPoints;
    int numeroPoint;
public:

    point(){
        numeroPoint = ++nbrPoints;
        cout << "Point numero : " << numeroPoint << " cree" << endl;
    }

    ~point(){
        cout << "Point numero : " << numeroPoint << " detruit" << endl;
    }
};

int point::nbrPoints = 0;

int main()
{
    cout << "creation de tableau de 4 points" << endl;
    point tabPoints[4] = new point[4];
    cout << "destruction de tableau de 4 points" << endl;
    delete[] tabPoints;

    return 0;
}
