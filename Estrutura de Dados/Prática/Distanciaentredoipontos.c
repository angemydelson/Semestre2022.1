// #include <stdio.h>
// #include <math.h>
// int main() {
//     float a, c, b;
//     scanf("%f %f", &a, &b);
//     c = sqrt(((a * 2)-(a*1)) + ((b * 2)-(b*1)));
//     printf("%.4f", c);
//     return 0;

// }
#include <stdio.h>
#include <math.h>
int main() {
    float a, c, b, soma1, soma2;
    float vetor [3];
    int i, j, aux;
    for( i= 0; i<3; i++){
        scanf("%f", & vetor[i]);

    }
    
    for( i= 0; i<3; i++){
        for (j=i+1; j < 4; j++ ){
           
            if ( vetor[i] < vetor[j]){
            aux = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = aux;
            }
        }

    }
    
    a = vetor[0];
    b = vetor[1];
    c = vetor[2];
    soma2 = b + c;
    if (a >= b + c){ 
        printf("NAO FORMA TRIANGULO\n");
    } else if (a * a == b * b + c * c) {
        printf("TRIANGULO RETANGULO\n");
    } else if (a * a > b * b + c * c) {
        printf("TRIANGULO OBTUSANGULO\n");
    }else if (a * a < b * b + c * c) {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if (a == b && b == c) {
        printf("TRIANGULO EQUILATERO\n");
    }else if (a == b || b == c){

     printf("TRIANGULO ISOSCELES\n");
    }
    
    
    
    
    
    return 0;

}