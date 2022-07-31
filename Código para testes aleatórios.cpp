#include <iostream>
//setlocale(LC_ALL, “Portuguese”)
using namespace std;

/*
double media(double [], int tam);
int main()
{
	double notas[5];
	
	for(int x=0; x<5; x++)
	{
		cout<<"\nNota "<<x+1<<": ";
		cin>>notas[x];
	}
	
	cout<<"\nRelação das notas originais.\n";
	for(int x=0; x<5; x++)
	{
		cout<<notas[5]<<"\t";
		cout<<"\nMédia da turma: "<<media(notas, 5);
		cout<<"\n";
		system("pause");
	}
	
return 0;
}
double media(double n[], int tam)
{
	double soma=0;
	for(int x=0; x<tam;x++)
	{
		soma+=n[x];
		return soma/tam;
	}
}
*/

///*quantos atletas estão com altura idela.*///


/*
using namespace std;

int alturaMinima(double [], int tam, int minima);
int main()
{
	
	int tam=0;
	double altura[tam], minima=0;
	cout<<"Informe a quantidade de atletas: ";
	cin>>tam;
	cout<<"Informe a altura mínima: ";
	cin>>minima;
	for(int x=0; x<tam; x++)
	{
		cout<<"Informe a altura do "<<x+1<<" atlera: ";
		cin>>altura[x];	
		system("pause");
	}
	
	cout<<alturaMinima(altura, tam, minima)<<" atletas abaixo da altura mínima.";
	
}

int alturaMinima(double altura[], int tam, int minima)
{
	int conta = 0;
	for(int y=0; y<tam; y++)
	{
		if(altura[y]<minima)
		{
			conta++;
		}
	}
	return conta;
}*/


///*receba o endereço um vetor que armazena as notas da AV1 de uma turma e seu tamanho*///

#include<math.h>
//comando ceil arredonda sempre para cima, e o comando floor arredonda para baixo.

/*
void enderecoVetor(double [], int tam);

int main()
{
	int tam = 0;
	double notasAV1[tam];
	cout<<"Informe quantos alunos são: ";
	cin>>tam;
	
	for(int x=0; x<tam; x++)
	{
		cout<<"Informe a nota do "<<x+1<<" aluno: ";
		cin>>notasAV1[x];		
	}
	system("pause");
	enderecoVetor(notasAV1, tam);
}

void enderecoVetor(double& notasAV1, int tam)
{
	for(int y=0; y<tam; y++)
	{
		notasAV1[y]=ceil(notasAV1[y]);
	}
}*/


//código ficou indo somento até o oitavo aluno.


