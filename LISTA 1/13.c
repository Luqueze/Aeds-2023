 /* Um  funcionário  recebe  um  salário  fixo mais  4%  de  comissão  sobre  as vendas.  Faça  um  algoritmo  que  receba  o 
salário fixo do funcionário e o valor de suas vendas no mês, calcule e mostre a comissão e seu salário final */

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