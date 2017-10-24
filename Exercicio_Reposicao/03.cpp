#include<iostream>
#include<iomanip>
#include <locale.h>

#define quantidadeVendedores 2

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float codVendedor[quantidadeVendedores],totalVendas[quantidadeVendedores],comissao[quantidadeVendedores],valorReceber[quantidadeVendedores];
	
	for(int i=0;i<quantidadeVendedores;i++){
	    cout<<endl<<"Digite o código do Vendedor "<<i+1<<":";
	    cin>>codVendedor[i];
	    cout<<"Digite o total vendido por ele:";
	    cin>>totalVendas[i];
	    cout<<"Digite a comissão dele(%):";
	    cin>>comissao[i];
	    valorReceber[i]=(float)totalVendas[i]*((float)comissao[i]/100);
	}
	
	cout<<endl<<"Relatório dos vendedores e vendas:"<<endl;
	
	for(int i=0;i<quantidadeVendedores;i++){
		cout<<"Cod Vendedor:"<<codVendedor[i]<<endl;
	    std::fixed;
		cout<<"Total Vendas: R$"<<setprecision(5)<<(float)totalVendas[i]<<endl;
	    cout<<"Comissão:"<<comissao[i]<<"%"<<endl;
	    std::fixed;
	    cout<<"Total Comissão: R$"<<setprecision(5)<<(float)valorReceber[i]<<endl<<endl;
	}	
	
}
