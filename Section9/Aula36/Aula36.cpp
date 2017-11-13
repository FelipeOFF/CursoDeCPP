// Type casting

#include "iostream"

using namespace std;

int main(){

    /*
        Você sabe oque é Cast, mais vou esplicar mesmo assim
        basicamente, é converter um tipo de valor por outro.
    */

    double var = 5.5;

    cout << var << endl;

    /*
        Para fazer um type cast, basta usar o parentes.
        Como acontece em outras limguagens imperiais.
    */

    cout << "var in format int: " << (int)var << endl;

    /*
        Não se esqueça que toda converção de valores tem sua perda,
        a não ser se for para tipos que contenham mais bytes.
    */

    int a = 5;
    int b = 7;

    cout << "Uma divisão com perdas: " << a / b << endl;
    cout << "Uma divisão sem perdas: " << (double)a / b << endl;

    
    int x = 110020310; // Isso tem perdas
    short y = x; // é um cast implicito.

    cout << "Isso é uma converção com perdas: " << y << endl;

    // Existe casts de diferentes tipos
    cout << int(var) << endl; // Isso é um cast em C
    cout << static_cast<int>(var) << endl; // Isso é um cast em C++

    // Para saber qual o numero decimal do caracter:

    char ch = 'k';
    cout << "Digite um caracter" << endl;
    cin >> ch;

    cout << "O numero decimal do caracter: " << ch << " = " << (int)ch << endl;

    /*
        Só tome cuidado com isso, nem todos os caraters estão na tabela ascii
    */

    return 0;
}