#include<iostream>
#include<iomanip>
using namespace std;


int main()
{
	int a[30],c[30];
	char b[30];
	float d[30];
	cout<<"********************************************************"<<endl;
	cout<<"Utilize apenas os operadores + - / *"<<endl;
	cout<<"Coloque a express�o de forma direta. Ex:1+1,33/4..."<<endl;
	for(int i=0;i<30;i++){
		cout<<endl<<"Calc"<<i+1<<":";
		cin>>a[i]>>b[i]>>c[i];
		
		//definir as opera��es
		if(b[i]=='+'){
			d[i]=(float)a[i]+(float)c[i];
		}
		else if(b[i]=='-'){
			d[i]=(float)a[i]-(float)c[i];
		}
		else if(b[i]=='/'){
			d[i]=(float)a[i]/(float)c[i];
		}
		else if(b[i]=='*'){
			d[i]=(float)(a[i])*(float)(c[i]);
		}
		//opera��o inv�lida n�o grava vetor e refaz
		else{
			cout<<"Opera��o Inv�lida";
			i--;
			continue;
		}

		
	}
	
	for(int i=0;i<30;i++){
		cout<<endl<<"Calc"<<i+1<<":";
		fixed;
		cout<<a[i]<<b[i]<<c[i]<<"="<<setprecision(3)<<d[i];
	}

	cout<<endl;
	return 0;		

}
