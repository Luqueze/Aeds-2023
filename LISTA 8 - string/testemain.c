#include <stdio.h>

int main(int argc, char *argv[]) {

    int i = 0;
    if (i < 5) {
        printf("Recursao %d\n", i);
        i++;
        main(argc, argv);
    }
    return 0;
}