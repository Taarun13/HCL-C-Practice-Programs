#include <stdio.h>

int main(){
    char c;
    scanf(" %c",&c);
    ("aeiouAEIOU"[({char *p="aeiouAEIOU";int f=0;for(;*p;p++)if(*p==c)f=1;f;})]?puts("Vowel"):
    ((c>='a'&&c<='z')||(c>='A'&&c<='Z'))?puts("Consonant"):
    (c>='0'&&c<='9')?puts("Digit"):puts("Special");
}