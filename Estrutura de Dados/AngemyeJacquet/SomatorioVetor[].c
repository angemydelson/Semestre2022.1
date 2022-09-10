#include <stdio.h>
#include <math.h>
int Somatorio(int n){
    if (n == 0) return vetor[0];
    return vetor[n]+ Somatorio(vetor[n-1]);
}
int main(){
    int n=10;
   
    printf("%d", Somatorio(n));
    return 0;
}