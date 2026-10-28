#include<stdio.h>

int eh_triangulo(int n1, int n2, int n3){
	
	int eh_triangulo;
	if(n1<n2+n3 && n2<n1+n3 && n3<n2+n1){
		return 1;
	}
	
	else{
		return 0;
	}
		
}


int main()
{
	int n1, n2, n3;
	
		printf("Digite tres numeros:\n");
	scanf("%d", &n1 );
	scanf("%d", &n2);
	scanf("%d", &n3);
	eh_triangulo(n1,n2,n3);
	
	printf("%d", eh_triangulo(n1,n2,n3));
	
}