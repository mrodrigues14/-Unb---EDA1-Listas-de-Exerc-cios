#include <stdio.h>

void imprime_ao_contrario(int *v, int n) {
    if (n == 0)
        return;
    printf("%d\n", v[n - 1]);
    imprime_ao_contrario(v, n - 1);
}

int main() {
    int v[1000], n = 0, limite;
    while (1) {
        int x;
        scanf("%d", &x);
        if (x == 0)
            break;
        v[n++] = x;
    }
    scanf("%d", &limite);

    int soma = 0, ultimos[1000], m = 0;
    for (int i = 0; i < n; i++) {
        soma += v[i];
        if (soma > limite) {
            ultimos[m++] = v[i];
            soma = 0;
        }
    }

    imprime_ao_contrario(ultimos, m);

    return 0;
}