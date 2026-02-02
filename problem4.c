#include<stdio.h>

int main(){
    int a = -1 , b= 10;
    if(++a && ++b){
        printf("In If: a = %d, b = %d", a, b);
    }
    else{
        printf("In Else: a = %d, b = %d", -a, -b);
    }
    return 0;
}