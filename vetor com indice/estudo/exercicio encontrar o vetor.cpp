#include <stdio.h>

int main(){

int v[10] = {4 , 2, 7 ,10, 5, 70, 54, 29, 144, 200} , num, i, n = 0;


printf("digite um numero: ");

scanf("%d", &num);

for(i = 0; i < 10; i++){
	if(num == v[i]){
	 n = 1;
}

}
	if(n == 1){
		
		printf("o numero %d  foi encontrado", num);
		
	}
	else{
			printf("o numero %d nao foi encontrado", num);
			
	}
	
	

	

	
	


}













