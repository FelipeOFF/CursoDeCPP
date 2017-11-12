//Ponteiros - dinamyc alocation memory

#include "stdafx.h"
#include "iostream"

using namespace std;

int main(){

	/*
		Basicamente se trata da quantidade de alocação da sua aplicação
	*/

	/*int amount;

	cout << "Quantos numeros você quer guardar no array?" << endl;
	cin >> amount;*/

	/*
		Desta forma criamos uma alocação dinamica na memória.
			int *p = new int[amount];
		Desta forma acima é capaz de dar memory leek
		Então foi adicionado o nothrow que retorna NULL,
		caso seja muita memória alocada.
		Abaixo pode ser reparado que a alocação de memória
		sempre vai ser diferente. Com endereços diferentes.
	*/
	/*int *p = new (nothrow) int[amount];

	if (p != NULL) {
		for (int i = 0; i < amount; i++) {
			cout << "Digite o " << (i + 1) << " number: " << endl;
			cin >> p[i];
		}

		for (int i = 0; i < amount; i++) {
			cout << "p[" << i << "] = " << p[i] << endl;
		}
	} else {
		cout << "Sem memória suficiente" << endl;
	}

	delete []p;*/

	/*
		Você deve sempre limpar a memória, depois de usala
	*/

	{
		int *p = new int;
		
		cout << p << endl;

		delete p;

		p = new int;

		cout << p << endl;

		delete p;
	}

	system("pause");
    return 0;
}

