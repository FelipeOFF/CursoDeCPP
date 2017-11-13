/*
    Criando um projeto em C++
*/

#include "iostream"

using namespace std;

/*
    Para receber instruções da execução do programa.
    parametros de execução.
    Você recebe como prarametro no main um inteiro
    que representa a quantidade de paramentros,
    digitados na execução do programa.
    E também um array de caracteres na forma de ponteiro, dos paramentros
*/

// FUNCTIONS

void showHelp();

int main(int args, char * argv[]){

    /* for(int i = 0; i < args; i++){
        cout << argv[i] << endl;
    } */

    /*
        Vamos fazer um programa que tenha 
        seus devidos argumentos
    */

    // char a[] = {'a', 'b', 'c', 'd', '\0'}; // Não se esqueça que o ultimo caracter de uma string é 0

    // cout << a << endl;

    /*
        Para podemos trabalhar direito com as strings,
        precisamos antes verificar se o conteudo contido 
        dentro do argv, contem algum item de a

        Temos uma função chamada strcmp, ela verifica se em 
        algum lugar do array existe o mesmo caracter,
        Ele retorna a posição do array onde tem isso.
    */

    for (int i = 0; i < args; i++){
        // cout << argv[i] << endl;
        // cout << strcmp(argv[i], "-h") << endl;
        if (!strcmp(argv[i], "-h"))
            showHelp();
    }

    return 0;
}

void showHelp(){
    cout << "Isso é um helpfull para que você entenda oque este programa faz" << endl;
}