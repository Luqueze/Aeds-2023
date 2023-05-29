#include <stdio.h>

void removeEspacos(char str[]) {
    int i, j;

    for (i = 0, j = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0';
}

int main() {
    char str[50];

    printf("Insira uma string: ");
    fgets(str, sizeof(str), stdin);

    removeEspacos(str);

    printf("String sem espacos em branco: %s\n", str);

    return 0;
}
