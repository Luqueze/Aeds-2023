#include<stdio.h>

    int main(){

        FILE *arq;

        arq = fopen("arquivo.txt", "w");

        if(arq == NULL){
            printf("Erro na abertura do arquivo");
            return 0;
        }

        
    }