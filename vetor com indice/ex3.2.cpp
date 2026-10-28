#include <stdio.h>

int main() 
{
    int v[10], i, p = 0;

    for(i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }

    for(i = 0; i < 10; i++) {
        if(v[i] % 2 == 0) {
            p++;
        }
    }

    printf("Quantidade de num pares: %d\n", p);
    printf("Numeros pares: ");

    for(i = 0; i < 10; i++) {
        if(v[i] % 2 == 0) {
            printf("%d ", v[i]);
        }
    }
    printf("\n");

    return 0;
}
