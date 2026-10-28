#include <stdio.h>

int main() 
{
    int vetorA[5], vetorB[5], i;

   
    for(i = 0; i < 5; i++) {
        scanf("%d", &vetorA[i]);
    }

   
    for(i = 0; i < 5; i++) {
        scanf("%d", &vetorB[i]);
    }

   
    for(i = 0; i < 5; i++) {
        if(vetorA[i] == vetorB[i]) {
            printf("Posicao %d: valores iguais (%d)\n", i, vetorA[i]);
        }
    }

    return 0;
}