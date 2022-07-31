#include<iostream>
#include<iostream>
using namespace std;
// prograam para exibir o maior número recebido numa sequência de 15 números.
int main()
{
	setlocale(LC_ALL,"ptb");
	float num1, num2=0;
	int contador;
	cout<<"Digite um número Real: ";
	cin >> num1;
	cout<<"Digite um número Real: ";
	cin >>num2;
	for (contador=1;contador<=13;contador++)
	{
		if (num1>num2)
		{
			num2=num1;
		}
		cout<<"Digite um número Real: ";
		cin >> num1;
	}
	if (num1>num2)
	{
		cout<<"O maior número da sua sequência é "<<num1<<"!";
	}
	else
	{
		cout<<"O maior número da sua sequência é "<<num2<<"!";
	}
}
