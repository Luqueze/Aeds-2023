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