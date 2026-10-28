#include <stdio.h>


int isoceles(int a, int b, int c){

    if (a == b || a == c || b == c){
        return 1;
    } else {
        return 0;
    }
}

int main()
{
    int a, b, c;
    
    printf("Digite tres numeros:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    

    printf("%d", isoceles(a, b, c));
    
    return 0;
}
