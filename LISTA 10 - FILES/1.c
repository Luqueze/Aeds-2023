#include<stdio.h>

    int main(){

        FILE* arq;

        arq = fopen("texto1.txt", "w");

        if(arq == NULL){
            printf("Erro na abertura do arquivo");
            return 1;
        }

        for(int i = 0; i < 10; i++){
            fprintf(arq, "%d\n", i+1);
        }

        fclose(arq);

        return 0;
    }