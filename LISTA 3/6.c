#include<stdio.h>

    int main(){
        
        int soma = 0, a;
        for (int i = 1; i <= 10; i++){
            printf("Insira %d° numeros: ", i);
            scanf("%d", &a);
            soma += a;
        }

        printf("%d", soma);

        return 0;
        
    }