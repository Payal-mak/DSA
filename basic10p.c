/*W.A.P that asks user to input two nos. and swaps the value of it.
1) using 2 variables */
#include<stdio.h>
int main(){
    int a,b;
    printf("enter first number: ");
    scanf("%d",&a);

    printf("enter second number: ");
    scanf("%d",&b);
    
    a=a+b;
    b=a-b;
    a=a-b;

    printf("first number is: %d",a);
    printf("second number is: %d",b);
    return 0;

}