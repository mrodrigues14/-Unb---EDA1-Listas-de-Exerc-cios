#include <stdio.h>

int main() {
    int num, count = 0;
    char decoded_msg[4000];

    // loop para ler os números inteiros em hexadecimal
    while (scanf("%x", &num) != EOF) {
        // extrai cada byte do número inteiro
        for (int i = 0; i < 4; i++) {
            int byte = (num >> (i*8)) & 0xff;
            // verifica se o byte é zero (EOS)
            if (byte == 0) {
                // adiciona a mensagem decodificada ao final
                decoded_msg[count] = '\0';
                // imprime a mensagem decodificada
                printf("%s", decoded_msg);
                return 0;
            }
            // adiciona o caractere correspondente ao byte decodificado
            decoded_msg[count] = byte;
            count++;
        }
    }
    return 0;
}
