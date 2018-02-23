/*Faça um programa que leia um vetor de 10 posições. Em seguida, compacte o vetor, retirando os valores nulos e negativos. Coloque
o resultado no vetor B, mostrando o vetor resultante.*/

#include<iostream>
#include<locale.h>

using namespace std;

#define n 10

int main()
{
	setlocale(LC_ALL, "Portuguese");

	float vetor[n],vetorB[n];
	int indexVetorB=0;

	cout<<"Capturando o vetor a ser compactado:"<<endl;

	//zerando vetores
	for(int i=0;i<n;i++){
		vetor[i]=0;
		vetorB[i]=0;
	}
	
	//capturando dados
	for(int i=0;i<n;i++){
		cout<<"Vetor 1,"<<i+1<<":";
		cin>>vetor[i];
	}

	//retirando dados = 0 e negativos
	for(int i=0;i<n;i++){
		if(vetor[i]>0){
			vetorB[indexVetorB]=vetor[i];
			indexVetorB++;
		}
	}

	cout<<endl<<"Vetor compactado: ";
	//imprimindo vetor resultante
	for(int i=0;i<n;i++){
		cout<<vetorB[i]<<"\t";
	}

	cout<<endl;	

}
