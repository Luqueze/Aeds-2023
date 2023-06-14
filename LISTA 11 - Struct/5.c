#include<stdio.h>


    typedef struct{
        int cod;
        char nome[30];
        float preco;
    }produto;

    void exibe(produto p);
    void exibe2(produto p[], int cod);
    int main(){

        produto p[5];
        int i;

        for(i = 0;i < 5; i++){
            printf("Digite o codigo do produto: ");
            scanf("%d",&p[i].cod);
            printf("Digite o nome do produto: ");
            fgets(p[i].nome, 30, stdin);
            fgets(p[i].nome, 30, stdin);
            printf("Digite o preco do produto: ");
            scanf("%f",&p[i].preco);
        }

        for(i = 0;i < 2; i++){
            exibe(p[i]);
        }

        return 0;


    }

    //função que recebe os a estrutura e exibe suas informações
    void exibe(produto p){

        printf("Codigo: %d\n",p.cod);
        printf("Nome: %s\n",p.nome);
        printf("Preco: %.2f\n",p.preco);

    }

    
    void exibe2(produto p[], int cod){

        int i;

        for(i = 0;i < 5; i++){
            if(p[i].cod == cod){
                printf("Codigo: %d\n",p[i].cod);
                printf("Nome: %s\n",p[i].nome);
                printf("Preco: %.2f\n",p[i].preco);
            }
        }

    }



        
