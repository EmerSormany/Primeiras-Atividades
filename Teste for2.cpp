#include<iostream>
#include<iostream>
using namespace std;
// prograam para exibir o maior n�mero recebido numa sequ�ncia de 15 n�meros.
int main()
{
	setlocale(LC_ALL,"ptb");
	float num1, num2=0;
	int contador;
	cout<<"Digite um n�mero Real: ";
	cin >> num1;
	cout<<"Digite um n�mero Real: ";
	cin >>num2;
	for (contador=1;contador<=13;contador++)
	{
		if (num1>num2)
		{
			num2=num1;
		}
		cout<<"Digite um n�mero Real: ";
		cin >> num1;
	}
	if (num1>num2)
	{
		cout<<"O maior n�mero da sua sequ�ncia � "<<num1<<"!";
	}
	else
	{
		cout<<"O maior n�mero da sua sequ�ncia � "<<num2<<"!";
	}
}
