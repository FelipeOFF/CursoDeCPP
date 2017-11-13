#include "user.h"

int User::counter = 0;

User::User(){
    counter++;
    ID = counter;
}

User::~User(){

}

int User::getId(){
    return this->ID;
}