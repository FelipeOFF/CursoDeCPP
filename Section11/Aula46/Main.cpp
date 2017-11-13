// Friend Classes

#include "iostream"
#include "Test.cpp"

using namespace std;

int main(){

    B objB;
    A objA;


    objA.setSecretValue(objB, 20);
    cout << objB.getSecretValue() << endl;

    return 0;
}