

#include <stdio.h>
#include <math.h>

int main() {
    int v[100], i;

    for(i = 0; i < 100; i++){
        if(i % 2 == 0){
            v[i] = pow(i, 2);
        }else{
            v[i] = pow(i,3);
        }         
    }

    for(i = 0; i < 100; i ++){
        printf("%d\n",v[i]);
        
    }
    return 0;
}