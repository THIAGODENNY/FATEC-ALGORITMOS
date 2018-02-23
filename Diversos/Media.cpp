#include<iostream>
#include <iomanip>
#include<locale.h>

using namespace std;

int main()
#define media_final 6.0

{
	setlocale(LC_ALL, "Portuguese");
	float p1,saa,p2;
	cout<<"Digite a nota da P1:";
	cin>>p1;
	cout<<"Digite a nota do saa:";
	cin>>saa;
	p2=(6-p1*0.35+saa*.2)/.45;
	fixed;
	cout<<"A nota da P2 necessária para atingir 6 de média="<<setprecision(2)<<p2;

}
