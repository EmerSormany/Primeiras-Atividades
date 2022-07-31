#include <iostream>
#include <locale.h> // setlocale
using namespace std;
int main()
{
	setlocale (LC_ALL,"ptb");
	int numero;
	cout << "Digite um número qualquer: ";
	cin >> numero;
	if ((numero%2)==0)
	{
		cout << "O número é par!";
	}
	else
	{
		cout << "O número é ímpar";
	}
}
