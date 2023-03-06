#include <stdio.h>

    int main(){

        float sal, nsal, vendas, comissao;

        printf("Insira o valor do salario: \n");
        scanf("%f", &sal);

        printf("insira o valor das vendas: \n");
        scanf("%f", &vendas);

        comissao = vendas * 0.04;
        nsal = sal + comissao;

        printf("O valor da comissao e: R$%.2f\n", comissao);
        printf("O valor do salario total e: R$%.2f\n", nsal);
        

        return 0;


        
    }