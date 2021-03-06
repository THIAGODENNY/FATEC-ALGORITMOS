/*Ler três vetores de n elementos cada um (n < 30) organizados da seguinte forma:
- O primeiro e o terceiro são vetores de elementos reais;
- O segundo vetor é de caracteres e deve conter os símbolos que representam as operações aritméticas básicas ( *, /, +, -).
- O primeiro e o terceiro vetor serão operados aritmeticamente de acordo com as operações existentes no segundo vetor, criando
um novo vetor, conforme exemplo a seguir:
A = (1,3,5,7,9) B = ('* ', '/ ', '- ','+ ', '* ') C = (-2, 4, -5, 3, 6)
D = (-2, 0.75, 10, 10, 54) ( elementos do vetor A operados com elementos do vetor B)
Imprimir os quatro vetores.
*/

#include<iostream>
#include<iomanip>
#include <locale.h>

using namespace std;


int main()
{
	setlocale(LC_ALL, "Portuguese");
	int a[30],c[30];
	char b[30];
	float d[30];
	cout<<"********************************************************"<<endl;
	cout<<"Utilize apenas os operadores + - / *"<<endl;
	cout<<"Coloque a expressão de forma direta. Ex:1+1,33/4..."<<endl;
	for(int i=0;i<30;i++){
		cout<<endl<<"Calc"<<i+1<<":";
		cin>>a[i]>>b[i]>>c[i];
		
		//definir as operações
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
		//operação inválida não grava vetor e refaz
		else{
			cout<<"Operação Inválida";
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
