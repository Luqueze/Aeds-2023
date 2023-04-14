#include<stdio.h>
#include<math.h>

    int main(){

        float v[20], soma = 0;
        int i;

        for(i = 0; i < 20; i++){
            printf("Digite um numero: ");
            scanf("%f", &v[i]);
        }

        for(i = 0; i < 20; i++){
            soma += pow(v[i] + v[19 - i], 2);
        }

        printf("O resultado da soma e %.2f", soma);

        return 0;

    }