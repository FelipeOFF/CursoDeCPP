// Class templates


#include "iostream"
#include "Point.h"

typedef Point<int> PointInt;
using namespace std;

int main(){

    // Caso você queira simplificar isso tem como adicionar um pre-processor
    // PointInt p(89);
    // Point<double> b(89.21);

    // cout << p.getX() << endl;
    // cout << b.getX() << endl;

    // cout << endl << endl << endl;

    // Point2D<double> p2(20.3, 30.2);

    // cout << p2.getX() << endl;
    // cout << p2.getY() << endl;

    // cout << endl << endl << endl;

    Point<int*> p(20);

    return 0;
}