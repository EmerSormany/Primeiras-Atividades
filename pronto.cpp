#include <iostream>
#include <locale.h> // setlocale
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL,"ptb");
	int numero, quadrado, resto;
	cout <<"Digite um n�mero qualquer: ";
	cin >> numero;
	quadrado = pow(numero,2);
	if (quadrado>25);
	{
		cout <<"O quadrado desse n�mero � "<< quadrado<<" e � maior que 25!";
	}
}
