#include<iostream>
#include<locale.h>
using namespace std;
//Exerc�cio de fatorial.
int main()
{
	setlocale(LC_ALL,"ptb");
	int num, x, fatorial, y;
	cout<<"Qual n�mero voc� deseja saber o fatorial? ";
	cin >> num;
	y=num;
	fatorial=1;
	for (x=1;num>=x;num--)
	{
		fatorial = fatorial * num;
	}
	cout<<"O fatorial de "<<y<<" � "<<fatorial<<"!";
}
