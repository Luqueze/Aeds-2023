#include<stdio.h>

    int main(){

        int n;
        float somatotal = 0;
        
        printf("Insira quntos carros a locadora possui: ");
        scanf("%d", &n);

        float carros[n];

        for(int i = 0; i < n; i++){
            printf("Insira o valor do tipo de carro %d: ", i+1);
            scanf("%f", &carros[i]);
            somatotal += carros[i];

        }

        printf("O valor total arrecadado pela locadora foi de: %.2f\n", somatotal/3.0);
        printf("O valor arrecadado por multas foi de: %.2f\n", (somatotal/10.0) * 0.2);
    }