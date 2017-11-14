// Virtual destructor

#include "iostream"
#include "farm.h"

using namespace std;

void showVoiceOfAnimal(Animal *);

int main(){
    
    /* Animal animal;
    Dog dog;
    Cat cat;
    Cow cow;

    // Pode ser com ponteiro ou sem ponteiro 
    showVoiceOfAnimal(&dog);
    showVoiceOfAnimal(&cat);
    showVoiceOfAnimal(&cow); */

    // Lembrese de sempre deletar se for criado com new
    Dog * dog = new Dog;

    delete dog;

    /*
        Repare que o problema aqui começa quando temos 
        que destruir uma classe que foi "polimorficada".
    */

    Animal * animal = new Dog;

    /*
        Animal sera deletado sem problemas nenhum.
        Porem o objeto Dog, continuara na memória.

        A solução para isso é simples, vamos deixar
        o desconstrutor virtualizado.
    */

    delete animal;

    return 0;
}

void showVoiceOfAnimal(Animal * p){
    cout << p->getVoice() << endl;
}