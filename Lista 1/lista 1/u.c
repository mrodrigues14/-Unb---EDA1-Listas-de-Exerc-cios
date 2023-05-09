#include <stdio.h>
#include <string.h>

int main() {
    char str[1000]; // definindo um array de caracteres com tamanho máximo 1000
    int i;

    // lendo a string
    scanf("%s", str);

    // invertendo a string
    int len = strlen(str);
    for (i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n"); // pulando uma linha no final da saída

    return 0;
}
