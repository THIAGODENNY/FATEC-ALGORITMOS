/*Escrever um programa para ler dois vetores de inteiros, de ordem n e m respectivamente (n = 15 e m =25). Calcular o vetor
interseção dos dois vetores dados, imprimido os três vetores. Se não houver a interseção, imprimir uma mensagem explicativa
adequada.*/

#include <iostream>
#include <string>

using namespace std;

#define n 5
#define m 7

int main()
{
  
  int vetor1[n],vetor2[m],vetorInterseccao[n],indiceVetorInterseccao=0,j=0;
  bool igual=false;

  //zerar vetores com indice n de tamanho
  for(int i=0;i<n;i++){
	  vetor1[i]=0;
	  vetorInterseccao[i]=0;
  }

  //zerar vetores com indice m de tamanho
  for(int i=0;i<m;i++){
	  vetor2[i]=0;
  }
  
  //entrar com os valores do vetor 01
  for(int i=0;i<n;i++){
      cout<<"Vetor 01,"<<i<<":";
      cin>>vetor1[i];
  }
  
  //entrar com os valores do vetor 02
  for(int i=0;i<m;i++){
      cout<<"Vetor 02,"<<i<<":";
      cin>>vetor2[i];
  }
  
  //rotina de verificação de intersecção
  for(int i=0;i<n;i++){
	  //reset memorórias auxiliares para verificação;
	  j=0;
	  igual=false;
	  
	  if(vetor1[n]==vetor2[j]){
	  igual=true;
	  }

	  //for para evitar de gravar-se duas vezes o mesmo valor de intersecção
	  for(int i=0;i<m;i++){
		  if(vetor1[i]==vetorInterseccao[i]){
			  igual=false;
		  }
	  }
	  //se valor não gravado anteriormente gravar
	  if(igual){
	  vetorInterseccao[indiceVetorInterseccao]=vetor1[i];
	  indiceVetorInterseccao++;
	  }
  }

  //rotina para impressão dos valores de vetores
  
  for(int i=0;i<n;i++){
	  cout<<vetorInterseccao[i]<<endl;
  }  
}
	  
		  
	  
