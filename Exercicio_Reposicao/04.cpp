/*Escrever um programa para ler dois vetores de inteiros, de ordem n e m respectivamente (n = 15 e m =25). Calcular o vetor
interseção dos dois vetores dados, imprimido os três vetores. Se não houver a interseção, imprimir uma mensagem explicativa
adequada.*/

#include <iostream>
#include <string>

using namespace std;

#define n 15
#define m 25

int main()
{
  
  int vetor1[n],vetor2[m],vetorInterseccao[n],indiceVetorInterseccao=0;
  
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
      for(int j=0,bool igual=false;i<m && igual=false;j++){
          if(vetor1[i]==vetor2[j]){
              vetorInterseccao[indiceVetorInterseccao]=vetor1[i];
              indiceVetorInterseccao++;
              igual=true;
          }
      }
  
}
