#include<iostream>
#include<locale.h> // setlocale
using namespace std;
int main()
{
	setlocale(LC_ALL,"ptb");
	int idade;
	cout << "Digite a sua idade: ";
	cin >> idade;
	if (idade>=7&&idade<=12)
	{
		cout << "Sua categoria � infantil!";
	}
	else if (idade>=13&&idade<=17)
	{
		cout << "Sua categoria � juvenil!";
	}
	else if (idade>=18&&idade<=49)
	{
		cout << "Sua categoria � adulto!";
	}
	else if (idade>=50)
	{
		cout << "Sua categoria � senior!";
	}
	else
	{
		cout << "Participante n�o permitido!";
	}
}
