#include <stdio.h>

void ordernar(int*, int*, int*);

int main() {
    int N;

    printf("Quantos conjuntos de tres valores deseja digitar: ");
    scanf("%d", &N);

    int a, b, c;
    for (int i = 0; i < N; i++) {
        printf("Insira o primeiro, segundo e terceiro valor: ");
        scanf("%d %d %d", &a, &b, &c);
        
        ordernar(&a, &b, &c);
        printf("Os valores em ordem crescente sao: %d %d %d\n", a, b, c);
    }

    return 0;
}

void ordernar(int* a, int* b, int* c) {
    int aux;
    if (*a > *b) {
        aux = *a;
        *a = *b;
        *b = aux;
    }
    if (*b > *c) {
        aux = *b;
        *b = *c;
        *c = aux;
    }
    if (*a > *b) {
        aux = *a;
        *a = *b;
        *b = aux;
    }
}
