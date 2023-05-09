#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int matriz[n][m];
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int max_soma = 0;
    for(int i=0; i<n; i++) {
        int soma = 0;
        for(int j=0; j<m; j++) {
            soma += matriz[i][j];
        }
        if(soma > max_soma) {
            max_soma = soma;
        }
    }

    for(int j=0; j<m; j++) {
        int soma = 0;
        for(int i=0; i<n; i++) {
            soma += matriz[i][j];
        }
        if(soma > max_soma) {
            max_soma = soma;
        }
    }

    printf("%d\n", max_soma);
    return 0;
}
