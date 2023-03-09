#include<stdio.h>
#include<math.h>

    int main(){

        int o; //o = opção escolhida pelo usuario

        puts("No menu a seguir, escolha a operaçao que deseja realizar.\n");

        printf("Menu de opcoes\n 1. Somar dois numeros.\n 2. Raiz quadrada de um número. \n Digite a opcao desejada: ");
        scanf("%d", &o);

        if(o == 1){
            float a,b, soma;
             
            printf("Insira dois numeros para soma-los: ");
            scanf("%f %f", &a, &b);

            soma = a + b;

            printf("O resultado da some e igual a %.2f", soma);
        }
        else if(o == 2){
            int c;

            printf("insira um numero para saber sua raiz quadrada: ");
            scanf("%d", &c);

            c = pow(c, 1/2.0); // *Q* seria melhor criar uma nova variavel para armazenar a raiz de c?

            printf("A raiz quadrada e igual a %d", c);


        }else {
            puts("ERRO: a opção escolhida não existe");
        }


    }