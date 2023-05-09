#include <stdio.h>

int main() {
    int a, b, c, x, y, z;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &x, &y, &z);

    int max_containers_x = x / a;
    int max_containers_y = y / b;
    int max_containers_z = z / c;

    int max_containers = max_containers_x * max_containers_y * max_containers_z;

    printf("%d\n", max_containers);
    return 0;
}
