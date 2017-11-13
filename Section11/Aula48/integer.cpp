#include "integer.h"

Integer::Integer(int nr) {
    this->nr = nr;
}

Integer::operator int(){
    return this->nr;
}

int Integer::operator+=(Integer in){
    return this->nr += in.getNumber();
}