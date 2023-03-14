#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void generateParentheses(char* str, int open, int close, int n)
{
    if (close == n) {
        printf("%s\n", str);
        return;
    }
    else {
        if (open > close) {
            str[strlen(str)] = ')';
            generateParentheses(str, open, close + 1, n);
            str[strlen(str) - 1] = '\0';
        }
        if (open < n) {
            str[strlen(str)] = '(';
            generateParentheses(str, open + 1, close, n);
            str[strlen(str) - 1] = '\0';
        }
    }
}

int main()
{
    int n = 3;
    char* str = (char*)malloc(sizeof(char) * (2 * n + 1));
    str[0] = '\0';

    generateParentheses(str, 0, 0, n);

    free(str);
    return 0;
}
