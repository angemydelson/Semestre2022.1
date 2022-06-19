#include <stdio.h>
#include <math.h>
int main() {
    double a, c, b, delta, raiz, solucao1, solucao2;
    scanf(" %lf %lf %lf", &a, &b, &c);
    delta = pow(b,2) - (4 * a * c);
    if (delta < 0 || a == 0) {
        printf("Impossivel calcular\n");
    }else {
        raiz = sqrt(delta);
        solucao1 = (-b - raiz) / (2 * a);
        solucao2 = (-b + raiz) / (2 * a);
        printf ( "R1 = %.5lf\n", solucao2);
        printf ( "R2 = %.5lf\n", solucao1);

    }
    return 0;

}