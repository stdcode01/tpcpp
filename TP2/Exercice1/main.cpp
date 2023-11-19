#include <iostream>

using namespace std;  /// solution 1

namespace MesElements{
    class MaClass{
    public:
        static void printHello(){
            cout << "Hello from MaClass\n";
        }
    };
};

int main()
{
    std::cout << "Bonjour !" << std::endl; ///solution 2 : std::
    ///printf("Bonjour !\n"); /// solution 3

    MesElements::MaClass::printHello();

    return 0;
}
