#include <stdio.h>
#include <math.h>
int main() {
    int a, c, b;
    scanf(" %d %d %d", &a, &b, &c);
    if ( a > b && a > c) {
        printf("%d eh o maior\n", a);
    } else if ( b > a && b > c ) {
        printf("%d eh o maior\n", b);

    } else if ( c > a && c > b) {
        printf("%d eh o maior\n", c);
    }
    return 0;

}