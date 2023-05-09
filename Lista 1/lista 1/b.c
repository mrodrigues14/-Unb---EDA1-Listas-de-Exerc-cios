#include <stdio.h>

int main() {
    int L, D, K, P;
    scanf("%d %d %d %d", &L, &D, &K, &P);

    int num_pedagios = L/D;
    int custo_pedagios = num_pedagios * P;
    int custo_gasolina = L * K;
    int custo_total = custo_pedagios + custo_gasolina;

    printf("%d\n", custo_total);
    return 0;
}