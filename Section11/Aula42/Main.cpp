// Classes

#include "iostream"
#include "people.cpp"

using namespace std;

/*
    Classes são criadas desta maneira:
*/

// Functions
void test();

int main(){

    PersonalData personal;
    PersonalData personal2;

    PersonalData personal3 = PersonalData(20, "Felipe");// Pode ser feito desta forma ou de outra forma
    PersonalData personal4(20, "Felipe");

    // personal.setAge(20);
    // personal2.setAge(50);

    cout << personal.getAge() << endl;
    cout << personal2.getAge() << endl;

    cout << personal3.getName() << endl;
    cout << personal3.getAge() << endl;

    // test();

    return 0;
}

void test(){

    /*
        Repare que a classe pode esta sendo chamada,
        porem o seu desconstrutor não,
        isso porque ele permanece na memória do ponteiro
        que criamos.
    */

    PersonalData * pointers = new PersonalData[5];

    // Sempre deve destruir os seus ponteiros

    delete []pointers;

}