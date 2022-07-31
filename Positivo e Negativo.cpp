#include <iostream>
#include <locale.h> // setlocale
using namespace std;
int main()
{
	setlocale(LC_ALL,"ptb");
	int numero;
	cout << "Digite um número qualquer: ";
	cin >> numero;
	if (numero>0)
	{
		cout << "O número é postivo!";
	}
	else if (numero<0)
	{
		cout << "O número é negativo!";
	}
	else
	{
		cout << "O número é nulo!";
	}
}
