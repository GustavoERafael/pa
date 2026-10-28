#include <stdio.h>

int main() 
{
    float notas[10], soma = 0, media, maior, menor;
    int i, aprovados = 0, reprovados = 0;
    int pos_maior = 0, pos_menor = 0;

  
    for(i = 0; i < 10; i++) {
        scanf("%f", &notas[i]);
    }

   
    maior = notas[0];
    menor = notas[0];

   
    for(i = 0; i < 10; i++) {
        soma += notas[i];

        if(notas[i] > maior) {
            maior = notas[i];
            pos_maior = i; 
        }

        if(notas[i] < menor) {
            menor = notas[i];
            pos_menor = i; 
        }

        if(notas[i] >= 6.0) {
            aprovados++;
        } else {
            reprovados++;
        }
    }

  
    media = soma / 10;

   
    printf("Media da turma: %.2f\n", media);
    printf("Maior nota: %.2f\n", maior);
    printf("Menor nota: %.2f\n", menor);
    printf("Aprovados: %d\n", aprovados);
    printf("Reprovados: %d\n", reprovados);

    
    printf("Posicao do aluno com a maior nota: %d\n", pos_maior);
    printf("Posicao do aluno com a menor nota: %d\n", pos_menor);

    return 0;
}