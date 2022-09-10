#include <stdio.h>
// int resto(int n, int m){
//     if (n<m) return 0;
//     return 1 + resto(n-m, m);
// }
// int main(){
//     printf("%d\n",resto(1586,75));
//     return 0;
// }



// int main(){
//     int M = 4;
//     int matriz[4][4] = {
//                         {2,4,6,8},
//                         {5,6,7,8},
//                         {8,6,4,2},
//                         {8,7,6,5} 
//                         };

//     for (int i=0; i<M; i++){
//         for( int j=0; j<M; j++){
//             printf("%d  ", matriz[i][j]);
//         }
//         printf("\n");
//     }
//     for (int i=0; i<M; i++){
//         matriz[i][i] = 1;
//         matriz[i][M-i-1] = 1;
//     }
//     printf("\n=---------------------------------------=\n");

//     for (int i=0; i<M; i++){
//         for( int j=0; j<M; j++){
//             printf("%d  ", matriz[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

typedef struct{
    int inteiro;
    int decimal;
}Float;
Float setFloat(int num1, int num2){
    Float numDecimal = {num1, num2};
    return numDecimal;
}
void print ( Float numero){
    printf("%d.%d\n",numero.inteiro,numero.decimal);
}
Float sumFloat(Float numero1, Float numero2){
    int somaInt = numero1.inteiro + numero2.inteiro;
    int somaDec = numero1.decimal + numero2.decimal;
    if (somaDec > 9){
        somaInt += 1;
        somaDec = (somaDec-10);
    }
    Float total = {somaInt,somaDec};
    return total;
}
int main(){
    Float d= setFloat(3,6);
    print(d);
    Float a= setFloat(0,6);
    Float b= setFloat(35,7);
    Float total = sumFloat(a,b);
    print(total);
    return 0;    
}
