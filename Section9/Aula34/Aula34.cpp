// Funções e ponteiros

#include "iostream"

using namespace std;

// FUNCTIONS
void multiplyBy(int &, int);
void multiplyByPointer(int *, int);
void multiplyArrayByPointer(int *, int, int);

int main() {

	/*
		Vamos iniciar com um exemplo simples.
		Multiplicação por referencia
	*/

	int a = 10;

	multiplyBy(a, 10);

	/*
		Tudo funciona perfeitamente, mais e se alteramos,
		de referencia para ponteiro
	*/

	cout << a << endl;

	a = 10;

	multiplyByPointer(&a, 20);

	cout << a << endl;

	cout << endl << endl << endl;

	/*
		O mesmo pode funcionar para um simples array
	*/

	int array[20];

	for (int i = 0; i < (sizeof(array) / sizeof(array[0])); i++) {
		array[i] = i;
	}

	multiplyArrayByPointer(&array[0], 5, (sizeof(array) / sizeof(array[0]))); // &array[0] == array

	for (int i = 0; i < (sizeof(array) / sizeof(array[0])); i++) {
		cout << "array[" << i << "] = " << array[i] << endl;
	}

	/*
		Evidente que isso tem um problema, se eu alterar o tamanho do array
		o resultado não ira alterar para as outras posições.
		Existe uma função global chamada "sizeof", mais ou menos.
		Ele retorna a quantidade de bytes que o array tem.
		Para retornar o tamanho devemos dividir o tamanho do array,
		pelo tamanho do primeiro elemento do array.
		Já que o tipo pode ser alterado também, não é bom confiarmos no
		inteiro e fazer uma divisão de 4. 
	*/

	// cout << sizeof(array)/sizeof(array[0]) << endl;

	system("pause");
    return 0;
}

void multiplyBy(int & var, int amount) {
	/*
		Já que var já é uma referencia da variavel,
		ou seja o endereço da variavel, podemos simplesmente
		alteralo por aqui mesmo.

		Isso é uma multiplicação simples, o sinal embaixo,
		é o operador de multiplicação, e não tem nada a ver,
		com pegar o valor do ponteiro.
	*/

	var *= amount;
}

void multiplyByPointer(int * var, int amount) {
	/*
		Não se esqueça que ponteiros são o local onde,
		guardamos nossas variaveis.
	*/
	*var *= amount;
}

void multiplyArrayByPointer(int * a, int amount, int sizeOfArray) {
	/*for (int i = 0; i < sizeOfArray; i++)
		a[i] *= amount;*/

	// Isso acima é a mesma coisa que isso:
	
	while(sizeOfArray--)
		a[sizeOfArray] *= amount;

	// A diferença é que isso esta sendo feito de tras para frente.
}