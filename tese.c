#include<stdio.h>

int main(){


    int m[6][6] = {{1,1,0,1,1,0},{1,0,0,1,0,1},{0,1,1,0,1,1},{1,0,1,0,1,0},{0,1,0,1,0,1},{1,0,1,0,0,1}};
    int i, j;

    /* for( i = 0; i < 6; i++){
        for( j = 0; j < 6; j++){
            printf("Insira o elemento da linha %d e coluna %d: ", i+1, j+1);
            scanf("%d", &m[i][j]);    
        }
    } */

    for(i = 0; i < 6; i++){
        for(j = 0; j < 6; j++){
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(int i = 0; i < 6; i++){
        j = 0;
        while(m[i][j] == 1){
            m[i][j] = 0;
            j++;
        }

        j = 5;
        while(m[i][j] == 1){
            m[i][j] = 0;
            j++;
        }

    }

    for(i = 0; i < 6; i++){
        for(j = 0; j < 6; j++){
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    return 0;

    
}