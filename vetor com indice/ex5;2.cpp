#include <stdio.h>

int main() 
{
    int v[10], i, procu, encon = 0, pos;

    for(i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }

    scanf("%d", &procu);

    for(i = 0; i < 10; i++) {
        if(v[i] == procu) {
            encon = 1;
            pos = i;
        }
    }

    if(encontrado) {
        printf("O numero %d foi encontrado na posicao %d.\n", procu, pos);
    } else {
        printf("O numero %d nao foi encontrado.\n", procu);
    }

    return 0;
}