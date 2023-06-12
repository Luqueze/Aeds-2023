#include<stdio.h>
#include<stdlib.h>

    int main(){

        FILE *arq;

        arq = fopen("arquivo8.txt", "w");

        if(arq == NULL){
            printf("Erro na abertura do arquivo");
            return 0;
        }

        int flag = 1;

        while(flag != -1){
            int matricula;
            int telefone;

            printf("\nDigite a matricula: ");
            scanf("%d", &matricula);

            


            if(matricula == -1){
                flag = -1;
                break;
            }else{
                printf("Digite o telefone: ");
                scanf("%d", &telefone);
                fprintf(arq, "Matricula: %d\n", matricula);
                fprintf(arq, "Telefone: %d\n", telefone);

            }

        }

        fclose(arq);

        arq = fopen("arquivo8.txt", "r");

        if(arq == NULL){
            printf("Erro na abertura do arquivo");
            return 0;
        }

        int choice;
        printf("Deseja ver os dados inseridos ? 1 - Sim | 2 - Nao\n");
        scanf("%d", &choice);

        if(choice == 1){
            char c;
            while((c = fgetc(arq)) != EOF){
                printf("%c", c);
            }
        }

        fclose(arq);

        return 0;

        



    }