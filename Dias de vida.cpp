#include <iostream>
#include <locale>
using namespace std;
int main()
{
	int dias, anos;
	setlocale(LC_ALL,"ptb");
	cout<<"Diga quantos dias voc� j� viveu: ";
	cin>>dias;
	anos=dias/365;
	cout<<"Parab�ns! Voc� tem "<<anos<<" anos de vida!!!";
}
