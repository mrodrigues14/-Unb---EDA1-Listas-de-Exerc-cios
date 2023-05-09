#include <stdio.h>

int main() {
    int a, b, c;

    // Lê os valores escolhidos pelos jogadores
    scanf("%d %d %d", &a, &b, &c);

    // Verifica se algum jogador ganhou e exibe o resultado
    if (a == b && b == c) {
        printf("empate\n");
    } else if (a == b) {
        printf("C\n");
    } else if (a == c) {
        printf("B\n");
    } else {
        printf("A\n");
    }

    return 0;
}
