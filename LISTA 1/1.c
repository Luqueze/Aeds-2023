//algoritmo que calcule a soma e o produto de 3 números fornecidos pelo usuário.

#include <stdio.h>

    int main() {

        //declaração
        int a,b,c;
        int soma, produto;

        //entrada
        printf("Insira tres valroes inteiros: ");
        scanf("%d %d %d",&a, &b, &c );

        //proc
        soma = a + b + c;
        produto = a * b * c;
        printf("A soma e igual a: %d\n", soma);
        printf("O produto e igual a: %d", produto);


    }