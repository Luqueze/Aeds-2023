#include<stdio.h>

    int main(){

        int a;
        int *ptr = &a;

        float b;
        float *ptr2 = &b;

        char c;
        char *ptr3 = &c;

        printf("Digite um numero inteiro: ");
        scanf("%d", &a);

        printf("Digite um numero real: ");
        scanf("%f", &b);

        printf("Digite um caractere: ");
        scanf(" %c", &c);

        printf("a = %d\n b = %f\n c = %c\n", a, b, c);

        printf("Insira um novo valor para a: ");
        scanf("%d", ptr);

        printf("Insira um novo valor para b: ");
        scanf("%f", ptr2);

        printf("Insira um novo valor para c: ");
        scanf(" %c", ptr3);

        printf("a = %d\n b = %f\n c = %c", a, b, c);

        return 0;
    }