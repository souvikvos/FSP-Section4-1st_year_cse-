#include<stdio.h>

int main(){
    

    switch(*(2+"AB""CD")){
        case 'A':
        printf(" Case a \n");
        break;
        case 'B':
        printf(" case b \n");
        break;
        case 'C':
        printf(" case c \n");
        break;
    }
    return 0;
}