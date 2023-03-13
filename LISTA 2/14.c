
#include <stdio.h>

int main() {
    float n1, n2;

    printf("Insira n1 e n2: ");
    scanf("%f %f", &n1, &n2);

    if (n1 > n2) {
        n1 += 10;
        n2 = n1 + 10;
    } else {
        printf("n1 é menor ou igual a n2\n");
    }

    printf("n1 = %.2f, n2 = %.2f\n", n1, n2);

    return 0;
}
