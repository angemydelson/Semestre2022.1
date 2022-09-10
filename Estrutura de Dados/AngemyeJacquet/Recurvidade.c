#include <stdio.h>
#include <math.h>
int Recursividade(int m,int n){
    printf("N:%d  M: %d\n",n,m);
    if (n==0){
        return 0;
    }else {
        return m + (Recursividade(m,n-1));
    }
}
int main(){
    int n, m;
    printf("Digite os números: ");
    scanf("%d %d", &n,&m);
    printf("%d\n",Recursividade(n,m));
    return 0;
}