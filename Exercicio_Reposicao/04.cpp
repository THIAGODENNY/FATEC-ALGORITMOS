/*Escrever um programa para ler dois vetores de inteiros, de ordem n e m respectivamente (n = 15 e m =25). Calcular o vetor
interseção dos dois vetores dados, imprimido os três vetores. Se não houver a interseção, imprimir uma mensagem explicativa
adequada.*/

#include <iostream>
#include <string>
#include<locale.h>

using namespace std;

#define n 15
#define m 25

int main()
{

  setlocale(LC_ALL, "Portuguese");

  int vetor1[n],vetor2[m],vetorInterseccao[n],indiceVetorInterseccao=0,k=0,l=0;
  bool igual=false,haInterseccao=false;

  //zerar vetores com indice n de tamanho
  for(int i=0;i<n;i++){
	  vetor1[i]=0;
	  vetorInterseccao[i]=0;
  }

  //zerar vetores com indice m de tamanho
  for(int i=0;i<m;i++){
	  vetor2[i]=0;
  }

  cout<<"Capturando dados do Vetor 01:"<<endl;

  //entrar com os valores do vetor 01
  for(int i=0;i<n;i++){
      cout<<"Vetor 01,"<<i+1<<":";
      cin>>vetor1[i];
  }
  
  cout<<"Capturando dados do Vetor 02:"<<endl;

  //entrar com os valores do vetor 02
  for(int i=0;i<m;i++){
      cout<<"Vetor 02,"<<i+1<<":";
      cin>>vetor2[i];
  }
  
  //rotina de verificação de intersecção
  for(k=0;k<n;k++){
	  l=0;
	  igual=false;
	  for(l=0;l<m;l++){
		  if(vetor1[k]==vetor2[l]){
			  igual=true;
		  }
	  }

	  //caso já tenha o valor no vetor intersecção, ele não grava novamente no vetor
	  if(igual==true){
		  for(int i=0;i<n;i++){
			  if(vetor1[k]==vetorInterseccao[i]){
				  igual=false;
			  }
		  }
	  }

	  //se foi verificado que código é igual, adiciona ao vetor de intersecção
	  if(igual==true){
		  vetorInterseccao[indiceVetorInterseccao]=vetor1[k];
		  indiceVetorInterseccao++;
		  haInterseccao=true;
	  }
  }	  

  //pula linha
  cout<<endl<<endl;
  cout<<"Vetor 01:"<<endl;
  //rotina para impressão dos valores de vetores
  for(int i=0;i<n;i++){
	  cout<<vetor1[i]<<"\t";
  }	  

  //pula linha
  cout<<endl<<endl;
  //rotina para impressão dos valores de vetores
  cout<<"Vetor 02:"<<endl;
    for(int i=0;i<m;i++){
	  cout<<vetor2[i]<<"\t";
  }

  //pula linha
  cout<<endl<<endl;
  //rotina para impressão dos valores de vetores
  cout<<"Vetor intersecção:"<<endl;
  for(int i=0;i<n;i++){
	  cout<<vetorInterseccao[i]<<"\t";
  }  

  if(haInterseccao==false){
	  cout<<endl<<endl<<"Não há Intersecção!!!!!"<<endl;
  }
  cout<<endl<<endl;
}
