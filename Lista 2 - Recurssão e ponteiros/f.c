#include <stdio.h>

long long int soma_digitos(long long int n) {
    if (n == 0)
        return 0;
    else
        return (n % 10) + soma_digitos(n / 10);
}

int main() {
    long long int n;
    scanf("%lld", &n);
    printf("%lld\n", soma_digitos(n));
    return 0;
}