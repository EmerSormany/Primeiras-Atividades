#include<iostream>
#include<locale.h> // setlocale
using namespace std;
int main()
{
	setlocale(LC_ALL,"ptb");
	int mes;
	char invalido, *mesExtenso;
	invalido = false;
	cout << "Digite o número do mês: ";
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
			mesExtenso="março";
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
			cout<<"Número não corresponde a nenhum mês!";
	}
	if (!invalido)
	cout<<"O número "<<mes<<" corresponde ao mês "<<mesExtenso<<"!";
}

