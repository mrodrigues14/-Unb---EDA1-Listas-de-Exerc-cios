#include <stdio.h>

#define MAX_A 100
#define MAX_V 10000

int main() {
    int A, V, x, y, i, j, k, max_traffic;
    int traffic[MAX_A + 1], airports[MAX_A + 1];
    int test_case = 1;

    while (1) {
        // Leitura do número de aeroportos e voos
        scanf("%d %d", &A, &V);

        // Verifica se é o fim da entrada
        if (A == 0 && V == 0) {
            break;
        }

        // Inicialização do vetor de tráfego e vetor de aeroportos com tráfego máximo
        for (i = 1; i <= A; i++) {
            traffic[i] = 0;
            airports[i] = 0;
        }

        // Leitura dos voos e atualização do vetor de tráfego
        for (i = 1; i <= V; i++) {
            scanf("%d %d", &x, &y);
            traffic[x]++;
            traffic[y]++;
        }

        // Encontra o valor máximo de tráfego
        max_traffic = 0;
        for (i = 1; i <= A; i++) {
            if (traffic[i] > max_traffic) {
                max_traffic = traffic[i];
            }
        }

        // Encontra os aeroportos com tráfego máximo e armazena no vetor de aeroportos
        k = 0;
        for (i = 1; i <= A; i++) {
            if (traffic[i] == max_traffic) {
                airports[k++] = i;
            }
        }

        // Impressão dos resultados
        printf("Teste %d\n", test_case++);
        for (i = 0; i < k; i++) {
            printf("%d ", airports[i]);
        }
        printf("\n\n");
    }

    return 0;
}
