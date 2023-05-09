#include <stdio.h>
#include <string.h>

void troca_x_por_y(char *str, int n) {
    if (n == 0)
        return;
    if (str[0] == 'x')
        str[0] = 'y';
    troca_x_por_y(str + 1, n - 1);
}

int main() {
    char str[81];
    scanf("%s", str);
    int n = strlen(str);
    troca_x_por_y(str, n);
    printf("%s\n", str);
    return 0;
}