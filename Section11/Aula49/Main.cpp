//Inheritance between classes

#include "iostream"
#include "Point.h"

using namespace std;

// FUNCTIONS

void operatorsOnPoints();

int main(){

    operatorsOnPoints();

    return 0;
}

void operatorsOnPoints(){

    Point p1(30);

    cout << "P1 Get X: " << p1.getX() << endl;

    cout << endl << endl << endl;

    Point2D p2(10, -20);

    cout << "P2 Get X: " << p2.getX() << endl;
    cout << "P2 Get Y: " << p2.getY() << endl;

    p2.setXY(20, 3123);

    cout << "P2 Get X: " << p2.getX() << endl;
    cout << "P2 Get Y: " << p2.getY() << endl;

    cout << endl << endl << endl;

    Point3D p3(20, 30, 40);

    cout << "P3 Get X: " << p3.getX() << endl;
    cout << "P3 Get Y: " << p3.getY() << endl;
    cout << "P3 Get Z: " << p3.getZ() << endl;
}