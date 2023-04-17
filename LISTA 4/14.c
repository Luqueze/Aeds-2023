#include <stdio.h>

int main() {
    
    int tamanho = 10;

    int A[10];
    int B[10];
    int C[20]; 

    printf("Digite os elementos do vetor A (10 elementos):\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o elemento A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    printf("\nDigite os elementos do vetor B (10 elementos):\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o elemento B[%d]: ", i);
        scanf("%d", &B[i]);
    }

    int indiceA = 0;
    int indiceB = 0;
    for (int i = 0; i < 20; i++) { // tamanho de A + tamanho de B
        if (indiceA < tamanho) {
            C[i] = A[indiceA];
            indiceA++;
        } else {
            C[i] = B[indiceB];
            indiceB++;
        }
    }

    printf("\nVetor C (intercalacao de A e B): ");
    for (int i = 0; i < 20; i++) { // tamanho de A + tamanho de B
        printf("%d ", C[i]);
    }

    return 0;
}
