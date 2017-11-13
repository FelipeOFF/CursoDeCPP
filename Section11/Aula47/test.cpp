#include "test.h"

Test::Test(int x, int y, int value){
    this->x = x;
    this->y = y;
    this->p = new int(value);
}

Test::~Test(){
    delete this->p;
}