#include <stdio.h>
int main () {
    int valor, i, num = 0, tot = 1, ang;
    printf("Digite um número: ");
    scanf("%d", &valor);

    for (i=0; i<valor; i++){
        if (i == (valor-1)) {
            printf("%d\n",num);
            break;
        }
        printf("%d ",num);

        ang = num + tot;
        num = tot;
        tot = ang;
        

        
    }
    return 0;
}
