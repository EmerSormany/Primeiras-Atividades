#include <iostream>
#include <math.h>
#include <locale.h> // setlocale
using namespace std;
int main()
{
	int valor, quadrado, cubo;
	setlocale(LC_ALL,"ptb");
	cout << "Insira um número inteiro qualquer: ";
	cin >> valor;
	quadrado = pow(valor,2);
	cubo = pow(valor,3);
	cout << "O quadrado do número inserido é " <<quadrado<< ", e, o cubo é " <<cubo<< "!";
}
