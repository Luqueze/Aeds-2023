#include<stdio.h>

    int main(){

        int v[10], i, aux = 0, count = 0, soma = 0;

        for(i = 0; i < 10; i++){
            printf("Insira o %d valor: ", i+1);
            scanf("%d", &v[i]);     
        }

        for(i = 0; i < 10; i++){
            if(v[i] < aux){
                count ++;
            } 
            else if(v[i] > aux){
                soma += v[i];

            }
        }


        printf("A quantidade de numeros negativos e:%d enquanto a soma e %d", count, soma);
        return 0;    
    }