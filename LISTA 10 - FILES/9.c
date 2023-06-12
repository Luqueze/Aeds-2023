#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

    int main(){

        FILE *arq;

        arq = fopen("arquivo.txt", "w");

        if(arq == NULL){
            printf("Erro na abertura do arquivo");
            exit(1);
        }

        float flag = 0;

        while(flag != -1){
            printf("Digite um numero flutuante: ");
            scanf("%f", &flag);
            fprintf(arq, "%f\n", flag);
        }

        fclose(arq);

        arq = fopen("arquivo.txt", "r");

        if(arq == NULL){
            printf("Erro na abertura do arquivo");
            exit(1);
        }

        float soma = 0;
        int maior = INT_MIN, menor = INT_MAX, qntnum = 0;

        while(!feof(arq)){
            fscanf(arq, "%f", &flag);
            soma += flag;
            qntnum++;
        }

        printf("A media dos numeros eh: %f\n", soma/qntnum);
        printf("O maior numero eh: %d\n", maior);
        printf("O menor numero eh: %d\n", menor);

        fclose(arq);

        return 0;


    }