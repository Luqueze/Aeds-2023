#include<stdio.h>

    int main(){

        FILE* arq, *arq2, *arq3;

        arq = fopen("texto5.txt", "w");
        arq2 = fopen("texto55.txt", "w");
        arq3 = fopen("texto555.txt", "a");

        if(arq == NULL || arq2 == NULL || arq3 == NULL){
            printf("Erro na abertura do arquivo");
            return 1;
        }

        for(int i = 0; i < 10; i++){
            fprintf(arq, "%d ", i+2);
            fprintf(arq2, "%d ", i+3);
        }

        //concatenar arq 1 e arq2 em arq3
        fclose(arq);
        fclose(arq2);

        arq = fopen("texto5.txt", "r");
        arq2 = fopen("texto55.txt", "r");

        char c;
        while((c = fgetc(arq)) != EOF){
            fputc(c, arq3);
        }
        while((c = fgetc(arq2)) != EOF){
            fputc(c, arq3);
        }

        fclose(arq);
        fclose(arq2);
        fclose(arq3);

        return 0;


        

    }