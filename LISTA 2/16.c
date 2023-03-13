#include<stdio.h>
#include<math.h>

    int main(){

        float x, h, f, g;

        printf("Insira o valor de x: ");
        scanf("%f", &x);

        h = pow(x, 2) - 16;
        
        if(x >= 0){
            f = h;

        }else {
            f = 1;
        }

        if(x > 5){
            g = pow(x, 2) + 16;

        }else{
            g = -x / 2.0;
        }

        printf(" h(x)= %.2f \n f(x) = %.2f \n g(x) = %.2f ", h, f, g);

        return 0;
        
    }

    //teste