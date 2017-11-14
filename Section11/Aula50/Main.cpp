// Polymorphism, virtual functions, abstract classes

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

#include "iostream"
#include "farm.h"

using namespace std;

void showVoiceOfAnimal(Animal *);

int main(){
    
    Animal animal;
    Dog dog;
    Cat cat;
    Cow cow;

    /* 
        cout << animal.getVoice() << endl;
        cout << dog.getVoice() << endl;
        cout << cat.getVoice() << endl;
        cout << cow.getVoice() << endl;
     */

    /*
        Agora vamos ver o polimorfismo em ação,
        já que todas as classes herdão, de animal,
        fica facil.
    */

    // Pode ser com ponteiro ou sem ponteiro 
    showVoiceOfAnimal(&dog);
    showVoiceOfAnimal(&cat);
    showVoiceOfAnimal(&cow);

    return 0;
}

void showVoiceOfAnimal(Animal * p){
    cout << p->getVoice() << endl;
}