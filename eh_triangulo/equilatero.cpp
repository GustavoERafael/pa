#include <stdio.h>

int equilatero(int a, int b, int c){
	
	int equilatero;
	if(a==b && a==c && b==c){
		return 1;}
		else{
			return 0;
		}
}

 
 int main()
{
	int  a, b, c;
	
	
		printf("Digite tres numeros:\n");
	scanf("%d", &a );
	scanf("%d", &b);
	scanf("%d", &c);
	equilatero(a,b,c);
	
	printf("%d", equilatero(a,b,c));
	
	
	
	
	
	
	
	
	
	
}