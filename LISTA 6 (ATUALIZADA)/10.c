#include <stdio.h>
#include <stdlib.h>

int main() {
    int *valores;
    int i;

    valores = (int*) calloc(30, sizeof(int));

    for (i = 0; i < 10; i++) {
        valores[i] = i + 1;
    }

    for (i = 20; i < 30; i++) {
        valores[i] = 30 - i;
    }

    printf("Valores:\n");
    for (i = 0; i < 30; i++) {
        printf("%d ", valores[i]);
    }
    printf("\n");

    free(valores);

    return 0;
}
