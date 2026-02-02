#include<stdio.h>

int main(){
    int a  =2;
    if(a--,--a,a){
        printf("The dalai lama");
    }
    else{
        printf("Jim Rogers");
    }
    return 0;
}


/*So for the post dencrement operator first the value 2 is becoming 1 after the coma, then due 
to  the pre decrement woperator the 1 becomes so and the a is at last so the last value 
assigned to a is zero 

so it enters the else block and prints jim rogers
if the value of a was 3 then it would have printed the dalai lama because the
last value assigned to a would be 1
*/