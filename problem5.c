#include<stdio.h>

int main(){
    int a = 1 , b= 10;
    if(++a || ++b){
        printf("In If: a = %d, b = %d", a, b);
    }
    else{
        printf("In Else: a = %d, b = %d", -a, -b);
    }
    return 0;
}

/*with and operator if it gets o once it wont evaluate the rest, same for or operator if it gets 1
once it wont evaluate the rest */