#include<stdio.h>
#include<stdlib.h>

    typedef struct{

            char nome[30];
            char telefone[11];

            char endereço[50];
            

        }dados;

    int main(){
        
        dados cliente1, cliente2;

        printf("insira seu nome: ");
        fgets(stdin,cliente1.nome, 30);

        printf("Insira o telefone: ");
        scanf(" %c", &cliente1.telefone);

        printf("Insira o endereço: ");
        fgets(cliente1.endereço,stdin, 50);

        printf("insira seu nome: ");
        fgets(stdin,cliente2.nome, 30);

        printf("Insira o telefone: ");
        scanf("%d", &cliente2.telefone);

        printf("Insira o endereço: ");
        fgets(stdin, cliente2.endereço, 50);


        return 0;

        
    }