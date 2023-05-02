#include <stdio.h> 

    int main(){ 

        int x, *p, **q; 

        
        p = &x; 
        q = &p; 
        x = 10;
         
        //como q é um ponteiro que referencia outro ponteiro é necessário usar dois asteriscos para acessar o valor de x
        printf("%p", **q); 
        return(0);  
    }