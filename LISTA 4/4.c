#include<stdio.h>
#include<math.h>

    int main(){
        int v[30], i;

        for(i = 0; i < 30; i ++){
            v[i] = pow(i, 2);
        }

        for(i = 0; i < 30; i++){
            printf("%d ", v[i]);
        }
        return 0;
    }