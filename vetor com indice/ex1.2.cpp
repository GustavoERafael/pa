#include <stdio.h>

int main() 
{
    float v[5], me = 0;
    int i;                

  
    for(i = 0; i < 5; i++){
        scanf("%f", &v[i]);  
        me = me + v[i];   
    }

    me = me / 5;          
    
    printf("%f", me); 
    
    return 0;
}