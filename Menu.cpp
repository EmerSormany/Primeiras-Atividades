#include <iostream>
#include <locale.h> // setlocale
using namespace std;
int main()
{
	setlocale(LC_ALL,"ptb");
	int nPedido, qtd;
	float valor;
	char *pedido;
	bool invalido;
	invalido = false;
	cout<<"***Card�pio***\n";
	cout<<"  \n";
	cout<<"100 � Hamb�rguer � R$5,50\n";
	cout<<"  \n";
	cout<<"101 � Cachorro-quente � R$4,50\n";
	cout<<"  \n";
	cout<<"102 � Milkshake � R$7,00\n";
	cout<<"  \n";
	cout<<"103 � Pizza brotinho � R$8,00\n";
	cout<<"  \n";
	cout<<"104 - Cheeseburguer � R$8,50\n";
	cout<<"  \n";
	cout<<"Informe o c�digo do seu pedido: ";
	cin >> nPedido;		
	cout<<"Quantos voc� quer? ";
	cin >> qtd;
	switch (nPedido)
	{
		case 100:
			valor=qtd*5.50;
			pedido="Hamb�guer";
			break;
		case 101:
			valor=qtd*4.50;			
			pedido="Cachorro-quente";
			break;
		case 102:
			valor=qtd*7.00;
			pedido="Milkshake";
			break;
		case 103:
			valor=qtd*8.00;
			pedido="Pizza Brotinho";
			break;
		case 104:
			valor=qtd*8.50;
			pedido="Cheeseburguer";
			break;
		default:
			cout<<"O n�mero do pedido � inv�lido! \n";
			invalido=true;
	}
	if (!invalido)
	{
		cout<<"O seu pedido � "<<pedido<<" e a quantidade � "<<qtd<<". O valor do seu pedido � "<<valor<<"!";
	}
}
