#include <iostream>
#include <locale.h> // setlocale
using namespace std;
int main()
{
	setlocale(LC_ALL,"ptb");
	int num, contador, res;
	contador = 0;
	cout << "Qual número você quer ver a tabuada: ";
	cin >> num;
	while (contador<10&&contador!=0)
	{
		res = num * contador;
		cout << num<<" x "<<contador<<" = "<<res<<"\n ";
		contador++;
	}
}
