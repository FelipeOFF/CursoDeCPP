// Constants with class

#include "iostream"
#include "Position.cpp"

using namespace std;

int main(){

    Position dog(10, 20);

    dog.getPosition();
    dog.setPosition(20, 10);
    dog.getPosition();

    // Dogs podem se mover mais e as casas?

    const Position house(30, 230);

    dog.getPosition();
    // dog.setPosition(200, 203); // Isso não é possivel porque a casa é uma constante
    // dog.getPosition();

    return 0;
}