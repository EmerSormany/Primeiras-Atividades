#include<iostream>
#include<locale.h>
//jogo que primeiro jogador ditia 10 n�mero inteiros e o segundo tenta adivinhar.
using namespace std;
int main()
{
	setlocale(LC_ALL,"ptb");
	int vetor[10], contador, contador1, tentativa;
	for (contador=0;contador<=9;contador++)
	{
		cout<<"digite o "<<contador+1<<"a n�mero: ";
		cin >>vetor[contador];
	}
	for (contador1=1;contador1<=3;contador1++)
	{
		cout<<"Digite a "<<contador1<<" tentativa: ";
		cin >> tentativa;
		if (vetor[0]==tentativa)
		{
			cout<<"Parab�ns! Este n�mero est� na posi��o 01 do vetor! Voc� usou "<<contador1<<" tentativas... ";
		}
		else if (vetor[1]==tentativa)
		{
			cout<<"Parab�ns! Este n�mero est� na posi��o 02 do vetor! Voc� usou "<<contador1<<" tentativas... ";
		}
		else if (vetor[2]==tentativa)
		{
			cout<<"Parab�ns! Este n�mero est� na posi��o 03 do vetor! Voc� usou "<<contador1<<" tentativas... ";
		}
		else if (vetor[3]==tentativa)
		{
			cout<<"Parab�ns! Este n�mero est� na posi��o 04 do vetor! Voc� usou "<<contador1<<" tentativas... ";
		}
		else if (vetor[4]==tentativa)
		{
			cout<<"Parab�ns! Este n�mero est� na posi��o 05 do vetor! Voc� usou "<<contador1<<" tentativas... ";
		}
		else if (vetor[5]==tentativa)
		{
			cout<<"Parab�ns! Este n�mero est� na posi��o 06 do vetor! Voc� usou "<<contador1<<" tentativas... ";
		}
		else if (vetor[6]==tentativa)
		{
			cout<<"Parab�ns! Este n�mero est� na posi��o 07 do vetor! Voc� usou "<<contador1<<" tentativas... ";
		}
		else if (vetor[7]==tentativa)
		{
			cout<<"Parab�ns! Este n�mero est� na posi��o 08 do vetor! Voc� usou "<<contador1<<" tentativas... ";
		}
		else if (vetor[8]==tentativa)
		{
			cout<<"Parab�ns! Este n�mero est� na posi��o 09 do vetor! Voc� usou "<<contador1<<" tentativas... ";
		}
		else if (vetor[9]==tentativa)
		{
			cout<<"Parab�ns! Este n�mero est� na posi��o 10 do vetor! Voc� usou "<<contador1<<" tentativas... ";
		}
		else
		{
			cout<<"Que pena! Voc� n�o acertou... \n";
		}
	}
}
