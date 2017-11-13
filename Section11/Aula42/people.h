#ifndef PEOPLE_H_INCLUSED
#define PEOPLE_H_INCLUSED

#include "iostream"

using namespace std;

class PersonalData
{
    /*
        Por default PersonalData
        tem seus atributos como private
    */

  private:
    short age;
    string name;
    int *p;

  public:
    //Construtores são usados da seguinte maneira
    PersonalData();
    // Construtores também podem ter overload
    PersonalData(short, string);
    /*
        Da mesma maneira que você criou, você
        deve destruir.
        destructors tem o sinal de (~) na frente
    */
    ~PersonalData();
    /*
        O certo não é declarar funções aqui
        e sim deixar seus prototypes aqui,
        e declaralos em um arquico cpp.
    */
    void setAge(short);
    int getAge();

    void setName(string);
    string getName();
};

#endif