#include<stdio.h>

    typedef struct{
        char marca[20];
        char modelo[20];
        char cor[10];
        int ano;


    }carro;
    
    int main(){
        
        carro veiculo[2];

        FILE* arq;

        arq = fopen("arquivo1.txt", "w");

        for(int i = 0; i < 2; i ++){
            printf("Insira a marca do %d carro: ", i+1);
            fgets(veiculo[i].marca, 20, stdin);
            fprintf(arq,"\n%s\n",veiculo[i].marca);

            printf("Insira o modelo do %d carro: ", i+1);
            fgets(veiculo[i].modelo, 20, stdin);
            fprintf(arq,"%s\n",veiculo[i].modelo);

            printf("Insira a cor do %d carro: ", i+1);
            fgets(veiculo[i].cor, 10, stdin);
            fprintf(arq,"%s\n",veiculo[i].cor);

            printf("Insira o ano do %d carro: ", i+1 );
            scanf("%d", &veiculo[i].ano);

            

        }

    }