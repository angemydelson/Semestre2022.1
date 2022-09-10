#include <stdio.h>
#include <math.h>
int Recursividade(int m,int n){
    printf("%d * %d  = %d\n",m,n, n*m);
    if (n > 9){
        return n;
    }else {
        return m + (Recursividade(m,n+1));
    }
}
int main(){
    int n, m = 0;
    printf("Tabuada de: ");
    scanf("%d",&n);
    Recursividade(n,m);
    return 0;
}