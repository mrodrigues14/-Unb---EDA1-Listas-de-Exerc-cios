#include <stdio.h>

long int fibonacci(int n) {
    static long int memo[81] = {0};
    if (n <= 2)
        return 1;
    if (memo[n] != 0)
        return memo[n];
    memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
    return memo[n];
}