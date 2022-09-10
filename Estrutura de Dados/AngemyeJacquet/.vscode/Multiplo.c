#include <stdio.h>
int resto(m,n){
    if (m<n) return m;
    return resto(m-n, n);
}
int main(){
    resto(11,3);
}