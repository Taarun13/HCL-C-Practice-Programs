#include <stdio.h>

long f(long n){return n<2?n:f(n-1)+f(n-2);}

int main(){
    int n,i=0;
    scanf("%d",&n);
    long a=0,b=1;
    for(;i<n;i++){printf("%ld ",a);long t=a+b;a=b;b=t;}
    puts("");
    for(i=0;i<n;i++) printf("%ld ",f(i));
}