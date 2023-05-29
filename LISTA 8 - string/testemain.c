#include <stdio.h>

int main(int j) {
    printf("Valor de J = %d\n",j);
    static int i = 0;
    if (i < 5) {
        printf("Recursao %d\n", i);
        i++;
        j++;
        printf(" j=%d\n",main(j));
    }
    return j;
}