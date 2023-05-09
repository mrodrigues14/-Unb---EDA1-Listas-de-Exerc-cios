#include <stdio.h>
#include <string.h>

int main() {
    int n, i, k = 1;
    char nome[21];
    int problemas;

    while (scanf("%d", &n) != EOF) {
        int menor_problemas = 11;
        char nome_menor[21];

        for (i = 0; i < n; i++) {
            scanf("%s %d", nome, &problemas);

            if (problemas < menor_problemas) {
                menor_problemas = problemas;
                strcpy(nome_menor, nome);
            }
        }

        printf("Instancia %d\n%s\n\n", k, nome_menor);
        k++;
    }

    return 0;
}
