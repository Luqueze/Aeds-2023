#include <stdio.h>

    int main(){

        float a,b;

        printf("insira dois numeros: ");
        scanf("%f %f", &a, &b);

        if (a > b){
            printf("o numero %.2f e o maior", a);
        }

        else if (a < b){
            printf("o numero %.2f e o maior", b);
        }else {
            puts("os numeros sao iguais");
        }
        return 0;
    }
