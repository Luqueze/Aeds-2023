#include<stdio.h>

    int main(){

        int contador5 = 0, contador = 0, i, a;


            do{

                printf("Insira os numeros desejados: ");
                scanf("%d", &a);

                contador ++;

                if(a == 5){
                    contador5 ++;
                }

            }while(a != -1);
                  

            
        printf("A quantidade de numeros inseridas foi %d e o 5 foi digitado %d vezes.", contador - 1, contador5);

        return 0;
    
}    