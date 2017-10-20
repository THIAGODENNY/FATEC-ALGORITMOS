#include<iostream>
#include<iomanip>
#include <locale.h>

using namespace std;


int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float codVendedor[10],totalVendas[10],comissao[10],valorReceber[10];
	
	for(int i=0;i<10;i++){
	    cout<<endl<<"Digite o código do Vendedor "<<i+1<<":";
	    cin>>codVendedor[i];
	    cout<<"Digite o total vendido por ele:";
	    cin>>totalVendas[i];
	    cout<<"Digite a comissão dele(%):";
	    cin>>comissao[i];
	    valorReceber[i]=totalVendas[i]*(comissao[i]/100);
	}
	
	
}
