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
  
  int vetor1[n],vetor2[m],vetorIntersecao[n];
  
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
  
  //verificar interseccção*********************************
  
}
