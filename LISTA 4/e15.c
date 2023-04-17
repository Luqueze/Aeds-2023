#include <stdio.h>

int main() {

    int vetor[20];
    int repetidos[20];
    int numRepetidos = 0;

    printf("Digite 20 numeros inteiros:\n");
    for (int i = 0; i < 20; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Vetor completo: ");
    for (int i = 0; i < 20; i++) {
        printf("%d ", vetor[i]);
        for (int j = i + 1; j < 20; j++) {
            if (vetor[i] == vetor[j]) {
                
                int repetido = 0;
                for (int k = 0; k < numRepetidos; k++) {
                    if (vetor[i] == repetidos[k]) {
                        repetido = 1;
                        break;
                    }
                }
                if (!repetido) {
                    repetidos[numRepetidos++] = vetor[i];
                }
                break;
            }
        }
    }

    printf("\nElementos repetidos: ");
    if (numRepetidos > 0) {
        for (int i = 0; i < numRepetidos; i++) {
            printf("%d ", repetidos[i]);
        }
    } else {
        printf("Nenhum");
    }

    return 0;
}
