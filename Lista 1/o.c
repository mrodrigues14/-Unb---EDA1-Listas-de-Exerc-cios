#include <stdio.h>

int main() {
    int n, i, j, par[10000], impar[10000], num;
    int count_par = 0, count_impar = 0;

    // lê a entrada
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &num);
        if (num % 2 == 0) {
            par[count_par] = num;
            count_par++;
        } else {
            impar[count_impar] = num;
            count_impar++;
        }
    }

    // imprime os números pares
    for (i = 0; i < count_par; i++) {
        printf("%d ", par[i]);
    }
    printf("\n");

    // imprime os números ímpares
    for (i = 0; i < count_impar; i++) {
        printf("%d ", impar[i]);
    }
    printf("\n");

    return 0;
}
