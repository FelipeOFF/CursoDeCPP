// Ponteiros e arrays

#include "stdafx.h"
#include "iostream"

using namespace std;

int main() {

	/*
		O array por padrão já é o ponteiro dele mesmo.
		Ou seja você não pode fazer isso:
	*/

	int a[3];
	a[0] = 10;
	a[1] = 20;
	a[2] = 30;
	int substituto = 20;

	int * const p = &a[0]; // O primeiro elemento de um array é o ponteiro dele mesmo

	// a = substituto; // Isso vai gerar um erro

	/*
		Pelo que eu entendi sobre isso,
		temos o poder de deixar o ponteiro (endereço da memória) como constante
		mesmo depois de declarar a variavel. Além de não poder confiar no endereço
		do primeiro elemento de um array
	*/

	cout << a << endl; // O endereço do array
	cout << p << endl; // O ponteiro do mesmo

	cout << endl << endl << endl;

	cout << &a[0] << endl; // O endereço do array com base no primeiro elemento
	cout << &a[1] << endl; // Movendo em 4 bytes
	cout << &a[2] << endl; // Movendo em 4 bytes

	cout << endl << endl << endl;

	/*
		É possivel pegar os endereços do array de interos
		porquer o int precisa de 4 bytes
		oque significa que você pode simplesmente pular os
		bytes e pegar o valor do endereço da memória onte tem o byte
	*/

	// Os mesmos endereços de cima

	cout << a << endl; 
	cout << a + 1 << endl;
	cout << a + 2 << endl;

	cout << endl << endl << endl;

	// Pegando o valor deles

	cout << *a << endl;
	cout << *(a + 1) << endl;
	cout << *(a + 2) << endl;

	cout << endl << endl << endl;

	// Isso acima é a mesma coisa disso

	cout << a[0] << endl;
	cout << a[1] << endl;
	cout << a[2] << endl;

	cout << endl << endl << endl;

	/*
		Nós não podemos alterar diretamente o endereço
		do array. Mais podemos fazer isso para o ponteiro
	*/

	int * p2 = &a[0];

	cout << *p2 << endl; // O valor que esta dentro do endereço do ponteiro (0) será mostrado
	cout << ++*p2 << endl; // O valor do item da posição 0 do array será aumentado mais 1 (1)
	cout << *++p2 << endl; // O ponteiro será aumentado para mais 1, ou seja o segundo item do array (20)
	cout << *p2++ << endl; // O ponteiro sera pós encrementado, ele ira passar para a posição do array 3 (20) = pós encremento
	cout << *p2 << endl; // (30)

	/*
		Tome muito cuidado com isso.
		Se você pode alterar a alocação de memória, então você pode simplesmente,
		acabar pegando o registro de outro programa. kkkk.
		Em outras palavras, você pode acabar saindo da "alocação" da memória do seu programa
		para outros programas.
	*/

	cin.get();

    return 0;
}

