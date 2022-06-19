#include <stdio.h>
int main(){
    int num1, num2;
    double area;
    scanf("%d %d", &num1, &num2);
    area = (num1 * num2)/ 2.0;
    printf("%.2lf\n", area);

    return 0;
}
