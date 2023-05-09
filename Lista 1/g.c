#include <stdio.h>

int main () {
    int a,b,c,d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a>b && c>d){
        printf("G\n");
    } else if (b>a && d>c) {
        printf("A\n");
    } else {
        printf("G\n");
    }

    return 0;
}