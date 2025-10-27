//c program to find if a number is positive or not
#include<stdio.h>  
int main(){
    int a;
    printf("enter an integer: \n");
    scanf("%d",&a);
    (a>0)?printf("%d is positive",a):printf("%d is negative",a);
    return 0;
}