//Atribuindo valores via teclado
/*
#include <string.h>


struct paciente
{
	char nomePac[21];
	float alturaPac;
	float pesoPac;
	int telefonePac;
	float imcPac; 
	char classificPac[50];
}paciente1, paciente2, paciente3;
	

	
int main()
{		
	
	cout<<"Informe o nome do paciente: ";
	cin>>paciente1.nomePac;
	cout<<"\nInforme a altura de "<<paciente1.nomePac;
	cin>>paciente1.alturaPac;
	cout<<"\nInforme o peso de "<<paciente1.nomePac;
	cin>>paciente1.pesoPac;
	cout<<"\nInforme o telefone de "<<paciente1.nomePac;
	cin>>paciente1.telefonePac;
	
	
	paciente1.imcPac=paciente1.pesoPac/(paciente1.alturaPac*paciente1.alturaPac);
	
	
	if (paciente1.imcPac<17)
	{
		strcpy(paciente1.classificPac,"muito abaixo do peso.");
		cout<<"O IMC de "<<paciente1.nomePac<<" é "<<paciente1.imcPac<<".\n";
		cout<<paciente1.nomePac<<" está "<<paciente1.classificPac<<"!";
	}
	
	
	else if (paciente1.imcPac==17||paciente1.imcPac<=18.49)
	{
		strcpy(paciente1.classificPac,"abaixo do peso.");
		cout<<"O IMC de "<<paciente1.nomePac<<" é "<<paciente1.imcPac<<".\n";
		cout<<paciente1.nomePac<<" está "<<paciente1.classificPac<<"!";
	}
	
	
	else if (paciente1.imcPac==18.50||paciente1.imcPac<=24.99)
	{
		strcpy(paciente1.classificPac,"normal.");
		cout<<"O IMC de "<<paciente1.nomePac<<" é "<<paciente1.imcPac<<".\n";
		cout<<paciente1.nomePac<<" está com IMC "<<paciente1.classificPac<<"!";
	}
	
	
	else if (paciente1.imcPac==25||paciente1.imcPac<=29.99)
	{
		strcpy(paciente1.classificPac,"acima do peso.");
		cout<<"O IMC de "<<paciente1.nomePac<<" é "<<paciente1.imcPac<<".\n";
		cout<<paciente1.nomePac<<" está "<<paciente1.classificPac<<"!";
	}
	
	
	else if (paciente1.imcPac==30||paciente1.imcPac<=34.99)
	{
		strcpy(paciente1.classificPac,"em grau de obesidade I.");
		cout<<"O IMC de "<<paciente1.nomePac<<" é "<<paciente1.imcPac<<".\n";
		cout<<paciente1.nomePac<<" está "<<paciente1.classificPac<<"!";
	}
	
	
	else if (paciente1.imcPac==35||paciente1.imcPac<=39.99)
	{
		strcpy(paciente1.classificPac,"em grau de obesidade II.");
		cout<<"O IMC de "<<paciente1.nomePac<<" é "<<paciente1.imcPac<<".\n";
		cout<<paciente1.nomePac<<" está "<<paciente1.classificPac<<"!";
	}
	
	
	else (paciente1.imcPac>=40);
	{
		strcpy(paciente1.classificPac,"em grau de obesidade III(mórbida).");
		cout<<"O IMC de "<<paciente1.nomePac<<" é "<<paciente1.imcPac<<".\n";
		cout<<paciente1.nomePac<<" está "<<paciente1.classificPac<<"!";
	}
	
	
	cout<<"Informe o nome do paciente: ";
	cin>>paciente2.nomePac;
	cout<<"\nInforme a altura de "<<paciente2.nomePac;
	cin>>paciente2.alturaPac;
	cout<<"\nInforme o peso de "<<paciente2.nomePac;
	cin>>paciente2.pesoPac;
	cout<<"\nInforme o telefone de "<<paciente2.nomePac;
	cin>>paciente2.telefonePac;
	
	
	paciente2.imcPac=paciente2.pesoPac/paciente2.alturaPac*paciente2.alturaPac;
	
	
	if (paciente2.imcPac<17)
	{
		strcpy(paciente2.classificPac,"muito abaixo do peso.");
		cout<<"O IMC de "<<paciente2.nomePac<<" é "<<paciente2.imcPac<<".\n";
		cout<<paciente2.nomePac<<" está "<<paciente2.classificPac<<"!";
	}
	
	
	else if (paciente2.imcPac==17||paciente2.imcPac<=18.49)
	{
		strcpy(paciente2.classificPac,"abaixo do peso.");
		cout<<"O IMC de "<<paciente2.nomePac<<" é "<<paciente2.imcPac<<".\n";
		cout<<paciente2.nomePac<<" está "<<paciente2.classificPac<<"!";
	}
	
	
	else if (paciente2.imcPac==18.50||paciente2.imcPac<=24.99)
	{
		strcpy(paciente2.classificPac,"normal.");
		cout<<"O IMC de "<<paciente2.nomePac<<" é "<<paciente2.imcPac<<".\n";
		cout<<paciente2.nomePac<<" está com IMC "<<paciente2.classificPac<<"!";
	}
	
	
	else if (paciente2.imcPac==25||paciente2.imcPac<=29.99)
	{
		strcpy(paciente2.classificPac,"acima do peso.");
		cout<<"O IMC de "<<paciente2.nomePac<<" é "<<paciente2.imcPac<<".\n";
		cout<<paciente2.nomePac<<" está "<<paciente2.classificPac<<"!";
	}
	
	
	else if (paciente2.imcPac==30||paciente2.imcPac<=34.99)
	{
		strcpy(paciente2.classificPac,"em grau de obesido I.");
		cout<<"O IMC de "<<paciente2.nomePac<<" é "<<paciente2.imcPac<<".\n";
		cout<<paciente2.nomePac<<" está "<<paciente2.classificPac<<"!";
	}
	
	
	else if (paciente2.imcPac==35||paciente2.imcPac<=39.99)
	{
		strcpy(paciente2.classificPac,"em grau de obesido II.");
		cout<<"O IMC de "<<paciente2.nomePac<<" é "<<paciente2.imcPac<<".\n";
		cout<<paciente2.nomePac<<" está "<<paciente2.classificPac<<"!";
	}
	
	
	else (paciente2.imcPac>=40);
	{
		strcpy(paciente2.classificPac,"em grau de obesido III(mórbida).");
		cout<<"O IMC de "<<paciente2.nomePac<<" é "<<paciente2.imcPac<<".\n";
		cout<<paciente2.nomePac<<" está "<<paciente2.classificPac<<"!";
	}
	
	
	cout<<"Informe o nome do paciente: ";
	cin>>paciente3.nomePac;
	cout<<"\nInforme a altura de "<<paciente3.nomePac;
	cin>>paciente3.alturaPac;
	cout<<"\nInforme o peso de "<<paciente3.nomePac;
	cin>>paciente3.pesoPac;
	cout<<"\nInforme o telefone de "<<paciente3.nomePac;
	cin>>paciente3.telefonePac;
	
	
	paciente3.imcPac=paciente3.pesoPac/paciente3.alturaPac*paciente3.alturaPac;
	
	
	if (paciente3.imcPac<17)
	{
		strcpy(paciente3.classificPac,"muito abaixo do peso.");
		cout<<"O IMC de "<<paciente3.nomePac<<" é "<<paciente3.imcPac<<".\n";
		cout<<paciente3.nomePac<<" está "<<paciente3.classificPac<<"!";
	}
	
	
	else if (paciente3.imcPac==17||paciente3.imcPac<=18.49)
	{
		strcpy(paciente3.classificPac,"abaixo do peso.");
		cout<<"O IMC de "<<paciente3.nomePac<<" é "<<paciente3.imcPac<<".\n";
		cout<<paciente3.nomePac<<" está "<<paciente3.classificPac<<"!";
	}
	
	
	else if (paciente3.imcPac==18.50||paciente3.imcPac<=24.99)
	{
		strcpy(paciente3.classificPac,"normal.");
		cout<<"O IMC de "<<paciente3.nomePac<<" é "<<paciente3.imcPac<<".\n";
		cout<<paciente3.nomePac<<" está com IMC "<<paciente3.classificPac<<"!";
	}
	
	
	else if (paciente3.imcPac==25||paciente3.imcPac<=29.99)
	{
		strcpy(paciente3.classificPac,"acima do peso.");
		cout<<"O IMC de "<<paciente3.nomePac<<" é "<<paciente3.imcPac<<".\n";
		cout<<paciente3.nomePac<<" está "<<paciente3.classificPac<<"!";
	}
	
	
	else if (paciente3.imcPac==30||paciente3.imcPac<=34.99)
	{	
		strcpy(paciente3.classificPac,"em grau de obesidade I.");
		cout<<"O IMC de "<<paciente3.nomePac<<" é "<<paciente3.imcPac<<".\n";
		cout<<paciente3.nomePac<<" está "<<paciente3.classificPac<<"!";
	}
	
	
	else if (paciente3.imcPac==35||paciente3.imcPac<=39.99)
	{	
		strcpy(paciente3.classificPac,"em grau de obesidade II.");
		cout<<"O IMC de "<<paciente3.nomePac<<" é "<<paciente3.imcPac<<".\n";
		cout<<paciente3.nomePac<<" está "<<paciente3.classificPac<<"!";
	}
	
	
	else (paciente3.imcPac>=40);
	{	
		strcpy(paciente3.classificPac,"em grau de obesidade III.");
		cout<<"O IMC de "<<paciente3.nomePac<<" é "<<paciente3.imcPac<<".\n";
		cout<<paciente3.nomePac<<" está "<<paciente3.classificPac<<"!";
	}
	
return 0;

}

//O código ainda está com alguns erros.

*/

