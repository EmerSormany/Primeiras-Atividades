#include <iostream>
#include <locale.h> // setlocale
using namespace std;
int main()
{
	setlocale(LC_ALL,"ptb");
	float num1, num2, resultado;
	int op;
	cout << "Digite o primeiro n�mero: ";
	cin >> num1;
	cout << "Digite o segundo n�mero: ";
	cin >> num2;
	cout << "-------------------------- \n";
	cout << "1 - Adi��o\n";
	cout << "2 - subtra��o\n";
	cout << "3 - multiplica��o\n";
	cout << "4 - divis�o\n";
	cin >> op;
	if (op==1)
	{
		resultado = num1 + num2;
		cout << "A soma entre "<<num1<<" e "<<num2<<" � "<<resultado<<"!!";
	}
	else if (op==2)
	{
		resultado = num1 - num2;
		cout << "A subtra��o entre "<<num1<<" e "<<num2<<" � "<<resultado<<"!!";
	}
	else if (op==3)
	{
		resultado = num1 * num2;
		cout << "A multiplica��o entre "<<num1<<" e "<<num2<<" � "<<resultado<<"!!";
	}
	else if (op==4)
	{
		resultado = num1 / num2;
		cout << "A divis�o de "<<num1<<" por "<<num2<<" � "<<resultado<<"!!";
	}
	else
	{
		cout << "Op��o inv�lida!";
	}
	}
