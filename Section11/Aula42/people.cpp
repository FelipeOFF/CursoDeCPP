#include "people.h"

PersonalData::PersonalData(){
    // Variaveis statics pertencem a classe e não ao objeto.
    static int t = 0;
    cout << "this constructor has bean just invoke: " << ++t << endl;
    this->age = 0;

    this->p = new int[5];
}

PersonalData::PersonalData(short age, string name)
{
    // Variaveis statics pertencem a classe e não ao objeto.
    static int t = 0;
    cout << "this constructor has bean just invoke: " << ++t << endl;
    this->age = age;
    this->name = name;

    this->p = new int[5];
}

PersonalData::~PersonalData(){
    static int j = 0;
    cout << "this destructor has bean just invoke: " << ++j << endl;
    /*
        Você sempre tem que 
        ficar preocupado com o consumo de sua memória,
        repare que o ponteiro (p) deve ser limpo assim que esta classe
        for destruida.
    */

    delete [] p;
}

void PersonalData::setAge(short age){
    // O this aqui vem na forma de ponteiro
    if (age < 0)
        this->age = 0;
    else
        this->age = age;
}

int PersonalData::getAge(){
    return age;
}

void PersonalData::setName(string value){
    name = value;
}

string PersonalData::getName(){
    return name;
}