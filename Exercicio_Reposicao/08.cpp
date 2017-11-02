/*Escrever um programa para ler um vetor de n elementos do tipo inteiro (n <= 20) e ordenar seus elementos em ordem crescente e
decrescente. Imprimir o vetor antes e após a ordenação.*/

#include<iostream>
#include<locale.h>

using namespace std;

#define n 20

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int vetor[n],vetorCrescente[n],vetorDescrescente[n],vetorAux[n],indiceAtual=0,numeroMaior=0,numeroMenor=0,indiceMaior=0,indiceMenor=0,trocaElementoVetor;
	bool erroCin=false;
	
	cout<<"Capturando dados.."<<endl;

	//zerando vetores
	for(int i=0;i<n;i++){
		vetor[i]=0;
		vetorCrescente[i]=0;
		vetorDescrescente[i]=0;
	}

	//capturando dados
	for(int i=0;i<n;i++){
		cout<<"Vetor 1,"<<i+1<<":";
		cin>>vetor[i];

		//verifica se foi digitado na entrada que não for int, causando um erro no programa e pede para a inserção do valor novamente
		while (cin.fail())  
		{
			cout<<"Caracter digitado inválido. Digite novamente o vetor 1,"<<i+1<<":";  
			cin.clear();   				//limpa istream
			cin.ignore();  				//repara istream
			cin >> vetor[i]; 			//executa novamente a captura de dados
		}
		
		//copia os valores para vetor crescente e decrescente
		vetorCrescente[i]=vetor[i];
		vetorDescrescente[i]=vetor[i];
	}

	

//************************************ Classificação Forma descrescente *******************************************//
	
	
	//movendo vetor para vetorAux
	for(int i=0;i<n;i++){
		vetorAux[i]=vetor[i];
	}

	//inicializando numeroMenor para classificação em forma decrescente
	numeroMaior=vetor[0];
	indiceMaior=0;
	indiceAtual=0;

	//organizando em forma decrescente e colocando em vetorAux
	for(int i=0;i<n;i++){
		for(int j=indiceAtual;j<n;j++){
			if(numeroMaior<vetorAux[j]){
				numeroMaior=vetorAux[j];
				indiceMaior=j;
			}
		}
			
		//troca a posição do elemento atual pelo a do elemento maior
		trocaElementoVetor=vetorAux[indiceMaior];
		vetorAux[indiceMaior]=vetorAux[indiceAtual];
		vetorAux[indiceAtual]=trocaElementoVetor;
		//incrementa a posição do vetor Auxiliar
		indiceAtual++;
		numeroMaior=vetorAux[indiceAtual];
		indiceMaior=indiceAtual;		
	}

	//movendo vetorAux para vetor decrescente
	for(int i=0;i<n;i++){
		vetorDescrescente[i]=vetorAux[i];
	}

//************************************ Classificação Forma crescente *********************************************//

	//movendo vetor para vetorAux
	for(int i=0;i<n;i++){
		vetorAux[i]=vetor[i];
	}
	
	//inicializando numeroMenor para classificação em forma crescente
	numeroMenor=vetor[0];
	indiceMenor=0;
	indiceAtual=0;

	//organizando em forma crescente e colocando em vetorAux
	for(int i=0;i<n;i++){
		for(int j=indiceAtual;j<n;j++){
			if(numeroMenor>vetorAux[j]){
				numeroMenor=vetorAux[j];
				indiceMenor=j;
			}
		}
			
		//troca a posição do elemento atual pelo a do elemento maior
		trocaElementoVetor=vetorAux[indiceMenor];
		vetorAux[indiceMenor]=vetorAux[indiceAtual];
		vetorAux[indiceAtual]=trocaElementoVetor;
		//incrementa a posição do vetor Auxiliar
		indiceAtual++;
		numeroMenor=vetorAux[indiceAtual];
		indiceMenor=indiceAtual;		
	}

	//movendo vetorAux para vetor crescente
	for(int i=0;i<n;i++){
		vetorCrescente[i]=vetorAux[i];
	}

//*****************************************************************************************************************


	cout<<"Vetores resultantes:"<<endl;
	
	cout<<endl<<"Vetor Inicial:"<<endl;
	//imprimindo vetor
	for(int i=0;i<n;i++){
		cout<<"\t"<<vetor[i];
	}

	cout<<endl<<"Vetor Inicial em ordem Crescente:"<<endl;
	//imprimindo vetor
	for(int i=0;i<n;i++){
		cout<<"\t"<<vetorCrescente[i];
	}

	cout<<endl<<"Vetor Inicial em ordem Decrescente:"<<endl;
	//imprimindo vetor
	for(int i=0;i<n;i++){
		cout<<"\t"<<vetorDescrescente[i];
	}

	cout<<endl<<endl;	
}
