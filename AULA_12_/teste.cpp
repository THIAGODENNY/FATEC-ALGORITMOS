#include<stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	printf("os alunos s�o %2d \n",350);
	printf("os alunos s�o %4d \n",350);
	printf("os alunos s�o %15.5f \n",350.55);
}
