#include<iostream>
#include<locale.h>
using namespace std;
int main()
//Escrever metade de um triângulo.
{
	setlocale(LC_ALL,"ptb");
	int x, qtdlinhas, j;
	cout<<"digite quantas linhas o triângulo terá: ";
	cin >> qtdlinhas;
	for (x=1;x<=qtdlinhas;x++)
	{
		for (j=1;j<=x;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
}
