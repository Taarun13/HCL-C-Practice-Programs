#include <stdio.h>

int main(){
    long n,r=0;
    scanf("%ld",&n);
    for(;n;n/=10) r=r*10+n%10;
    printf("%ld",r);
}