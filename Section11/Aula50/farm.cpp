#include "farm.h"

Animal::Animal(){
    voice = "default value";
}

Animal::~Animal(){

}

Dog::Dog()
{
    location = "Dog";
    voice = "Au Au!";
}

Dog::~Dog()
{
}

Cat::Cat()
{
    location = "Cat";
    voice = "Miau, Miau!";
}

Cat::~Cat()
{
}

Cow::Cow()
{
    location = "Cow";
    voice = "mooooo!";
}

Cow::~Cow()
{
}