/*  programa que receba o código correspondente ao cargo de um funcionário e seu salário atual e mostre 
o cargo, o valor do aumento e seu novo salário, de acordo com a tabela. Caso um código inválido seja informado, 
mostre a mensagem “Código inválido!”. */
#include <stdio.h>

    int main(){

        float sal, nsal, aumento;
        int c; //choice

        printf("Insira seu cargo\n 1.Escrituario\n 2.Secretario\n 3.Caixa\n");
        printf(" 4.gerente\n 5.Diretor\n:");
        if(scanf("%d", &c) < 1 || c > 5){
            puts("Codigo invalido.");
        }else{

            puts("Qual seu salario atual?: ");
            scanf("%f", &sal);


            if(c == 1){
                //valor total novo salario
                nsal = sal * 1.5;

                //valor do aumento
                aumento = nsal - sal; 

                printf("Voce recebeu um aumento de R$%.2f no seu cargo de escrituario, seu salario atual e de R$%.2f", aumento, nsal);
                
                
            }

            else if(c == 2){
                //valor total novo salario
                nsal = sal * 1.5;

                //valor do aumento
                aumento = nsal - sal; 

                printf("Voce recebeu um aumento de R$%.2f no seu cargo de secretario, seu salario atual e de R$%.2f", aumento, nsal);

            }

            else if(c == 3){
                //valor total novo salario
                nsal = sal * 1.5;

                //valor do aumento
                aumento = nsal - sal; 

                printf("Voce recebeu um aumento de R$%.2f no seu cargo de caixa, seu salario atual e de R$%.2f", aumento, nsal);

            }

            
            else if(c == 4){
                //valor total novo salario
                nsal = sal * 1.5;

                //valor do aumento
                aumento = nsal - sal; 

                printf("Voce recebeu um aumento de R$%.2f no seu cargo de diretor, seu salario atual e de R$%.2f", aumento, nsal);

            /* }else{
                puts("Codigo invalido. ");
            } */
        }  
    }