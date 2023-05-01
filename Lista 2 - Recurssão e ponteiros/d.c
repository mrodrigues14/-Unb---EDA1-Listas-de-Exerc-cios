#include <stdio.h>
#include <string.h>

void print_string_without_x(char* str) {
    if (*str == '\0') {  // caso base: a string é vazia, termina a recursão
        return;
    }

    if (*str != 'x') {  // se o caractere atual não é 'x', imprime-o
        printf("%c", *str);
    }

    print_string_without_x(str + 1);  // chama a função recursivamente para o próximo caractere
}

int main() {
    char string[101];
    scanf("%100s", string);  // lê a string de entrada, limitando a 100 caracteres

    print_string_without_x(string);  // chama a função recursiva para imprimir a string sem os caracteres 'x'

    printf("\n");  // imprime uma nova linha no final da saída

    return 0;
}
