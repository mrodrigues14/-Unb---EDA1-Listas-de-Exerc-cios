#include <stdio.h>

int main() {
    char str[1000];
    scanf("%s", str);
    int tamanho = 0;
    while (str[tamanho] != '\0') {
        tamanho++;
    }
    printf("%d\n", tamanho);
    return 0;
}
