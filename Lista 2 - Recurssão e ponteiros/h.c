#include <stdio.h>
#include <string.h>

int conta_pares(char *str, int n) {
    if (n < 3)
        return 0;
    if (str[0] == str[2])
        return 1 + conta_pares(str + 1, n - 1);
    else
        return conta_pares(str + 1, n - 1);
}

int main() {
    char str[201];
    scanf("%s", str);
    int n = strlen(str);
    printf("%d\n", conta_pares(str, n));
    return 0;
}