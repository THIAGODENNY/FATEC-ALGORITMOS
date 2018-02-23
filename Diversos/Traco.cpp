#include<iostream>
#include "traco.h"

using namespace std;

void traco(){
	int i=0;
	for(i=0;i<50;i++){
		cout<<"-";
	}
	cout<<endl;
}

int main(){
	traco();
	cout<<"Minha primeira funcao!"<<endl;
	traco();
	return 0;
}
