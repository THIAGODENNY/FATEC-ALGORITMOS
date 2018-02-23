#include<iostream>
#include <iomanip>

using namespace std;

#define x 5
#define y 5

int main(){
	
	float matriz[x][y],media=0,soma=0,quantidadeElementos=0;

	//zera valores da matriz

	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			matriz[i][j];
		}
	}
	
	//captura os valores das matrizes
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			cout<<i<<","<<j<<":";
			cin>>matriz[i][j];
		}
	}

	//soma os valores pares
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			if(i%2==0){
				soma+=matriz[i][j];
				quantidadeElementos++;
			}
		}
	}
	media=soma/quantidadeElementos;
	cout<<"Medias Linhas Pares="<<setprecision(3)<<media;		
}

