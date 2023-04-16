#include <stdio.h>

int main() {
    
    int tamanho_A = 10;
    int tamanho_B = 15;

    int vetor_A[tamanho_A];
    int vetor_B[tamanho_B];
    int vetor_C[tamanho_A + tamanho_B];

    
    printf("Digite os elementos do vetor A:\n");
    for (int i = 0; i < tamanho_A; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor_A[i]);
    }

    printf("\nDigite os elementos do vetor B:\n");
    for (int i = 0; i < tamanho_B; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor_B[i]);
    }

    for (int i = 0; i < tamanho_A; i++) {
        vetor_C[i] = vetor_A[i];
    }

    for (int i = 0; i < tamanho_B; i++) {
        vetor_C[tamanho_A + i] = vetor_B[i];
    }

    printf("\nVetor A: ");
    for (int i = 0; i < tamanho_A; i++) {
        printf("%d ", vetor_A[i]);
    }

    printf("\nVetor B: ");
    for (int i = 0; i < tamanho_B; i++) {
        printf("%d ", vetor_B[i]);
    }

    printf("\nVetor C: ");
    for (int i = 0; i < tamanho_A + tamanho_B; i++) {
        printf("%d ", vetor_C[i]);
    }

    return 0;
}
