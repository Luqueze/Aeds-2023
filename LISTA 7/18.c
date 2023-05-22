#include<stdio.h>

    int binario(int n);
    int main(){

        int n;

        printf("Insira o numero para transformar em binario: ");
        scanf("%d", &n);

        printf("O numero %d em binario e: ", binario(n));

        
    }

    int binario(int n){

        if (n == 0)
            return 0;
        else
            return (n % 2) + 10 * binario(n / 2);
    }