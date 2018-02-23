/*Faça um programa que receba o total das vendas de cada vendedor e armazene-as em um vetor. Receba também o percentual de
comissão de cada vendedor e armazene-as em outro vetor. Receba os códigos desses vendedores e armazene-os em um terceiro
vetor. Existem apenas 10 vendedores. Calcule e mostre:
a. Um relatório com os códigos dos vendedores e os valores a receber
b. O total das vendas
c. O maior valor a receber e quem o receberá
d. O menor valor a receber e quem o receberá*/

#include<iostream>
#include<iomanip>
#include <locale.h>

#define quantidadeVendedores 10

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float codVendedor[quantidadeVendedores],totalVendas[quantidadeVendedores],comissao[quantidadeVendedores],valorReceber[quantidadeVendedores],codVendedorMaior=0,valorAReceberMaior=0,codVendedorMenor=0,valorAReceberMenor=0;
	

	//captura valores
	for(int i=0;i<quantidadeVendedores;i++){
	    cout<<endl<<"Digite o código do Vendedor "<<i+1<<":";
	    cin>>codVendedor[i];
	    cout<<"Digite o total vendido por ele:";
	    cin>>totalVendas[i];
	    cout<<"Digite a comissão dele(%):";
	    cin>>comissao[i];
	    valorReceber[i]=(float)totalVendas[i]*((float)comissao[i]/100);

	    if(valorReceber[i]<valorAReceberMenor || valorAReceberMenor==0){
			    codVendedorMenor=codVendedor[i];
			    valorAReceberMenor=valorReceber[i];
			    }
			  
   	    if(valorReceber[i]>valorAReceberMaior || valorAReceberMaior==0){
			    codVendedorMaior=codVendedor[i];
			    valorAReceberMaior=valorReceber[i];
			    }

	}
	
	cout<<endl<<"Relatório dos vendedores e vendas:"<<endl;
	//imprime relatório
	for(int i=0;i<quantidadeVendedores;i++){
		cout<<"Cod Vendedor:"<<codVendedor[i]<<endl;
	    std::fixed;
		cout<<"Total Vendas: R$"<<setprecision(5)<<(float)totalVendas[i]<<endl;
	    cout<<"Comissão:"<<comissao[i]<<"%"<<endl;
	    std::fixed;
	    cout<<"Total Comissão: R$"<<setprecision(5)<<(float)valorReceber[i]<<endl<<endl;
	}

	cout<<endl<<"O vendedor com o código:"<<codVendedorMaior<<" receberá o maior valor, um total de R$"<<valorAReceberMaior;
	cout<<endl<<"O vendedor com o código:"<<codVendedorMenor<<" receberá o menor valor, um total de R$"<<valorAReceberMenor<<endl;
	
	return 0;
}
