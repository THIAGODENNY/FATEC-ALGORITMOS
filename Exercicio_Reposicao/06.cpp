/*Ler um número inteiro ? [1, 100]. Encontrar a representação deste número na base dois, usando um vetor. Imprimir o número
encontrado*/


#include<iostream>
#include<locale.h>

using namespace std;

#define quantidadeBits 8

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int inteiro=0,resto=0,binario[quantidadeBits],conversaoBinarioCont=quantidadeBits-1;

	do{
	cout<<"Digite um número para ser convertido para binário(0..255):";
	cin>>inteiro;
	}while(inteiro<0 || inteiro>255);//garente que seja um valor entre 0 e 255

	//conversão para binário
	do{
		resto=inteiro%2;
		inteiro=inteiro/2;
		binario[conversaoBinarioCont]=resto;
		conversaoBinarioCont--;
	}while(conversaoBinarioCont>=0);

	//imprimendo conversão
	cout<<endl<<"Conversão para binário:";
	for(int i=0;i<quantidadeBits;i++){
		cout<<binario[i];
	}
	cout<<endl<<endl;
}
