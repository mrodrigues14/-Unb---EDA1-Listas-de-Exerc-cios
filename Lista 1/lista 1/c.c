#include <stdio.h>
#include <stdlib.h>

int main() {
    int xm, ym, xr, yr;
    scanf("%d %d %d %d", &xm, &ym, &xr, &yr);

    int dist = abs(xr - xm) + abs(yr - ym);
    printf("%d\n", dist);
    return 0;
}