#include<iostream>
#include <iomanip>
#include<locale.h>
#include<stdio.h>
#include<conio.h>

using namespace std;

int main()

{
	setlocale(LC_ALL, "Portuguese");
	char palavra[20][10], palavra_aux[10];
	int ipalavra;

	for(ipalavra=0;ipalavra<=19;ipalavra++){
		cout<<endl<<ipalavra<<":Digite uma palavra de 10 letras:";
			for(int i=0;i<=9;i++){
			palavra[ipalavra][i]=getch();
			cout<<palavra[ipalavra][i];
		}
			for(int i=0;i<=9;i++){
				palavra_aux[i]=palavra[ipalavra][9-i];
			}

			cout<<endl<<"Palavra invertida: ";
			for(int i=0;i<=9;i++){
				palavra[ipalavra][i]=palavra_aux[i];
				cout<<palavra[ipalavra][i];
			}
	}



}
