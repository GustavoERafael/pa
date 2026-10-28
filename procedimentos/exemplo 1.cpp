#include<stdio.h>
float somar_2n(float n1, float n2){
	return n1 + n2;
}
void saudacao(){
	printf("\nBom dia usuario, seja bem vindo!");
}

void saudacao2(int hora){
	if(hora < 12)
		printf("\nBom dia usuario, seja bem vindo!");
	else if(hora < 18)
		printf("\nBoa tarde usuario, seja bem vindo!");
	else
		printf("\nBoa noite usuario, seja bem vindo!");
}
int main(){
	printf("%f", somar_2n(7,8));
	saudacao();
	saudacao2(18);
	printf("\nFIM");
}