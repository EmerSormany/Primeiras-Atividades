#include<iostream>
#include<locale.h>
// sortear 20 vezes um dado e ver quantos pares e impares deu
using namespace std;
int main()
{
	setlocale(LC_ALL,"ptb");
	int vetor[20], lance, par=0, impar=0;
	for(lance=0;lance<=19;lance++)
	{
		cout<<"Digite o n�mero que deu no "<<lance+1<<"a lan�amento: ";
		cin >>vetor[lance];
	}
	for(lance=0;lance<=19;lance++)
	{
		if (vetor[lance]%2==0)
		{
			par++;
		}
		else
		{
			impar++;
		}
	}
	cout<<"Foram sorteados "<<par<<" n�mero pares e "<<impar<<" n�mero impares!";
}
