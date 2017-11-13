// Data structures

#include "iostream"

/*
    Data structures são equivalentes a classes. Mais estão 
    mais relacionados a armazenamento de valores.
*/

using namespace std;

struct PersonalData {
    string name;
    string surname;
    string telephoneNumber;
    short age;
}a, b; // Pode ser criado as variaveis aqui mesmo

// FUNCTIONS

void printName(PersonalData*);

int main() {

    //Para usar a classe basta criar uma variavel

    a.age = 20;
    b.age = 30;

    PersonalData personalData;

    personalData.name = "Felipe";
    personalData.surname = "Oliveira";
    personalData.telephoneNumber = "1198329543";
    personalData.age = 24;

    cout << personalData.name << endl;
    cout << personalData.surname << endl;
    cout << personalData.telephoneNumber << endl;
    cout << personalData.age << endl;

    // Funciona perfeitamente como um valor normal
    // Então pode ser criado um array com ele.

    PersonalData pd[5];

    pd[0].name = "Felipe";
    pd[1].name = "Larisa";
    pd[0].surname = "Oliveira";
    pd[0].telephoneNumber = "1198329543";
    pd[0].age = 24;

    // Funciona perfeitamente com ponteiros
    cout << (*pd).name << endl;
    cout << (*(pd + 1)).name << endl;
    cout << pd[0].surname << endl;
    cout << pd[0].telephoneNumber << endl;
    cout << pd[0].age << endl;

    /*
        Uma forma mais agil de retornar um valor de um ponteiro
        é usar a seta (->), isso ira me trazer o valor imediatamente
    */

    cout << pd->name << endl;// Isso é equivalente ao de cima
    cout << (pd + 1)->name << endl;

    cout << endl << endl << endl;

    // Pronto
    // Pode ser criado um ponteiro
    PersonalData * p = pd;

    cout << p->name << endl;

    // Evidente que isso pode ser passado para outras funções

    printName(pd);

    cout << pd->name << endl;

    return 0;
}

void printName(PersonalData * pd) {
    pd->name = "Angela";
}