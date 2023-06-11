#include<stdio.h>

    int main(){

        int n;

        printf("Insira quntos carros a locadora possui: ");
        scanf("%d", &n);

        for(int i = 0; i < n; i++){
            printf("Insira o valor do tipo de carro %d: ", i+1);
        }
    }