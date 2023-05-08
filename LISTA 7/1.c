#include<stdio.h>
#include<stdlib.h>

    int aritmetica(int nota[3]);    
    int ponderada(int nota[3]);

    int main(){

        int notas[3];
        char letra;

        for(int i = 0; i < 3; i++){
            printf("Digite a nota do aluno da prova %d: ", i+1);
            scanf("%d", &notas[i]);
        }

        printf("Digite A para aritmetica ou P para ponderada: ");
        scanf(" %c", &letra);

        if(letra == 'A'){
            printf("A media aritmetica e: %d\n", aritmetica(notas));
        }
        else if(letra == 'P'){
            printf("A media ponderada e: %d\n", ponderada(notas));
        }
        else{
            printf("Letra invalida\n");
        }

    }

    int aritmetica(int nota[3]){
        float media = 0;
        for(int i = 0; i < 3; i++){
            media += nota[i];
        }
        media /= 3;
        return media;
    }

    int ponderada(int nota[3]){
        float media = 0;
        for(int i = 0; i < 3; i++){
            media += nota[i];
        }
        media /= 3;
        return media;
    }