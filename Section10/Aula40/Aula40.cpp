// Pre-processors directiceis

#include "iostream"
#include "ourfirstLibrary.h"

/*
    Pré-processors são executados antes da compilação do programa,
    são semelhantes ao C, aliais são do C.

    #include - importa outros modulos para seu programa
    #define é uma espécie de substituto, ele ira substituir
    todos os caracteres de sua criação pelo valor posterior dele
*/

#define PI 3.14

using namespace std;

int main(){

    cout << "No momento da compilação, foi trocado os caracteres PI por 3.14: " << PI << endl;

    cout << "O valor da blibioteca agora é acessivel por aqui: " << a << endl;

    return 0;
}