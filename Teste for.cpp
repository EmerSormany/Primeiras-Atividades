#include<iostream>
#include<locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL,"ptb");
	int num, contador, multiplo=0;
	for(contador=1;contador<=10;contador++)
	{
		cout<<"Digite um n�mero inteiro: ";
		cin >> num;
		if(num%3==0)
		{
			multiplo++;
		}
	}
	cout<<"Voc� digitou "<<multiplo<<" n�meros multiplos de 3!";
}
