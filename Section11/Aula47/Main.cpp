// Copy Constructor

#include "iostream"
#include "test.cpp"

using namespace std;

int main(){

    Test obj1(20, 302, 60);
    Test obj2 = obj1;

    cout << "obj1.x " << obj1.x << endl;
    cout << "(*obj1.p) " << (*obj1.p) << endl;
    cout << "obj1.y " << obj1.y << endl;

    cout << "obj2.x " << obj2.x << endl;
    cout << "(*obj2.p) " << (*obj2.p) << endl;
    cout << "obj2.y " << obj2.y << endl;

    /*
        Não importa quantos Test sejam criados. O address,
        de (p) sempre vai ser o mesmo. Isso na pratica significa
        que ele vai sempre respeitar 1 endereço de memória.
    */

    return 0;
}