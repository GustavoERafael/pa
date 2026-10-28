#include <stdio.h>

int encontrar_indice_vetor(int v[10], int num) {
    int i, n = 0;
    for(i = 0; i < 10; i++) {
        if(num == v[i]) {
            n = 1;
        }
    }
    return n;
}

int main() {
    int num, n;
    int v[10] = {4, 2, 7, 10, 5, 70, 54, 29, 144, 200};

    printf("Digite um numero: ");
    scanf("%d", &num);

    n = encontrar_indice_vetor(v, num);

    if(n == 1) {
        printf("o numero %d  foi encontrado", num);
    }
	 else {
        printf("o numero %d nao foi encontrado", num);
    }
}




	
