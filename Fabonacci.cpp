#include<iostream>
#include<locale.h>
using namespace std;
// teste de sequ�ncia de Fibonacci.
int main()
{
	setlocale(LC_ALL,"ptb");
	int a=0,b=1, c, digitos, z;
	cout<<"Diga quantos d�gitos voc� quer ver na s�rie de Fabonacci? ";
	cin >> digitos;
	cout<<a<<", ";
	cout<<b<<", ";
	for (z=0;z<digitos;z++)
	{
		c = a + b;
		a = b;
		b = c;
		cout<<c<<", ";
	}
}
