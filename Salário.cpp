#include <iostream>
#include <locale.h> // setlocale
using namespace std;
int main()
{
	setlocale(LC_ALL,"ptb");
	float salario, seusalario;
	cout << "Digite o valor do seu salário: ";
	cin >> seusalario;
	cout << "Digite quanto está o salário mínimo atual: ";
	cin >> salario;
	if (seusalario>salario) 
	{
		cout << "Você recebe acima do salário de um salário mínimo atual!";
	}
	else
	{
		cout << "Você recebe um salário mínimo ou menos";
	}
}
