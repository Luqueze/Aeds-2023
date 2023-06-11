#include<stdio.h>

    int main(){

        int n;
        float somatotal = 0;

        FILE *arq = fopen("resultados.txt", "w");

        if(arq == NULL){
            printf("Erro na abertura do arquivo");
            return 0;
        }
        
        printf("Insira quntos carros a locadora possui: ");
        scanf("%d", &n);

        float carros[n];

        for(int i = 0; i < n; i++){
            printf("Insira o valor do tipo de carro %d: ", i+1);
            scanf("%f", &carros[i]);
            somatotal += carros[i];

        }

        //impressao
        printf("O valor total arrecadado pela locadora foi de: R$%.2f\n", (somatotal/3.0) * 12);
        printf("O valor arrecadado por multas foi de: R$%.2f\n", (somatotal/10.0) * 0.2);
        printf("o valor arrecadado por manutencao foi de: R$%.2f\n", (n * 0.02) * 600);

        //arquivo
        fprintf(arq, "O valor total arrecadado pela locadora foi de: R$%.2f\n", (somatotal/3.0) * 12);
        fprintf(arq, "O valor arrecadado por multas foi de: R$%.2f\n", (somatotal/10.0) * 0.2);
        fprintf(arq, "o valor arrecadado por manutencao foi de: R$%.2f\n", (n * 0.02) * 600);

        fclose(arq);

        return 0;
    }