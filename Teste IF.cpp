#include <iostream>
#include <locale.h> // setlocale
using namespace std;
int main()
{
	int resto, numero;
	setlocale(LC_ALL,"ptb");
	cout <<"Digite um n�mero qualquer: ";
	cin >> numero;
	resto = numero%2;
	if(resto==0)
	{
		cout <<"Este n�mero � multiplo de 2!";
	}
	else
	{
		cout <<"Este n�mero n�o � multiplo de 2!";
	}
}
