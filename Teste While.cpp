#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL,"ptb");
	float peso, m_peso;
	int num, idade, m_idade;
	num=0;
	cout << "Informe a idade do entrevistado: ";
	cin >> idade;
	cout << "informe o peso do entrevistado: ";
	cin >> peso;
	do
	{
		m_idade = m_idade + idade;
		m_peso = m_peso + peso;
		num++;
		cout << "Informe a idade do entrevistado: ";
		cin >> idade;
		cout << "informe o peso do entrevistado: ";
		cin >> peso;
	} while (idade!=0||peso!=0);
	m_idade=m_idade/num;
	m_peso=m_peso/num;
	cout << "A média de peso dos "<<num<<" entrevistados é "<<m_peso<<", e a média de idade é "<<m_idade<<".";
}
