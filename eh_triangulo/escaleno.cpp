#include <stdio.h>>

int escaleno(int a, int b, int c){
	
	int escaleno;
	if(a==b && a==c && c==b ){
		return 0;}
		else{
			return 1;
		}
}

 
 int main()
{
	int  a, b, c;
	
	
		printf("Digite tres numeros:\n");
	scanf("%d", &a );
	scanf("%d", &b);
	scanf("%d", &c);
	escaleno(a,b,c);
	
	printf("%d", escaleno(a,b,c));
	
	
	
	
	
	
	
	
	
	
}