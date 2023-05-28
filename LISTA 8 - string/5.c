#include<stdio.h>
#include<ctype.h>

    int main(){
        
        char str[50];
        int letras = 0;
        int numeros = 0;
        int outros = 0;

        printf("Insira uma string: ");
        fgets(str, 50, stdin);

        for(int i = 0; str[i] != '\0' && str[i] != '\n'; i++){
            if(isalpha(str[i])){
                letras++;
            }else if(isdigit(str[i])){
                numeros++;
            }else{
                outros++;
            }
        }

        printf("Letras: %d\n", letras);
        printf("Numeros: %d\n", numeros);
        printf("Outros: %d\n", outros);

        return 0;
             
    }