#include<iostream>
#include <iomanip>
#include<locale.h>

using namespace std;

int main()

{
	setlocale(LC_ALL, "Portuguese");
	int vet[10],i=0,maior=0,posicao=0;

	cout<<"Entre com 10 n�meros inteiros:"<<endl;
	
	
	for(i=i;i<=9;i++)
	{
		cout<<"Digite o numero "<<i+1<<":";
		cin>>vet[i];
		if(vet[i]>maior){
			maior=vet[i];
			posicao=i;
		}
	}

	cout<<"O maior n�mero digitado � o "<<i<<"� numero com valor de "<<maior<<endl;


}
