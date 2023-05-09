#include <stdio.h>

#define MAX 100

int main() {
    int n;
    int mapa1[MAX][MAX], mapa2[MAX][MAX];
    int soma[MAX][MAX];

    // leitura da dimensão do mapa
    scanf("%d", &n);

    // leitura dos mapas
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mapa1[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mapa2[i][j]);
        }
    }

    // soma dos valores dos mapas
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            soma[i][j] = mapa1[i][j] + mapa2[i][j];
        }
    }

    // impressão do resultado
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", soma[i][j]);
        }
        printf("\n");
    }

    return 0;
}
