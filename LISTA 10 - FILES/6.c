#include<stdio.h>
    
    int main(){

        FILE* arq;
        

        arq = fopen("texto6.txt", "w");

        int n;
        printf("Insira quantas letras deseja digitar: ");
        scanf("%d", &n);

        char c;
        for(int i = 0; i < n; i++){
            printf("Insira a letra %d: ", i+1);
            scanf(" %c", &c);
            fprintf(arq, "%c ", c);
        }
        
        fclose(arq);

        arq = fopen("texto6.txt", "r");

        int cont = 0;
        char a;
        while((a = fgetc(arq)) != EOF){
            if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u'){
                cont++;
            }
        }

        printf("Quantidade de vogais: %d", cont);

        fclose(arq);

        return 0;

    }