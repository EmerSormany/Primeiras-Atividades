#include <iostream>
#include <math.h>
#include <locale.h> // setlocale
using namespace std;
int main()
{
	int valor, quadrado, cubo;
	setlocale(LC_ALL,"ptb");
	cout << "Insira um n�mero inteiro qualquer: ";
	cin >> valor;
	quadrado = pow(valor,2);
	cubo = pow(valor,3);
	cout << "O quadrado do n�mero inserido � " <<quadrado<< ", e, o cubo � " <<cubo<< "!";
}
