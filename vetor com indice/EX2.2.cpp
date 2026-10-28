#include <stdio.h>

int main() 
{
    int v[8], i, ma, po;

    for(i = 0; i < 8; i++) {
        scanf("%d", &v[i]);
    }

    ma = v[0];
    po = 0;

    for(i = 1; i < 8; i++) {
        if(v[i] > ma) {
            ma = v[i];
            po = i;
        }
    }

    printf(" MAIOR : %d\n", ma);
    printf("POSICAO : %d\n", po);

    return 0;
}

