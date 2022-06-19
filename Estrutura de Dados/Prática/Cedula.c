#include <stdio.h>
int main() {
    int valor, reste;
    printf("Digite um valor: ");
    scanf("%d" , &valor);
    printf("%d\n",valor);
    printf("%d nota(s) de R$ 100,00\n", valor / 100);
    reste = valor % 100;
    printf("%d nota(s) de R$ 50,00\n", reste / 50);
    reste = reste % 50;
    printf("%d nota(s) de R$ 20,00\n", reste / 20);
    reste = reste % 20;
    printf("%d nota(s) de R$ 10,00\n", reste / 10);
    reste = reste % 10;
    printf("%d nota(s) de R$ 5,00\n", reste / 5);
    reste = reste % 5;
    printf("%d nota(s) de R$ 2,00\n", reste / 2); 
    reste = reste % 2;
    printf("%d nota(s) de R$ 1,00\n", reste / 1); 
    return 0;
}
