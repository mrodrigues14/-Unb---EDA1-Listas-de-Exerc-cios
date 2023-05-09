#include <stdio.h>
#include <string.h>

int maior_subcadeia(char *str, char *sub, int n, int m) {
    if (n < m)
        return 0;
    if (strncmp(str, sub, m) == 0 && strncmp(str + n - m, sub, m) == 0)
        //strncmp = compara os primeiros m caracteres de str com os primeiros m caracteres de sub , e os últimos m caracteres de str com os últimos m caracteres de sub
        return n;
    int a = maior_subcadeia(str + 1, sub, n - 1, m);
    int b = maior_subcadeia(str, sub, n - 1, m);
    return a > b ? a : b;
}

int main() {
    char str[101], sub[101];
    scanf("%s%s", str, sub);
    int n = strlen(str), m = strlen(sub);
    printf("%d\n", maior_subcadeia(str, sub, n, m));
    return 0;
}