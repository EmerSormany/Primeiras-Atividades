#include<iostream>
#include<locale.h> // setlocale
using namespace std;
int main()
{
	setlocale(LC_ALL,"ptb");
	int mes;
	char invalido, *mesExtenso;
	invalido = false;
	cout << "Digite o n�mero do m�s: ";
	cin >> mes;
	switch (mes)
	{
		case 1:
			mesExtenso="Janeiro";
			break;
		case 2:
			mesExtenso="fevereiro";
			break;
		case 3:
			mesExtenso="mar�o";
			break;
		case 4:
			mesExtenso="abril";
			break;
		case 5:
			mesExtenso="maio";
			break;
		case 6:
			mesExtenso="Junho";
			break;
		case 7:
			mesExtenso="julho";
			break;
		case 8:
			mesExtenso="Agosto";
			break;
		case 9:
			mesExtenso="Setembro";
			break;
		case 10:
			mesExtenso="Outubro";
			break;
		case 11:
			mesExtenso="Novembro";
			break;
		case 12:
			mesExtenso="Dezembro";
			break;
		default:
			invalido=true;
			cout<<"N�mero n�o corresponde a nenhum m�s!";
	}
	if (!invalido)
	cout<<"O n�mero "<<mes<<" corresponde ao m�s "<<mesExtenso<<"!";
}

