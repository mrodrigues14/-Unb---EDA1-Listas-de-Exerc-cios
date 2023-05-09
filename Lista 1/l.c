#include <stdio.h>

int main() {
    int m, op, resultado, operando;
    char operador;
    op = 1;
    scanf("%d", &m);

    while (m != 0) {
        scanf("%d", &resultado);
        for (int i = 1; i < m; i++) {
            scanf(" %c %d", &operador, &operando);
            if (operador == '+') {
                resultado += operando;
            } else {
                resultado -= operando;
            }
        }
        printf("Teste %d\n%d\n\n", op, resultado);
        op++;
        scanf("%d", &m);
    }

    return 0;
}
