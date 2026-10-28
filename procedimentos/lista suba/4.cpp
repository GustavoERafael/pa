/*
3. Crie uma funcao chamada 'prox_num()' que receba 1 valor por
parâmetro e retorne o próximo numero.
*/
#include<stdio.h>
int prox_nump(int num1)
{
	int pxp;
	if(num1 %2 ==0)
	{
		pxp=num1+2;
	}
	else
	{
		pxp=num1+1;
	}
	return pxp;
	
}

int main()
{
	int n1, proximop;
	
	printf("Digite o numero:");
	scanf("%d", &n1 );
	
	proximop=prox_nump( n1);
	printf("O par seguinte e: %d", proximop);
}