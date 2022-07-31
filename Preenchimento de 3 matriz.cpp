#include<iostream>
#include<locale.h>
//preenchimento de 2 matrizes e terceira matriz com produto dos elementos das matrizes anteriores.
using namespace std;
int main()
{
	setlocale(LC_ALL,"ptb");
	float matriz1 [2][4], matriz2 [2][4], matriz3 [2][4];
	int lin, col, elemento=1;
	for (lin=0;lin<=1;lin++)
	{
		for (col=0;col<=3;col++)
		{
			cout<<"Informe o "<<elemento<<"a elemento da primeira matriz elemento: ";
			cin >>matriz1[lin][col];
			elemento++;
		}
	}
	elemento=1;
	for (lin=0;lin<=1;lin++)
	{
		for (col=0;col<=3;col++)
		{
			cout<<"Informe o "<<elemento<<"a elemento da segunda matriz elemento: ";
			cin >>matriz2[lin][col];
			elemento++;
		}
	}
	for (lin=0;lin<=1;lin++)
	{
		for (col=0;col<=3;col++)
		{
			matriz3[lin][col]=matriz1[lin][col]*matriz2[lin][col];
		}
	}
	lin=0; col=0; elemento=1;
	while(lin<=1)
	{
		while(col<=3)
		{
			cout<<"O "<<elemento<<"a elemento da terceira matriz é:"<<matriz3[lin][col]<<"! \n";
			elemento++; col++;
		}
		col=0; lin++;
	}
}
