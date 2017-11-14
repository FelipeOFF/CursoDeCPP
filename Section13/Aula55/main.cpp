// Namespaces


#include "iostream"

using namespace std;

int a = 20;

namespace A{
    int a = 40;
}

namespace B{
    int a = 60;
}

int main(){

    /*
        Para saber de qual escopo estamos falando,
        precisamos do namespace
    */

    int a = 50;

    cout << a << endl; // os :: retorna globalmente.
    cout << ::a << endl; // os :: retorna globalmente.
    cout << A::a << endl; // os :: retorna globalmente.
    cout << B::a << endl; // os :: retorna globalmente.

    return 0;
}