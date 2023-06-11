#include<stdio.h>

    int main(){

        FILE *arq;

        arq = fopen("arquivo8.txt", "w");

        if(arq == NULL){
            printf("Erro na abertura do arquivo");
            return 0;
        }

        int flag = 1;

        while(flag != -1){
            int matricula = 0;

            printf("Digite a matricula: ");
            scanf("%d", &matricula);

            if(matricula == -1){
                flag = -1;
                break;
            }else{
                fprintf(arq, "Matricula: %d\n", matricula);

            }

            
        }
        



    }