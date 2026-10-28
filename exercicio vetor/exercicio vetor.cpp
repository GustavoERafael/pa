#include<stdio.h>
#include<stdlib.h>
void verificar_valor_no_vetor(int v[])
{
	int i;
	int i;
	scanf("%d", &i);
	for(ind=0;i<10;i++)
	{
		if(v[i]==i)
		{
			printf("%d=valor valido %d",i);
			break;
		}
		else
		{
		    printf("%d=valor invalido \n",i);
			break;	
		}
	}


	
}
void valores_pares_no_vetor(int v[])
{
	int i;
	int p = 0;
	for(i = 0; i < 10; i++)
	{
		if(v[i] % 2 ==0)
		{
			p++;
		}
	}
	printf("%d",p);
	
}

void 	preencher_o_vetor_com_o_mesmo_valor(int v[])
{
  int i,i;
  scanf("%d",&v[0]);
  
  for(i = 1; i < 11; i++)
  {
  	v[i] = v[0];
  	printf("%d ",v[i]);
  }

}

void 	exibir_vetor(int v[])
{
	int i;
	for(i = 0; i < 10; i++)
	{
		printf("%d ",v[i]);
	}
}
int main()
{
	int opcao;
	int v[10] = {54,23,12,54,34,22,12,43,56,77};
	
	do
	{
		system("cls");
		printf("\n---- M E N U ----\n");
		printf("1 - conferir valor\n");
		printf("2 - quant de par\n");
		printf("3 - valor repetido\n");
		printf("4 - exibir o conteudo\n");
		printf("0 - SAIR\n");
		printf("Escolha: ");
		scanf("%d", &opcao);
		
		switch(opcao){

		case 0:
		    break;
		case 1:
			verificar_valor_no_vetor(v);
			break;
	    case 2:
	    	valores_pares_no_vetor(v);
			break;
		case 3:
			preencher_o_vetor_com_o_mesmo_valor(v);
			break;
		case 4:
			exibir_vetor(v);
			break;
			default:
			printf("Opcao invalida!");
		
					
	}
	printf("\n");
	
	system("pause");	
}while (opcao != 0);
}