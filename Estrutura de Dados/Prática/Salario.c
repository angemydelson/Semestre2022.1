#include <stdio.h>
int main(){
    int number;
    double horas, salario, total;
    scanf("%i %lf %lf", &number, &horas, &salario);
    total = horas * salario;
    printf("NUMBER = %i\nSALARY = U$ %.2lf\n", number, total);
    return 0;
}