//atrubuindo valor na definição
/*
struct passageiro
{
	char nome[21];
	char pais[10];
	char destino[50];
	int numPassagem;
	int id;
}passageiro1={"José Vanderlei","Brasil","Jaçanã",178,123456}, passageiro2={"Emerson Sormany","Brasil","Jaçanã",179,654321};

int main()
{
	cout<<"Nome do passageiro é: "<<passageiro1.nome<<"\n";
	cout<<"O passageiro é de: "<<passageiro1.pais<<"\n";
	cout<<"O passageiro vai para: "<<passageiro1.destino<<"\n";
	cout<<"Número da sua passagem é: "<<passageiro1.numPassagem<<"\n";
	cout<<"Número da identidade: "<<passageiro1.id<<"\n";
	cout<<"\n";
	cout<<"Nome do passageiro é: "<<passageiro2.nome<<"\n";
	cout<<"O passageiro é de: "<<passageiro2.pais<<"\n";
	cout<<"O passageiro vai para: "<<passageiro2.destino<<"\n";
	cout<<"Número da sua passagem é: "<<passageiro2.numPassagem<<"\n";
	cout<<"Número da identidade: "<<passageiro2.id<<"\n";
}*/

/*
#define TAM 3

int main()
{
	struct prodCad
	{
		int codigo;
		float precoCompra, precoVenda;
	};
	
	prodCad produtos[TAM];
	int x, num;
	
	for(x=0; x<TAM; x++)
	{
		cout<<"\nCodigo do produto de 0 a 1000: ";
		cin>>num;
		
		while (num<0 || num>1000)
		{
			cout<<"\nCodigo Invalido!";
			cout<<"\nInsira novamente o codigo de 0 a 1000: ";
			cin>>num;
		}
		
		produtos[x].codigo=num;
		cout<<"\nPreco de compra: ";
		cin>>produtos[x].precoCompra;
		produtos[x].precoVenda=produtos[x].precoCompra*1.6;
	}
	
	system("cls");
	cout<<"\n\nCodigo\tCompra\tVenda\n";
	
	for(x=0; x<TAM; x++)
	{
		cout<<"\n"<<produtos[x].codigo<<"\t"<<produtos[x].precoCompra<<"\t"<<produtos[x].precoVenda;
		cout<<"\n\n";
	}
}*/



#include<cctype>

int main()
{
	struct cad
	{
		char pal[21];
	}palavra[2];
	
	int x, y;
	
	for(x=0; x<2; x++)
	{
		cout<<"Palavra: ";
		cin.getline(palavra[x].pal, 21);
	}
	
	palavra[0].pal[0]=toupper(palavra[0].pal[0]);
	system("cls");
	
	for(x=0; x<2; x++)
	{
		for(y=0; palavra[x].pal[y] !='\0'; y++)
		{
			cout<<"\n"<<palavra[x].pal[y];
		}
		cout<<"\n\n";
	}
	cout<<"\n\n";
	system("pause");
}


