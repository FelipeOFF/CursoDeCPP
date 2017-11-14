#include "farm.h"

Animal::Animal(){
    voice = "default value";
}

Animal::~Animal(){
    cout << "Im from the base class " << endl;
}

Dog::Dog()
{
    location = "Dog";
    voice = "Au Au!";
}

Dog::~Dog()
{
    cout << "Im from the sub-class " << endl;
}

Cat::Cat()
{
    location = "Cat";
    voice = "Miau, Miau!";
}

Cat::~Cat()
{
    cout << "Im from the sub-class " << endl;
}

Cow::Cow()
{
    location = "Cow";
    voice = "mooooo!";
}

Cow::~Cow()
{
    cout << "Im from the sub-class " << endl;
}