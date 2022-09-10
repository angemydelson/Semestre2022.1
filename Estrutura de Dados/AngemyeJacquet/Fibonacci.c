#include <stdio.h>
#include <math.h>
int fib(int n){
    printf("n-1 = %d  n-2 = %d\n",(n-1),(n-2) );
    if (n ==1)
        return 0;
    if (n == 2 )
        return 1;
   
    int numF = fib(n-1) + fib(n-2);
    return numF;
}

int main(){
    printf("Número Fibonacci: %d\n", fib(4));
    // printf("Número Fibonacci: %d\n", fib(4));
    // printf("Número Fibonacci: %d\n", fib(5));
    // printf("Número Fibonacci: %d\n", fib(6));
    return 0;
}