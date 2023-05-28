#include<stdio.h>
#include<string.h>

    int main(){

        char str[50];
        char str2[50];

        printf("Insira uma string: ");
        fgets(str, 50, stdin);

        str[strcspn(str, "\n")] = '\0';  // Remover a quebra de linha do final da string

        int a = strlen(str);

        for(int i = 0, j = a-1; str[i] != '\0' && str[i] != '\n'; i++, j--){
            str2[j] = str[i];
        }
        
        str2[a] = '\0'; // Adicionar o caractere nulo no final da string invertida

        printf("String original: %s\n", str);
        printf("String invertida: %s\n", str2);

        return 0;



    }