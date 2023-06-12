#include<stdio.h>
#include<stdlib.h>

    typedef struct{
        char marca[20];
        char modelo[20];
        char cor[10];
        int ano;


    }carro;
    
    int main(){
        
        carro veiculo[2];

        FILE* arq;

        arq = fopen("arquivo1.txt", "r");

        if(arq == NULL){
            printf("Erro na abertura do arquivo");
            return 1;
        }

        for(int i = 0; i < 2; i++){
            fscanf(arq, "%s %s %s %d", veiculo[i].marca, veiculo[i].modelo, veiculo[i].cor, &veiculo[i].ano);
        }

        for(int i = 0; i < 2; i++){
            printf("%s %s %s %d\n", veiculo[i].marca, veiculo[i].modelo, veiculo[i].cor, veiculo[i].ano);
        }

        fclose(arq);

        return 0;

        

    }