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
		cout << "Sua categoria é infantil! \n";
	}
	else if (idade>=13&&idade<=17)
	{
		cout << "Sua categoria é juvenil! \n";
	}
	else if (idade>=18&&idade<=49)
	{
		cout << "Sua categoria é adulto! \n";
	}
	else if (idade>=50)
	{
		cout << "Sua categoria é sênior! \n";
	}
	else
	{
		cout << "Idade abaixo da faixa etária para particicpar do campeonato! \n";
	}
	cout << "informe a sua idade: ";
	cin >> idade;
	} while (idade!=-1);
}
