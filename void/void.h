/*
Exercícios:
1. crie um procedimento que receba um valor por parâmetro e exiba os seus proximos 10 multiplos.
exibe_10_multiplos(2);
2 4 6 8 10 12 14 16 18 20

2. crie um procedimento que receba um valor por parâmetro, a quantidade de multiplos e exiba os N procimos multiplos.
exibe_n_multiplos(4, 5);
4 8 12 16 20

3. crie um procedimento que receba um valor por parâmetro e exiba a tabuada deste numero.
exibe_tabuada(10);
10 x 1 = 10
10 x 2 = 20
10 x 3 = 30
10 x 4 = 40
10 x 5 = 50
10 x 6 = 60
10 x 7 = 70
10 x 8 = 80
10 x 9 = 90
10 x 10 = 100

4. crie um procedimento que receba por parâmetr o numero da tatuada e o multiplicador e exiba tabuada deste numero.
exibe_tabuada_mult(2, 5);
2 x 1 = 2
2 x 2 = 4
2 x 3 = 6
2 x 4 = 8
2 x 5 = 10

5. crie um procedimento que receba por parâmetro o numero da tatuada e inicio e fim do multiplicador e exiba tabuada deste numero.
exibe_tabuada_inicio_fim(2, 3, 7);
2 x 5 = 10
2 x 6 = 12
2 x 7 = 14


*/
#include<stdio.h>

void ex1(int n) {
    int i;
    for(i = 1; i <= 10; i++) {
        printf("%d ", n * i);
    }
    printf("\n");
}

void ex2(int n1, int n2)
{
	int i;
	for(i =1; i <=n2; i++)
	{
		 printf("%d ", n1 * i);
	}
	printf("\n");
}

void ex3(int n)
{
	    int i;
    for(i = 1; i <= 10; i++) {
    	printf("%d X %d =", i, n);
        printf("%d\n ", n * i);
    }
    printf("\n ");
}


void ex4(int n, int m)
{
	    int i;
    for(i = 1; i <= m; i++) {
    	printf("%d X %d =", i, n);
        printf("%d\n ", n * i);
    }
    printf("\n ");
}

void ex5(int n, int inicio, int fim) {
    int i;
    for(i = inicio; i <= fim; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
		printf("\n");
    }
}
