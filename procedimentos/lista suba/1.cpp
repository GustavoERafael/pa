#include <stdio.h>
float calcular_media(float num1, float num2, float num3 )
{
	float m;
	m= (num1+num2+num3)/3;
	return m;
}
int main()
{
	float media, n1, n2, n3;
	
	printf("Digite tres numeros: ");
	scanf("%f", &n1);
	scanf("%f", &n2);
	scanf("%f", &n3);
	
	media= calcular_media(n1,n2,n3);
	printf("Sua media e:%f \n", media);
	
	media=calcular_media(13, 14, 15);
	printf("Sua media e: %f \n", media);
	
		printf("media = %f", calcular_media (22, 44, 66));
}