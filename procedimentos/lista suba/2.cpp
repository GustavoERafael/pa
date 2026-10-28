#include <stdio.h>
float calcular_delta(float num1, float num2, float num3 )
{
	float d;
	d= num2*num2-4*num1*num3;
	return d;
}
int main()
{
	float delta, n1, n2, n3;
	
	printf("Digite tres numeros: ");
	scanf("%f", &n1);
	scanf("%f", &n2);
	scanf("%f", &n3);
	
	delta= calcular_delta(n1,n2,n3);
	printf("O delta e:%f \n", delta);
	

}