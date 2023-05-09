#include <stdio.h>
#include <string.h>

void imprime_ao_contrario(char *str, int n) {
    if (n == 0)
        return;
    printf("%c", str[n - 1]);
    imprime_ao_contrario(str, n - 1);
}

int main() {
    char str[501];
    scanf("%s", str);
    int n = strlen(str);
    imprime_ao_contrario(str, n);
    printf("\n");
    return 0;
}