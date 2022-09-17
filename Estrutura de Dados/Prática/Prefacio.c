#include <stdio.h>
int main() {
    int resto, q, num1, num2;
    int x = 0, y = 0;
    printf("Digite um valor 1: ");
    scanf("%d", &num1);
    printf("Digite um valor2 : ");
    scanf("%d", &num2);
    if (num1>=0) {
        resto = num1 % num2;
        q = num1 / num2;
        printf("%d %d\n", q, resto);
    } else  {
        if (num2 > 0) {
            x = num2;
        } else {
            x = -1 * num2;
        }

        for ( resto = 0 ; resto < x; resto++) {
            y = num1 - resto;
            if (y % num2 == 0) {
                break;
            }
        }
        q = y / num2;
        printf("%d %d\n", q, resto);

    }

    return 0;
}