#include<stdio.h>
    int repete(int vetor[], int n, int i){

        if (i == 0)
            return 0;
        else if (vetor[i - 1] == n)
            return 1 + repete(vetor, n, i - 1);
        else
            return repete(vetor, n, i - 1);
    }
    
    int main(){
        
        int n;
        int vetor[10] = {1, 2, 3, 4, 5, 6, 5, 8, 5 ,10};

        printf("Insira o numero que deseja conferir quantas vezes repete: ");
        scanf("%d", &n);

        printf("O numero %d repete %d vezes", n, repete(vetor, n, 10));

        return 0;
    }

    