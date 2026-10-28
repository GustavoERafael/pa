//6. Crie uma funcao chamada 'menor_3n()' que receba 3 valores por
//parâmetro e retorne o número de menor valor.

#include<stdio.h>
int menor_num(int num1, int num2, int num3)
{
	int m;
	if(num1<num2 && num1<num3)
	{
		m=num1;
	}
	
	if(num2<num1 && num2<num3)
	{
		m=num2;
	}
	
		if(num3<num1 && num2>num3)
	{
		m=num3;
	}
	return m;
	
}

int main()
{
	int n1, n2, n3, menor;
	
	printf("Digite tres numeros:");
	scanf("%d", &n1 );
	scanf("%d", &n2);
	scanf("%d", &n3);
	
	menor=menor_num( n1, n2, n3);
	printf("O menor e: %d", menor);
}