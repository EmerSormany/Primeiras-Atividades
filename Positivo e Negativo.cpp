#include <iostream>
#include <locale.h> // setlocale
using namespace std;
int main()
{
	setlocale(LC_ALL,"ptb");
	int numero;
	cout << "Digite um n�mero qualquer: ";
	cin >> numero;
	if (numero>0)
	{
		cout << "O n�mero � postivo!";
	}
	else if (numero<0)
	{
		cout << "O n�mero � negativo!";
	}
	else
	{
		cout << "O n�mero � nulo!";
	}
}
