#include <iostream>
#include <locale.h> // setlocale
using namespace std;
int main()
{
	setlocale(LC_ALL,"ptb");
	int hora;
	cout << "Digite que horas são de 1 a 24h: ";
	cin >> hora;
	if (hora>=6&&hora<=18)
	{
		cout << "É dia!";
	}
	else
	{
		cout << "É noite!";
	}
}
