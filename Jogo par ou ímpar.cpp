#include<iostream>
#include<locale.h>
#include<string.h>
// Par ou �mpar.
using namespace std;
int main(void)
{
	setlocale(LC_ALL,"ptb");
	int vetorA[5], vetorB[5], jogada, venceA=0, venceB=0; 
	char* log="c";
	for(jogada=0;jogada<=9;jogada++)
	{
		cout<<jogada+1<<"a jogada. Qual venceu? Digite A para par ou B para �mpar: ";
		cin >> log;
		if (log=="A")
		{
			cout<<"Qual n�mero ele escolheu? ";
			cin >>vetorA[venceA];
			venceA++;
		}
		else if (log=="B")
		{
			cout<<"Qual o n�mero ele escolheu? ";
			cin >>vetorB[venceB];
			venceB++;
		}
		else
		{
			cout<<"Voc� digitou uma letra errada. O jogo ser� reinicado!";
			jogada==9;
		}
	}
	cout<<"The End";
}
