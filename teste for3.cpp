#include<iostream>
#include<locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL,"ptb");
	int num, qtd, par=0, impar, avaliado;
	cout<<"Digite até quanto você quer contar para saber quantos pares e ímpares tem na sequência: ";
	cin >> qtd;
	for (num=1;num<=qtd;num++)
	{
		cout<<"Informe o "<<num<<"a número: ";
		cin >> avaliado;
		if (avaliado%2==0)
		{
			par++;
		}
		else
		{
			impar++;
		}
	}
	cout<<"Você avaliou "<<qtd<<" números e obteve "<<par<<" pares e "<<impar<<" ímpares!";
}
