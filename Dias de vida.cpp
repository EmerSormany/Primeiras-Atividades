#include <iostream>
#include <locale>
using namespace std;
int main()
{
	int dias, anos;
	setlocale(LC_ALL,"ptb");
	cout<<"Diga quantos dias você já viveu: ";
	cin>>dias;
	anos=dias/365;
	cout<<"Parabéns! Você tem "<<anos<<" anos de vida!!!";
}
