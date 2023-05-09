#include <stdio.h>
#include <ctype.h>

int main() {
    int n, m, a, k, i, letra_maiuscula = 0, digito = 0, caract_especial = 0;
    char senha[1001];

    // Passo 1: ler os valores de N, M, A e K
    scanf("%d %d %d %d", &n, &m, &a, &k);

    // Passo 2: ler a senha
    scanf("%s", senha);

    // Passo 3: verificar tamanho da senha
    if (strlen(senha) > n) {
        printf("Ufa :)\n");
        return 0;
    }

    // Passo 4: verificar letras maiúsculas
    for (i = 0; senha[i] != '\0'; i++) {
        if (isupper(senha[i])) {
            letra_maiuscula++;
        }
    }
    if (letra_maiuscula < m) {
        printf("Ufa :)\n");
        return 0;
    }

    // Passo 5: verificar dígitos
    for (i = 0; senha[i] != '\0'; i++) {
        if (isdigit(senha[i])) {
            digito++;
        }
    }
    if (digito < a) {
        printf("Ufa :)\n");
        return 0;
    }

    // Passo 6: verificar caracteres especiais
    for (i = 0; senha[i] != '\0'; i++) {
        if (!isalpha(senha[i]) && !isdigit(senha[i])) {
            caract_especial++;
        }
    }
}