#include<iostream>
#include <iomanip>
#include<locale.h>

using namespace std;

int main()

{
	setlocale(LC_ALL, "Portuguese");
	int vet1[10],vet2[10];

	for(int i=0;i<=9;i++)
	{
		cout<<"Digite o numero "<<i+1<<" do vetor 01:";
		cin>>vet1[i];
	}

	for(int i=0;i<=9;i++)
	{
		cout<<"Digite o numero "<<i+1<<" do vetor 02:";
		cin>>vet2[i];
	}	


		cout<<"Os vetores intercalados digitados são:";

	for(int i=0;i<=9;i++){
		cout<<endl<<"vetor 01:"<<vet1[i];
		cout<<endl<<"vetor 02:"<<vet2[i];
	}
	cout<<endl;
	return 0;
}

