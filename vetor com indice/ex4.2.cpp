#include <stdio.h>

int main() 
{
    int v[6], i, temp;

    for(i = 0; i < 6; i++) {
        scanf("%d", &v[i]);
    }

    for(i = 0; i < 3; i++) {
        temp = v[i];
        v[i] = v[5 - i];
        v[5 - i] = temp;
    }

    printf("Vetor invertido:\n");
    for(i = 0; i < 6; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}
