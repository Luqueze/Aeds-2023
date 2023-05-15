#include <stdio.h>
#include <stdbool.h>

bool verificaPositivo(int n);

int main() {
    int n;
    printf("Insira a quantidade de elementos: ");
    scanf("%d", &n);

    int valor[n];

    for (int i = 0; i < n; i++) {
        printf("Insira o valor %d: ", i + 1);
        scanf("%d", &valor[i]);

        bool resultado = verificaPositivo(valor[i]);
        if (resultado)
            printf("%d é positivo.\n", valor[i]);
        else
            printf("%d é negativo.\n", valor[i]);
    }

    

    return 0;
}

bool verificaPositivo(int n) {
    if (n > 0)
        return true;
    else
        return false;
}
