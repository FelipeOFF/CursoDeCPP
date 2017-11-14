// Exception


#include "iostream"

using namespace std;

class DivisionByZeroException{

    public:
        void getErrorMessage(){cout << "Error: do not divide by zero" << endl;}
};

// Mesma coisa que o java
double division(double v1, double v2) throw(DivisionByZeroException)
{
    if(v2 == 0)
        throw DivisionByZeroException();
    
    return v1 / v2;
}

int main(){

    double a = 5;

    try{
        a *= 10;
        division(a, 0);
        if(a == 50)
            throw a;
    }catch(int a){
        cout << "A cannot be equal to " << a << endl;
    }catch(double a){
        cout << "A cannot be equal to " << a << endl;
    }catch (DivisionByZeroException e){
        e.getErrorMessage();
    }catch(...){
        cout << "Error default " << endl;
    }

    return 0;
}