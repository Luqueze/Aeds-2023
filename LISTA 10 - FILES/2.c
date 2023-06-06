#include<stdio.h>

    int main(){

        FILE* arq;
        
        arq = fopen("texto2.txt", "w");

        char frase[100];

        if(arq == NULL){
            printf("Erro na abertura do arquivo");
            return 1;
        }

        printf("Digite uma frase: ");
        fgets(frase, 100, stdin);

        fprintf(arq, "%s", frase);

        fclose(arq);

        return 0;



    }