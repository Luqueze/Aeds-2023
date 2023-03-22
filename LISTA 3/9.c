#include<stdio.h>

    int main(){

        int n, produto = 1;
        
        puts("Programa para ler 10 numeros inteiros e exibir o produto");

        for (int i = 0; i < 10; i++){
            printf("Insira o %d numero: ", i+1);
            scanf("%d", &n);
            produto *= n;
        }

        printf("O produto e igual a %d", produto);
        
    }