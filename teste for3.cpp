#include<iostream>
#include<locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL,"ptb");
	int num, qtd, par=0, impar, avaliado;
	cout<<"Digite at� quanto voc� quer contar para saber quantos pares e �mpares tem na sequ�ncia: ";
	cin >> qtd;
	for (num=1;num<=qtd;num++)
	{
		cout<<"Informe o "<<num<<"a n�mero: ";
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
	cout<<"Voc� avaliou "<<qtd<<" n�meros e obteve "<<par<<" pares e "<<impar<<" �mpares!";
}
