/*Ler um vetor contendo 20 elementos reais e dividir este vetor em dois outros vetores, um deles com n elementos (você deve consistir
n; pense como o fará) e o outro com o restante dos elementos. Imprimir os três vetores.*/

#include<iostream>
#include<locale.h>

using namespace std;

#define n 20

int main()
{
	setlocale(LC_ALL, "Portuguese");

	float v[n],v2[n],v3[n];
	int divisaoVetor=0;

	cout<<"Capturando vetor a ser dividido:"<<endl;
	
	//zerando vetores
	for(int i=0;i<n;i++){
		v[i]=0;
		v2[i]=0;
		v3[i]=0;
	}
	
	//capturando vetores
	cout<<"Capturando vetores.."<<endl;
	for(int i=0;i<n;i++){
		cout<<"Vetor 01,"<<i+1<<":";
		cin>>v[i];
	}

	//capturar quantidade de itens para serem divisiveis
	do{
	cout<<endl<<"Digite a quantidade a ser dividido o primeiro Vetor (entre 0 e "<<n<<"):";
	cin>>divisaoVetor;
	}while(divisaoVetor>n || divisaoVetor<0);

	//salvando da primeira parte da divisão
	for(int i=0;i<divisaoVetor;i++){
		v2[i]=v[i];
	}

	//salvando da primeira parte da divisão
	for(int i=0;i<(n-divisaoVetor);i++){
		v3[i]=v[i+divisaoVetor];
	}

	//
	cout<<endl<<"Vetor que foi dividido:"<<endl;
	for(int i=0;i<n;i++){
		cout<<v[i]<<"\t";
	}

	//
	cout<<endl<<"Vetor parte 01:"<<endl;
	for(int i=0;i<n;i++){
		cout<<v2[i]<<"\t";
	}

	//
	cout<<endl<<"Vetor parte 02:"<<endl;
	for(int i=0;i<n;i++){
		cout<<v3[i]<<"\t";
	}

	cout<<endl;
}
