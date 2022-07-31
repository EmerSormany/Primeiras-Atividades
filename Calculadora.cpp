#include <iostream>
#include <locale.h> // setlocale
using namespace std;
int main()
{
	setlocale(LC_ALL,"ptb");
	float num1, num2, resultado;
	int op;
	cout << "Digite o primeiro número: ";
	cin >> num1;
	cout << "Digite o segundo número: ";
	cin >> num2;
	cout << "-------------------------- \n";
	cout << "1 - Adição\n";
	cout << "2 - subtração\n";
	cout << "3 - multiplicação\n";
	cout << "4 - divisão\n";
	cin >> op;
	if (op==1)
	{
		resultado = num1 + num2;
		cout << "A soma entre "<<num1<<" e "<<num2<<" é "<<resultado<<"!!";
	}
	else if (op==2)
	{
		resultado = num1 - num2;
		cout << "A subtração entre "<<num1<<" e "<<num2<<" é "<<resultado<<"!!";
	}
	else if (op==3)
	{
		resultado = num1 * num2;
		cout << "A multiplicação entre "<<num1<<" e "<<num2<<" é "<<resultado<<"!!";
	}
	else if (op==4)
	{
		resultado = num1 / num2;
		cout << "A divisão de "<<num1<<" por "<<num2<<" é "<<resultado<<"!!";
	}
	else
	{
		cout << "Opção inválida!";
	}
	}
