#ifndef INTEGER_H_INCLUDED
#define INTEGER_H_INCLUDED

class Integer {

        int nr;
    public:
        Integer(){};
        Integer(int);
        operator int();
        int operator+=(Integer);
        int getNumber(){return nr;}

};

#endif