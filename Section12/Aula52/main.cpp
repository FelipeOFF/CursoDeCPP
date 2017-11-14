// Function templates


#include "iostream"
#include "Point.h"

using namespace std;

/*
    Basicamente é brincar de genérics.

    Imagine que você precise fazer uma 
    função que pegue dois valores, e 
    some eles. Porem, você não sabe,
    qual vai ser os tipos, apenas sabe
    que seram numeros.
    
    Ah algo no C++ chamado template.
    Ele cria um tipo genérico.
*/
// No lugar do T poderia ser qualquer coisa.
template <typename T, typename T2>
T add(T val1, T2 val2)
{
    return val1 + val2;
}


// Ou faz assim, ou cria um operador
// template <>
// Point2D add(Point2D val1, Point2D val2){
//     Point2D tmp;
//     tmp.setXY((val1.getX() + val2.getX()), (val1.getY() + val2.getY()));
//     return tmp;
// }

    void operationsOnPointer();

int main(){

    operationsOnPointer();
    
    // cout << add(7.2, 8) << endl;

    // cout << add<double, double>(2.3, 23) << endl;

    return 0;
}

void operationsOnPointer(){
    Point2D p2(10, 67);
    Point2D p1(12, 32);

    Point2D p3 = add(p1, p2);

    cout << p3.getX() << endl;
    cout << p3.getY() << endl;
}