#include<iostream>
#include <iomanip>
#include<locale.h>

using namespace std;

int main()

{
	setlocale(LC_ALL, "Portuguese");
	int vet[10],i=0;

	cout<<"Entre com 10 números inteiros:"<<endl;
	
	
	for(i=i;i<=9;i++)
	{
		cout<<"Digite o numero "<<i+1<<":";
		cin>>vet[i];
	}

	for(i=9;i>=0;i--)
	{
		cout<<"O número "<<i+1<<" digitado, foi o "<<vet[i]<<endl;
	}



}
