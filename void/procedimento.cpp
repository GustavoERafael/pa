 #include<stdio.h>
#include"void.h"
#include<stdlib.h>

int main()
{
		int opcao, n, n1, n2, n3, m;
		
	do
	{
		system("cls");
		printf("----MENU---- \n");
		printf("0- Sair \n ");
		printf("1- 10 Multiplos de 1 numero \n");
		printf("2- n1 * n2 \n");
		printf("3-Tabuada  \n");
		printf("4- Dois parametros para a tabuada \n");
		printf("5- Tabuada inicio meio e fim \n");
		printf("Escolha:");
		scanf("%d", &opcao);
		
		
		
		switch(opcao) {
            case 0:
                printf("Saindo...\n");
                break;
                
            case 1:
            	printf("digite um numero:");
            	scanf("%d", &n);
            	ex1(n);
            	break;
			case 2:
				printf("Digite dois numeros:");
				scanf("%d", &n1);
				scanf("%d", &n2);
				ex2(n1, n2);
				break;
			case 3:
				printf("digite um numero:");
            	scanf("%d", &n);
				ex3(n);
				break;
			case 4:
				printf("Digite dois numeros:");
				scanf("%d", &n1);
				scanf("%d", &n2);
				ex4(n1, n2);
				
			case 5:
                printf("Digite o numero da tabuada, o inicio e o fim: ");
                scanf("%d", &n1);
                scanf("%d", &n2);
                scanf("%d", &n3);
                ex5(n1, n2, n3);
                break; 
			default:
				printf("Opcao invalida!");
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
		}
		printf("\n");
		
		system("pause");					
	}while(opcao!=0);
	
}	