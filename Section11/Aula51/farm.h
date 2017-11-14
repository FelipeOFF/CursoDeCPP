#ifndef FARM_H_INCLUDED
#define FARM_H_INCLUDED

#include <iostream>

using namespace std;

/*
    Repare que quando for chamado, as funções, como,
    ele esta fazendo um (casthing), ele vai pegar
    a função da classe principal.

    Porem se quisermos pegar as funções da classe,
    que estamos chamando, devemos usar o virtual.

    O (virtual) irá buscar na memória, se existe um método
    parecido com o que foi chamado na classe principal.
    Se existir, ele vai chamar ele mesmo. Se não ele vai
    chamar o da classe principal.

    Incrivel que isso não funcionaria se o objeto de cada
    animal não estivesse sendo armazenado na memória como
    um ponteiro. Só funciona com ponteiro.

    simples e rasteiro
*/

class Animal{
    protected:
        string voice;
    public:
        Animal();
        // Desta forma, quando esta classe for deletada da memória, as demais também serão limpas.
        virtual ~Animal();
        // Só funciona como ponteiro
        virtual string getVoice(){return voice;}
};

class Dog : public Animal {
    string location;
    public:
        Dog();
        ~Dog();
        string getVoice() { return "Esta vindo do " + location + " " + voice; }
};

class Cat : public Animal {
    string location;

  public:
    Cat();
    ~Cat();
    string getVoice() { return "Esta vindo do " + location + " " + voice; }
};

class Cow : public Animal {
    string location;

  public:
    Cow();
    ~Cow();
    string getVoice() { return "Esta vindo do " + location + " " + voice; }
};

#endif