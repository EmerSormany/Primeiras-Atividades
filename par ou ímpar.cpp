#include <iostream>
#include <locale.h> // setlocale
using namespace std;
int main()
{
	setlocale (LC_ALL,"ptb");
	int numero;
	cout << "Digite um n�mero qualquer: ";
	cin >> numero;
	if ((numero%2)==0)
	{
		cout << "O n�mero � par!";
	}
	else
	{
		cout << "O n�mero � �mpar";
	}
}
