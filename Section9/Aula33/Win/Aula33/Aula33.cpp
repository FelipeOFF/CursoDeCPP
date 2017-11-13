// Ponteiros, strings e chars

#include "stdafx.h"
#include "iostream"
#include "string"

using namespace std;

int main() {

	/*
		Strings são um tipo de array de caracteres (char).
		Vejamos isso na pratica:
	*/

	string caracteres_str = "Isso é uma string";
	char caracteres_chars[] = "Isso é um array de caracteres";

	cout << caracteres_str << endl;
	cout << caracteres_chars << endl;

	cout << endl << endl << endl;

	/*
		Agora para nós podermos converter uma string 
		para um array de caracteres, precisamos criar um ponteiro:
	*/

	string text = "Isso é uma string";

	// O c_str pega o endereço do primeiro item da string na forma de uma constante
	const char * text2 = text.c_str();

	cout << text2 << endl;

	// Agora para converter char para string

	char array[] = "isso é um texto";

	string test = array;

	cout << test << endl;


	cout << endl << endl << endl;

	/*
		Até onde entendi os caracteres reservam diferentes, lugares na memória
	*/


	string textB = "Isso é um texto";
	/*
		Isso é a mesma coisa que string
		porem não pode ser alterado
	*/
	const char * textP = "Isso também é um texto";

	// textP[0] = 'A' // Isso vai dar um erro

	cout << textP[0] << endl;

	/*
		Porem isso pode ser alterado
	*/
	char b[] = "isso é um texto diferente 1231242343";
	b[0] = 'A';

	cout << b << endl;


	cout << endl << endl << endl;

	// Porem isso pode ser feito
	char * dynamic_array = new char[50];
	dynamic_array[0] = 'A'; // isso pode ser feito
	// dynamic_array[1] = '\0';
	dynamic_array = "texto alterado";// Isso pode ser feito
	//dynamic_array[0] = 'B'; // Isso não pode ser feito
	// O primeiro item de uma string dinamica não pode ser alterado.

	cout << dynamic_array << endl;

	delete []dynamic_array;

	system("pause");
    return 0;
}

