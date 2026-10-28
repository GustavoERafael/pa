#include<stdio.h>

int main() 
{
    int v[5] = {12, 87, 67, 46, 23};
    int ind;

    printf("invertido :\n");
    for (ind = 4; ind >= 0; ind--) 
    {
        printf("%d ", v[ind]);
    }
    printf("\n");

    return 0;
}
