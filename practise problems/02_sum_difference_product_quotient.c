#include <stdio.h>

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int r[4]={a+b,a-b,a*b,a/b};
    for(int *p=r;p<r+4;p++) printf("%d ",*p);
}