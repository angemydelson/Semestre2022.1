#include <stdio.h>
 
int main() {
 
    float A, B;
    printf("Digite o primeiro valor: ");
    scanf("%lf",&A);
    printf("Digite o segundo valor: ");
    scanf("%lf",&B);
    float C = ((A*0.35+B*0.75)-1);
    printf("MEDIA = %5.lf\n",C);
 
    return 0;
}