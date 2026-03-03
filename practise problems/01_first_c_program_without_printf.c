#include <unistd.h>

int main(){
    char s[]="First C Program\n";
    write(1,s,sizeof(s)-1);
    return 0;
}