#include<iostream>
#include<locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL,"ptb");
	int idade;
	cout << "Informe a sua idade: ";
	cin >> idade;
	do
	{
	if (idade>=7&&idade<=12)
	{
		cout << "Sua categoria � infantil! \n";
	}
	else if (idade>=13&&idade<=17)
	{
		cout << "Sua categoria � juvenil! \n";
	}
	else if (idade>=18&&idade<=49)
	{
		cout << "Sua categoria � adulto! \n";
	}
	else if (idade>=50)
	{
		cout << "Sua categoria � s�nior! \n";
	}
	else
	{
		cout << "Idade abaixo da faixa et�ria para particicpar do campeonato! \n";
	}
	cout << "informe a sua idade: ";
	cin >> idade;
	} while (idade!=-1);
}
