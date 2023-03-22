#include<stdio.h>

    int main(){

        int  n, produto = 1, a;

        printf("Insira a quantidade de numeros que deseja digitar: ");
        scanf("%d", &n);

        for ( int i = 0; i < n; i++){
            printf("Insira o %d° numero: ", i+1);
            scanf("%d", &a);

            if(a % 2 == 0){
                produto *= a;
            }      
        }

        printf("O produto e igual a %d", produto);

        return 0;
        
    }