#include<iostream>

using namespace std;

#define x 2
#define y 2

int pulaLinha(){
	cout<<endl;
}

int tabulacao(){
	cout<<"\t";
}

int main(){

	//declarações
    int matriz[x][y],maiorNumero=0;

	//zeramento
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			matriz[i][j]=0;
		}
	}

	//captura de dados da matriz
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
		cout<<i<<","<<j<<":";
		cin>>matriz[i][j];
		}
	}
	
	pulaLinha();

	//imprime matriz
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			cout<<matriz[i][j];
			tabulacao();
		}
		pulaLinha();
	}

	//verifica qual é o maior
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			if(matriz[i][j]>maiorNumero || matriz[i][j]==0)
				maiorNumero=matriz[i][j];
		}
	}

	//imprime o maior numero
	pulaLinha();
	cout<<"Maior numero="<<maiorNumero;
	pulaLinha();

	//multiplicacao matriz por maior numero
	for(int i=0;i<x;i++){
	for(int j=0;j<y;j++){
		matriz[i][j]=matriz[i][j]*maiorNumero;
		}
	}

	pulaLinha();

	//imprime matriz multiplicada
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			cout<<matriz[i][j];
			tabulacao();
		}
		pulaLinha();
	}


}
