#include <stdio.h>
#include <math.h>

int main(){
    int n,i=2,f=1;
    scanf("%d",&n);
    for(;i<=sqrt(n);i++) if(!(n%i)) f=0;
    f&&n>1?puts("Prime"):puts("Not Prime");
}