#include<iostream>

using namespace std;

#define x 2
#define y 2

int main(){
	int mat[x][y];


	//zeramento da matriz
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			mat[i][j]=0;
		}
	}

	//capturar dados
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			cout<<i+1<<","<<j+1<<":";
			cin>>mat[i][j];
		}
	}

	//imprimir matriz
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
		cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}




}
