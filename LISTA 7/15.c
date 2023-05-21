#include<stdio.h>

    int main(){

        int x, n;

        printf("Digite dois numeros: ");
        scanf("%d %d", &x, &n);

        printf("O resultado e: %d", potencia(x, n));

    }

    int pow(int x, int n){

        if (n == 0)
            return 1;
        else if (n < 0)
            return 0;
        else
            return x * potencia(x, n - 1);
    }