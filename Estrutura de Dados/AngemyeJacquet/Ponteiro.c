#include<stdio.h>

int incr(int n){

    n++;
    return n;
}

void incrp( int *p){

    (*p)++;
}

int main (){

    int r = 5;
    r = incr (r);
    printf("%d\n", r);
    incrp(&r);
    printf("%d\n", r);

    return 0;
}