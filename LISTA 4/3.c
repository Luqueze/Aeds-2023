#include<stdio.h>

    int main(){
        
        int notas[10];
        int i;
        int menor = 100, maior = -1;

        for( i = 0; i < 10; i++){
            printf("Insira o valor da prova %d:", i+1);
            scanf("%d", &notas[i]);
        }

        for(i = 0; i < 10; i++){
            

            if(notas[i] < menor){
                menor = notas[i];
            }
            if(notas[i] > maior){
                maior = notas[i];
            }
            
        }
        
        printf("%d %d", menor, maior);
    }