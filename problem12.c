// bitwise operators
#include<stdio.h>

int main(){
    int a = 10,b=15;
    printf("a & b = %d\n",a&b);
    printf("a | b = %d\n",a|b);
    printf("a ^ b = %d\n",a^b);
    printf("~a = %d\n",~a); 
    printf("b>>2 = %d\n",b>>2);
    printf("b<<2 = %d\n",b<<2);
    printf("a<<2 = %d\n",a<<2);
    printf("a>>2 = %d\n",a>>2);
    return 0;
    

    // shortcut for tilde operator if its negative then +1 and if positive then -1
    // ~10 = -11    
    // ~-10 = 9
    //  if a =10 -(a+1) = -11
    // if a = -10 + (-a-1) = 9