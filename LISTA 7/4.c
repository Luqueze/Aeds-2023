#include <stdio.h>

int verificarTriangulo(int x, int y, int z);

int main() {
    int x, y, z;

    printf("Insira os comprimentos dos lados X, Y e Z do triangulo: ");
    scanf("%d %d %d", &x, &y, &z);

    int tipo = verificarTriangulo(x, y, z);

    switch (tipo) {
        case 0:
            printf("Os comprimentos dos lados nao formam um triangulo valido\n");
            break;
        case 1:
            printf("O triângulo é equilatero\n");
            break;
        case 2:
            printf("O triângulo é isosceles\n");
            break;
        case 3:
            printf("O triângulo é escaleno\n");
            break;
    }

    return 0;
}

int verificarTriangulo(int x, int y, int z) {
    if (x <= 0 || y <= 0 || z <= 0) {
        return 0; // Triângulo invalido se algum lado for menor ou igual a zero
    }
    if (x + y <= z || y + z <= x || x + z <= y) {
        return 0; // Triângulo invalido se a soma de dois lados for menor ou igual ao terceiro lado
    }
    if (x == y && y == z) {
        return 1; // Triângulo equilatero
    } else if (x == y || y == z || x == z) {
        return 2; // Triângulo isosceles
    } else {
        return 3; // Triângulo escaleno
    }
}
