# include <stdio.h>
# include <math.h>
int Factorial(int n){
    printf("%d  %d  \n", n, n-1);
    if (n==1 || n==0) return 1;
    return n * Factorial(n-1);
}
int main(){
    printf("%d\n", Factorial(6));
    return 0;
}