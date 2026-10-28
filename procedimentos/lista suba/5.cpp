/*
5. Crie uma funcao chamada 'maior_2n()' que receba 2 valores por
parâmetro e retorne o número de maior valor.
*/
#include<stdio.h>
int maior_num(int num1, int num2)
{
	int m;
	if(num1>num2)
	{
		m=num1;
	}
	else
	{
		m=num2;
	}
	return m;
	
}

int main()
{
	int n1, n2, maior;
	
	printf("Digite dois numeros:");
	scanf("%d", &n1 );
	scanf("%d", &n2);
	maior=maior_num( n1, n2);
	printf("O maior e: %d", maior);
}