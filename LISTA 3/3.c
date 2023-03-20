#include<stdio.h>
    int main(){
        
        float menor = 999, maior = -999, a,b;

        for (float i = 0; i <= 10; i++){
            printf("Insira 10 numeros reais: ");
            scanf("%f", &a);

            if(a < menor){
                menor = a;
            }
            
            else if(a > maior){
                maior = b;
            }
            
            
        }

        printf("O menor e %f maior e %f", menor, maior);

        


        



    }