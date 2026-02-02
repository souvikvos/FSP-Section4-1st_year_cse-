#include<stdio.h>

int main(){
    unsigned char a = 0x59;
    a=(a>>4) | (a<<4);
    printf("a = %02X\n", a);
    return 0;
}