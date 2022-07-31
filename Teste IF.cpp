#include <iostream>
#include <locale.h> // setlocale
using namespace std;
int main()
{
	int resto, numero;
	setlocale(LC_ALL,"ptb");
	cout <<"Digite um número qualquer: ";
	cin >> numero;
	resto = numero%2;
	if(resto==0)
	{
		cout <<"Este número é multiplo de 2!";
	}
	else
	{
		cout <<"Este número não é multiplo de 2!";
	}
}
