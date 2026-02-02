/*
80>= and <=89 E

*/

#include<stdio.h>

int main(){
    int marks;
    printf("Enter your marks: ");
    scanf("%d",&marks);
    if(marks>=90){
        printf("Grade 0\n");
    }
    else if(marks>=80){
        printf("Grade E\n");
    }
    else if(marks>=70){
        printf("Grade A\n");
    }
    else if(marks>=60){
        printf("Grade B\n");
    }
    else if(marks>=50){
        printf("Grade c\n");
    }
    else if(marks>=40){
        printf("Grade D\n");
    }
    else if(marks<40){
        printf("Sorry bhai but fail hogaye hai app");
    }
}