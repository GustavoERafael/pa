#include <stdio.h>

int main() 
{
    int v[10], i;
    int positivos = 0, negativos = 0, zeros = 0;

    
    for(i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }

   
    for(i = 0; i < 10; i++) {
        if(v[i] > 0) {
            positivos++;
        } else if(v[i] < 0) {
            negativos++;
        } else {
            zeros++;
        }
    }

    
    
    printf("Positivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);
    printf("Zeros: %d\n", zeros);

    
    printf("Valores positivos: ");
    for(i = 0; i < 10; i++) {
        if(v[i] > 0) {
            printf("%d ", v[i]);
        }
    }
    printf("\n");

    
    printf("Valores negativos: ");
    for(i = 0; i < 10; i++) {
        if(v[i] < 0) {
            printf("%d ", v[i]);
        }
    }
    printf("\n");

    return 0;
}