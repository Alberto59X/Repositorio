#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<iso646.h>
#include <conio.h>

int main(){
	int n;
	float i;
	float soma;
	printf("Escreva um numero inteiro\n");
	scanf("%d", &n);
	soma = 0;
	for(i=1; i<=n; i++)
	
	{
	float resultado = 1/i;
	printf("\nNumero: %f", resultado);
	}
	printf("\nA soma dos numeros ser%c: %f\n", 160, soma);
	getch();
	return 0;
}
