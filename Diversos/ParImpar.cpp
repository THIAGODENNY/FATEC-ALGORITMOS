#include<iostream>

using namespace std;

void eleva(int *e){
	*e=(*e)*(*e);
}

int main(){
	int n=2;
	eleva(&n);
	cout<<n;
}
