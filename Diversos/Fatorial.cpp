#include<iostream>

using namespace std;

int fatorial(int x){
	int fatorial=x;
	for(int i=x-1;i>1;i--){
		fatorial=fatorial*i;
	}
	return fatorial;
}

int main(){

	int numero=0;
	do{
	cout<<"Digite um valor para executar o fatorial maior que 0:";
	cin>>numero;
	}while(numero<=0);
	cout<<fatorial(numero);
	cout<<endl;
}
