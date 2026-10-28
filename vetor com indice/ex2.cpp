#include <stdio.h>

int main() 
{
    int v[5] = {12, 87, 67, 46, 23};
    int ind;
    int soma = 0;

    for (ind = 0; ind < 5; ind++) 
    {
        soma = soma + v[ind]; 
    }

    printf("Soma = %d\n", soma);

    return 0;
}
