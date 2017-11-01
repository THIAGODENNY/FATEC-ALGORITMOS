/*Faça um programa que carregue um vetor com 15 elementos inteiros e verifique a existência de elementos iguais a 30, mostrando
as posições em que esses elementos apareceram.*/

#include<iostream>
#include<iomanip>
#include <locale.h>

using namespace std;


int main()
{
	setlocale(LC_ALL, "Portuguese");
	int elemento[15];
	bool elemento_30_encontrado=false;

	for(int i=0;i<15;i++){
		cout<<"Elemento "<<i+1<<":";
		cin>>elemento[i];
	}

	for(int i=0;i<15;i++){

		if(elemento[i]==30){
			cout<<endl<<"Elemento "<<i+1<<":"<<elemento[i];
			elemento_30_encontrado=true;
		}
	}

	if(elemento_30_encontrado==false){
		cout<<"Nenhum número 30 foi encontrado";
	}

	cout<<endl;
	return 0;
}
