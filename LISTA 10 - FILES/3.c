#include<stdio.h>
#include<string.h>

    int main(){

        FILE *arq;
        char caractere;
        int counta = 0;

        arq = fopen("texto2.txt", "r");

        if(arq == NULL){
            printf("Erro na abertura do arquivo");
            return 1;
        }

        while((caractere = fgetc(arq)) != EOF){
            if(caractere == 'a')
                counta++;
        }

        printf("A frase tem %d letras 'a'", counta);

        fclose(arq);

        return 0;
        
    }