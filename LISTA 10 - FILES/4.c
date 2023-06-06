#include<stdio.h>

    int main(){

        FILE* arq;

        arq = fopen("texto4.txt", "r");

        if(arq == NULL){
            printf("Erro na abertura do arquivo");
            return 1;
        }

        char c;
        while((c = fgetc(arq)) != EOF){
            printf("%c", c);
        }

        fclose(arq);

        return 0;
    }