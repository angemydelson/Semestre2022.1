#include <stdio.h>
// int resto(int m, int n){
//     if (m<n) return m;
//     return resto(m-n, n);
// }
// int main(){
//     printf("%d\n",resto(11,3));
//     return 0;
// }
typedef struct{
    double real;
    double imag;
}Complexe;

Complexe setComplex (double numReal, double numImag){
    Complexe numComplx ={numReal, numImag};
    return numComplx;
}
Complexe sumComplex(Complexe a, Complexe b){
    Complexe sum = {a.real + b.real, a.imag + b.imag};
    return sum;
}
void print(Complexe print){
   
    printf("Soma = %0.lf + %0.lf i\n", print.real, print.imag);
}
int main(){
    Complexe a= setComplex(3,6);
    Complexe b= setComplex(-1,-2);
    Complexe total = sumComplex(a,b);
    print(total);
    return 0;    
}

