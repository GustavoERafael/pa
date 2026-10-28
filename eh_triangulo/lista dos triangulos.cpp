#include<stdio.h>
#include"triangulos.h"
#include<stdlib.h>

int main()
{
		int opcao, a,b,c;
		
	do
	{
		system("cls");
		printf("----MENU---- \n");
		printf("0- Sair \n ");
		printf("1- triangulo equilatero \n");
		printf("2- triangulo escaleno\n");
		printf("3- triangulo isoceles  \n");
		printf("Escolha:");
		scanf("%d", &opcao);
		
		
		
		switch(opcao) {
            case 0:
                printf("Saindo...\n");
                break;
                
            case 1:
            	printf("digite um numero:");
          scanf("%d", &a);
          scanf("%d", &b);
          scanf("%d", &c);
            	equilatero(a,b,c);
            		printf("%d", equilatero(a,b,c));
            	break;
			case 2:
				printf("Digite dois numeros:");
				scanf("%d", &a);
				scanf("%d", &b);
				scanf("%d", &c);
				escaleno(a,b,c);
					printf("%d", escaleno(a,b,c));
				break;
			case 3:
				printf("digite um numero:");
            	scanf("%d", &a);
            	scanf("%d", &b);
            	scanf("%d", &c);
				isoceles(a,b,c);
					printf("%d", isoceles(a,b,c));
				break;
			default:
				printf("Opcao invalida!");
		
	
	
	
		}
		printf("\n");
		
		system("pause");					
	}while(opcao!=0);
	
}