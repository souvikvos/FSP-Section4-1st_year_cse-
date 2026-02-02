#include<stdio.h>

int main(){
    int a = 015 + 0x71 + 5; //015 is octal for 13, 0x71 is hexadecimal for 113   
    printf("%d",a); //13 + 113 + 5 = 131
    return 0;
}