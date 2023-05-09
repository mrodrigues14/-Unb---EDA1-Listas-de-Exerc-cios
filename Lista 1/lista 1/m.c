#include <stdio.h>

int main() {
    int n, vetor[10000], menor, indice;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    menor = vetor[0];
    indice = 0;
    for (int i = 1; i < n; i++) {
        if (vetor[i] < menor) {
            menor = vetor[i];
            indice = i;
        }
    }

    printf("%d\n", indice);

    return 0;
}