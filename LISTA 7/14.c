#include<stdio.h>

    int main(){

        int fat;

        printf("Digite um numero: ");
        scanf("%d", &fat);

        printf("O fatorial de %d e: ", fatorial(fat));
    }

    int fatorial(int fat){

    if (fat == 0)
        return 1;
    else if (fat < 0)
        return 0;
    else
        return fat * fatorial(fat - 1);
    }