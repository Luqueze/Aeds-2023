#include<stdio.h>
#include<stdlib.h>

    int main(){

        int *ptr;
        const int n = 5;

        ptr = (int*) malloc(n * sizeof(int));

        for(int i = 0; i < n; i++){
            printf("Insira o valor %d: ", i+1);
            scanf("%d", ptr + i);
        }

        for(int i = 0; i < n; i++){
            printf("%d ", &ptr[i]);
        }

       int* ptr2 = (int*) malloc(n * sizeof(int));
    
       printf("\nNovos valores: \n");
       for(int i = 0; i < n; i++){
            printf("Insira o valor %d: ", i+1);
            scanf("%d", ptr2 + i);   
       }

       printf("\n");

        for(int i = 0; i < n; i++){
            printf("%d ", &ptr2[i]);
        }

        
        printf("\nNovos valores: \n");
        for(int i = 0; i < n; i++){
            printf("%d ", &ptr[i]);
        }

        free(ptr);
        free(ptr2);

        return 0;


        
    }