#include <stdio.h>
int resto(int n, int m){
    if (n<m) return 0;
    return 1 + resto(n-m, m);
}
int main(){
    printf("%d\n",resto(57,7));
    return 0;
}