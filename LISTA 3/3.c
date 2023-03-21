#include<stdio.h>
    int main(){
        
        float menor = 999, maior = -999, a;

        for (float i = 0; i <= 10; i++){
            printf("Insira o %.0f° numeros reais: ", i+1);
            scanf("%f", &a);

            if(a < menor){
                menor = a;
            }
            
            else if(a > maior){
                maior = a;
            }
            
            
        }

        printf("O menor e %f maior e %f", menor, maior);

        return 0;
    }