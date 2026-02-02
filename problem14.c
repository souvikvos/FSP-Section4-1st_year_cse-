//  to check a number is even or odd in ternary
#include<stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    (n%2==0) ? printf(" %d is Even\n",n) : printf("%d is Odd\n",n);

    return 0;
}