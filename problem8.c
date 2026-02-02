#include<stdio.h>
int main(){
    float b = 0.9;

    if(b==0.9f){
        printf("Sachin"); /* It will directly go into else block because every condition inside 
        if is evaluated with double precision by default in C11 standard*/
    }
    else{
        printf("Rahul");
    }
    return 0;
}

// so to execute if block we can use 0.9f instead of 0.9 in the condition so that both becomes same