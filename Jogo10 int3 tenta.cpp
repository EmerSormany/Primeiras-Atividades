#include<iostream>
#include<locale.h>
//jogo que primeiro jogador ditia 10 número inteiros e o segundo tenta adivinhar.
using namespace std;
int main()
{
	setlocale(LC_ALL,"ptb");
	int vetor[10], contador, contador1, tentativa;
	for (contador=0;contador<=9;contador++)
	{
		cout<<"digite o "<<contador+1<<"a número: ";
		cin >>vetor[contador];
	}
	for (contador1=1;contador1<=3;contador1++)
	{
		cout<<"Digite a "<<contador1<<" tentativa: ";
		cin >> tentativa;
		if (vetor[0]==tentativa)
		{
			cout<<"Parabéns! Este número está na posição 01 do vetor! Você usou "<<contador1<<" tentativas... ";
		}
		else if (vetor[1]==tentativa)
		{
			cout<<"Parabéns! Este número está na posição 02 do vetor! Você usou "<<contador1<<" tentativas... ";
		}
		else if (vetor[2]==tentativa)
		{
			cout<<"Parabéns! Este número está na posição 03 do vetor! Você usou "<<contador1<<" tentativas... ";
		}
		else if (vetor[3]==tentativa)
		{
			cout<<"Parabéns! Este número está na posição 04 do vetor! Você usou "<<contador1<<" tentativas... ";
		}
		else if (vetor[4]==tentativa)
		{
			cout<<"Parabéns! Este número está na posição 05 do vetor! Você usou "<<contador1<<" tentativas... ";
		}
		else if (vetor[5]==tentativa)
		{
			cout<<"Parabéns! Este número está na posição 06 do vetor! Você usou "<<contador1<<" tentativas... ";
		}
		else if (vetor[6]==tentativa)
		{
			cout<<"Parabéns! Este número está na posição 07 do vetor! Você usou "<<contador1<<" tentativas... ";
		}
		else if (vetor[7]==tentativa)
		{
			cout<<"Parabéns! Este número está na posição 08 do vetor! Você usou "<<contador1<<" tentativas... ";
		}
		else if (vetor[8]==tentativa)
		{
			cout<<"Parabéns! Este número está na posição 09 do vetor! Você usou "<<contador1<<" tentativas... ";
		}
		else if (vetor[9]==tentativa)
		{
			cout<<"Parabéns! Este número está na posição 10 do vetor! Você usou "<<contador1<<" tentativas... ";
		}
		else
		{
			cout<<"Que pena! Você não acertou... \n";
		}
	}
}
