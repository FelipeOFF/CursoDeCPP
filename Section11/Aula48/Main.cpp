// Convert constructor overloading operators

#include "iostream"
#include "integer.cpp"

using namespace std;

int main(){

    Integer a(20);

    a = 200; // Isso é um convert constructor.
    /*
        Como só tem um parametro, e como é o mesmo tipo.
    */

    cout << a.getNumber() << endl;

    /*
        Agora se quisermos fazer um cast,
        o buraco é mais embaixo.
        Devemos criar um operador
    */

    int b = 300;

    b = (int) a;
    b = a; // Ou sem cast. É o mesmo tipo

    cout << b << endl;

    a += b;

    cout << "A soma entre a + b: " << a.getNumber() << endl;

    return 0;
}