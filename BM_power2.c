#include <stdio.h>

int isPowerOfTwo(int n)
{
    if(n > 0 && (n & (n - 1)) == 0)
        return 1;
    else
        return 0;
}

int main()
{
    printf("Enter a number: ");
    int n;
    scanf("%d", &n);

    if(isPowerOfTwo(n))
        printf("True");
    else
        printf("False");

    return 0;
}