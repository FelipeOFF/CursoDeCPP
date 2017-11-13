// Static methods and variables

#include "iostream"
#include "user.cpp"

using namespace std;

int main(){

    User a;
    User b;

    cout << a.getId() << endl;
    cout << b.getId() << endl;

    cout << endl << endl;

    cout << User::getCounter() << endl;

    return 0;
}