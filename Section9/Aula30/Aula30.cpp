// Ponteiros

/*
	Ponteiros servem para armazenar endereços de memória.
	Onde podem ser chamado os valores desses mesmo endereço posteriormente.

	Isso não parece grande coisa, mais se for pensado em grande escala, você vai
	perceber que pode ser adicionado um array na memória e ao invez de transportar toda
	a informação contida no array, basta transportar o endereço do mesmo. Simples e rasteiro.
*/

#include "stdafx.h"
#include "iostream"

using namespace std;

int main() {

	int var = 5;

	cout << &var << endl;

	// Caso você queira mostrar o valor do que esta contido no endereço de memória, basta digitar *

	cout << *&var << endl; // Isso ira mostrar o valor dentro do endereço de memória

	int *p; // Criando um ponteiro

	p = &var; // Armazenando o endereço da variavel "var" dentro de "p"

	cout << *p << endl; // Imprimindo o valor de var através de p

	/*
		Asteriscos (*) são usados para retornar o valor contido no ponteiro
	*/

	// Agora se desejamos alterar o valor:

	*p = 29; // Isso ira alterar o valor da variavel var

	cout << "var: " << var << endl;
	cout << "*p: " << *p << endl;

	/*
		o ponteiro pode ser alterado para qualquer variavel,
		quando você quiser. Se ele não for um constante.
	*/

	int a = 20;

	p = &a;

	cout << "*p: " << *p << endl;
	cout << "a: " << a << endl;

	int * const p_constant = &a; // Neste caso você esta determindando que a constante é o ponteiro
	const int * p_constant2 = &a; // Neste caso a constante é o inteiro
	const int * const p_constant3 = &a; // Agora nada pode ser alterado, nem o ponteiro e nem a variavel

	// p_constant = &var; // Isso vai gerar um erro.
	// *p_constant2 = 20; // Isso vai gerar um erro porque a constante é o inteiro
	// p_constant3 = &var; // Isso dara um erro
	// *p_constant3 = 20; // Isso dara um erro

	/*
		Agora vamos deixar isso mais confuso.
		Ponteiros além de serem endereços de memória, eles também
		são uma espécie de variavel, isso significa que eles também
		tem seu endereço de memória, e é possivel criar um ponteiro
		deste endereço.
	*/

	cout << endl << endl << endl << endl;

	int ordinary_var = 10;

	int *ordinary_p = &ordinary_var;

	cout << "ordinary_var: " << ordinary_var << endl; // Valor do inteiro
	cout << "&ordinary_var: " << &ordinary_var << endl; // Endereço da ordinary_var
	cout << "ordinary_p: " << ordinary_p << endl; // endereço da variavel ordinary_var
	cout << "*ordinary_p: " << *ordinary_p << endl;// valor da variavel ordinary_var
	cout << "&ordinary_p: " << &ordinary_p << endl; // valor do endereço do ponteiro ordinary_p

	// Para criar um ponteiro de outro ponteiro deve ser dois asteriscos

	int ** p_ponteiro_para_endereco_do_ponteiro = &ordinary_p;

	cout << "p_ponteiro_para_endereco_do_ponteiro: " << p_ponteiro_para_endereco_do_ponteiro << endl;
	cout << "*p_ponteiro_para_endereco_do_ponteiro: " << *p_ponteiro_para_endereco_do_ponteiro << endl;
	cout << "**p_ponteiro_para_endereco_do_ponteiro: " << **p_ponteiro_para_endereco_do_ponteiro << endl;
	cout << "&p_ponteiro_para_endereco_do_ponteiro: " << &p_ponteiro_para_endereco_do_ponteiro << endl;
 
	cin.get();

    return 0;
}

