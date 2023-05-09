#include <stdio.h>

int main() {
    int n, i, x;
    scanf("%d", &n);
    int v[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    printf("\n");
    for(i = 0; i < n; i++) {
        if(v[i] % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    for(i = 0; i < n; i++) {
        if(v[i] % 2 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
