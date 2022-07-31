#include <iostream>
#include <locale>
using namespace std;
int main()
{
	int conta, saque, sobra;
	setlocale(LC_ALL, "ptb");
	cout <<"Quanto você tem na conta? ";
	cin >>conta;
	cout <<"Quanto você quer sacar? ";
	cin >>saque;
	sobra=conta-saque;
	cout <<"Ainda resta R$"<< sobra<<" na sua conta!";
}
