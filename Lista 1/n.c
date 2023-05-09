#include <stdio.h>

int main() {
    int n, x, i, vetor[10000];  // vetor pode ter no máximo 10000 elementos
    int encontrado = 0;  // flag para indicar se o número x foi encontrado no vetor

    // lê a entrada
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }
    scanf("%d", &x);

    // verifica se x está no vetor
    for (i = 0; i < n; i++) {
        if (vetor[i] == x) {
            encontrado = 1;
            break;
        }
    }

    // imprime o resultado
    if (encontrado) {
        printf("pertence\n");
    } else {
        printf("nao pertence\n");
    }

    return 0;
}
