#include<stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	printf("os alunos são %2d \n",350);
	printf("os alunos são %4d \n",350);
	printf("os alunos são %15.5f \n",350.55);
}
