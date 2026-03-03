#include <stdio.h>

int main(){
    int n; 
    scanf("%d",&n);
    long long r=1;
    for(;n;r*=n--);
    printf("%lld",r);
}