#include <stdio.h>

int main() {

    int vetor[10];
    int maior;
    int posicao;

    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    posicao = 0;
    for (int i = 1; i < 10; i++) {
        if (vetor[i] >= maior) {
            maior = vetor[i];
            posicao = i;
        }
    }

    printf("Maior elemento: %d\n", maior);
    printf("Posicao no vetor: %d\n", posicao + 1); 

    return 0;
}
