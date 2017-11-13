// Friends methods

#include "iostream"
#include "Position.cpp"

using namespace std;

void setX(Position &, int);

int main(){

    Position dog(20, 32);

    /*
        Imagine que pretendemos alterar apenas um valor
        presente na nossa classe, porem precisamos alterar,
        ainda neste arquivo e não dentro da classe.

        Como proceder, sabendo que o Position tem seu x e y privados?
        Simples vamos usar as friend
    */

    dog.getPosition();

    setX(dog, 30);
    
    dog.getPosition();

    return 0;
}

void setX(Position & obj, int value){
    obj.x = value;
}