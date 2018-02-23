#include<iostream>

using namespace std;

int primo(int n){
	for(int i=n-1;i>1;i--){
			if(n%i==0){
				cout<<"Não Primo";
				return 1;
			}
	}

	cout<<"Primo";
	return 1;
}

int main(){
	int numero=0;
	cin>>numero;
	primo(numero);
}
