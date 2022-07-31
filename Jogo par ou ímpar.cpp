#include<iostream>
#include<locale.h>
#include<string.h>
// Par ou Ímpar.
using namespace std;
int main(void)
{
	setlocale(LC_ALL,"ptb");
	int vetorA[5], vetorB[5], jogada, venceA=0, venceB=0; 
	char* log="c";
	for(jogada=0;jogada<=9;jogada++)
	{
		cout<<jogada+1<<"a jogada. Qual venceu? Digite A para par ou B para ímpar: ";
		cin >> log;
		if (log=="A")
		{
			cout<<"Qual número ele escolheu? ";
			cin >>vetorA[venceA];
			venceA++;
		}
		else if (log=="B")
		{
			cout<<"Qual o número ele escolheu? ";
			cin >>vetorB[venceB];
			venceB++;
		}
		else
		{
			cout<<"Você digitou uma letra errada. O jogo será reinicado!";
			jogada==9;
		}
	}
	cout<<"The End";
}
