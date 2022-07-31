#include<iostream>
#include<locale.h> // setlocale
using namespace std;
int main()
{
	setlocale(LC_ALL,"ptb");
	float lado1, lado2, lado3;
	cout << "Informe os três lados de um triângulo: \n";
	cin >> lado1;
	cin >> lado2;
	cin >> lado3;
	if (lado1==0||lado2==0||lado3==0)
	{
		cout << "Isto corresponde a uma reta e não a um triângulo";
	}
	else if (lado1==lado2&&lado2==lado3)
	{
		cout << "O triângulo é equilátero!";
	}
	else if (lado1==lado2||lado2==lado3||lado3==lado1)
	{
		cout << "O triângulo é escaleno!";
	}
	else if (lado1!=lado2||lado2!=lado3)
	{
		cout << "O triângulo é isósceles!";
	}
}
