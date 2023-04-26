#include <stdio.h>

int main() {

    int a, b;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    

    /* printf("%p\n", &a);
    printf("%p\n", &b); */

    //será analisado o endereço de memória de cada variável
    if (&a > &b) {
        printf("O maior endereco e de %p\n", &a);
    } else {
        printf("O maior endereco e de %p\n", &b);
    }

    return 0;
}
