/*
3. Crie uma funcao chamada 'prox_num()' que receba 1 valor por
parâmetro e retorne o próximo numero.
*/
#include<stdio.h>
int prox_num(int num1)
{
	int px;
	px=num1+1;
	return px;
	
}

int main()
{
	int n1, proximo;
	
	printf("Digite o numero:");
	scanf("%d", &n1 );
	
	proximo=prox_num( n1);
	printf("O numero seguinte e: %d", proximo);
}