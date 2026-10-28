#include <stdio.h>

void media() {
    float v[5];
    float soma = 0;
    float me = 0;

    // Primeiro coletamos os números
    for (int i = 0; i < 5; i++) {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%f", &v[i]);
        soma = soma + v[i]; 
    }

    // Calculamos a média após ter todos os valores
    me = soma / 5;
    
    printf("A media dos numeros e: %.2f\n", me);
}

int main() {
    int op;

    do {
        printf("===== MENU =====\n");
        printf("1 - Media\n");
        printf("0 - Sair\n");
        printf("Digite uma opcao: ");
        
        scanf("%d", &op);
        
        switch (op) {
            case 1:
                media(); 
                break;
                
            case 0:
                printf("\nSaindo...\n");
                break;
                
            default:
                printf("Opcao invalida!\n\n");
        }

    } while (op != 0);

    return 0;
}