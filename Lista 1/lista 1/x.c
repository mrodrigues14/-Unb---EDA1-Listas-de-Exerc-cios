#include <stdio.h>
#include <string.h>

int main() {
    char letra, palavra[1001];
    int num_palavras = 0, num_palavras_com_letra = 0;

    // Lê a letra e a palavra
    scanf("%c\n", &letra);
    fgets(palavra, 1001, stdin);

    // Remove o caractere '\n' do final da palavra
    palavra[strcspn(palavra, "\n")] = '\0';

    // Itera por todas as palavras do texto
    char *ptr = strtok(palavra, " ");
    while (ptr != NULL) {
        num_palavras++;
        if (strchr(ptr, letra) != NULL) {
            num_palavras_com_letra++;
        }
        ptr = strtok(NULL, " ");
    }

    // Calcula e imprime a porcentagem
    float porcentagem = ((float) num_palavras_com_letra / num_palavras) * 100;
    printf("%.1f\n", porcentagem);

    return 0;
}
