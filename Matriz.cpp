#include<iostream>
#include<locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL,"ptb");
	int matriz[3][4], lin, col, contador=1;
	cout<<"***Preencha a matriz com n�meros inteiros e saiba quais s�o os m�ltiplos de 5!*** \n";
	for (lin=0;lin<=2;lin++)
	{
		for (col=0;col<=3;col++)
		{
			cout<<"Informe o "<<contador<<"a n�mero:";
			cin >>matriz[lin][col];
			contador++;
		}
	}
	for (lin=0;lin<=2;lin++)
	{
		for (col=0;col<=3;col++)
		{
			if(matriz[lin][col]%5==0)
			{
				cout<<matriz[lin][col]<<" � m�ltiplo de 5! \n";
			}
		}
	}
}

