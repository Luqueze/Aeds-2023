/* Uma  empresa  decide  dar  um  aumento  de  30%  aos  funcionários  com  salário  inferior  à  R$700,00  e  10%  aos 
funcionários  com  salário  superior  ou  igual  à  R$700,00.  Faça  um  algoritmo  que  leia  o  salário  do  funcionário, 
calcule o reajuste e mostre o novo salário */
#include<stdio.h>
    
    int main(){

        float sal, nsal;
        
        printf("Insira o valor do seu salario: ");
        scanf("%f", &sal);

        if(sal < 700){

            nsal = 700 * 1.3;
            printf("Seu novo salario e de R$%.2f", nsal);

        }else{

            nsal = 700 * 1.1;
            printf("Seu novo salario e de R$.%2f", nsal);

        }

        return 0;
    }