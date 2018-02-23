#include<iostream>

using namespace std;

int quadrado(int *n){
	*n=(*n)*(*n);	
}

int main(){
	int numero=20;
	quadrado(&numero);
	cout<<numero;
}
