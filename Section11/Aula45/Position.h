#ifndef POSITION_H_INCLUDED
#define POSITION_H_INCLUDED

class Position{
    int x, y;

    public:
        Position(int, int);
        Position();
        ~Position();

        void getPosition();
        void setPosition(int, int);
};

#endif