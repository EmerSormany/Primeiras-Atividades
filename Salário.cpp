#include <iostream>
#include <locale.h> // setlocale
using namespace std;
int main()
{
	setlocale(LC_ALL,"ptb");
	float salario, seusalario;
	cout << "Digite o valor do seu sal�rio: ";
	cin >> seusalario;
	cout << "Digite quanto est� o sal�rio m�nimo atual: ";
	cin >> salario;
	if (seusalario>salario) 
	{
		cout << "Voc� recebe acima do sal�rio de um sal�rio m�nimo atual!";
	}
	else
	{
		cout << "Voc� recebe um sal�rio m�nimo ou menos";
	}
}
