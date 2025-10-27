#include<stdio.h>
int main(){
    int a,b;
    printf("enter two numbers: ");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the two numbers are: ");
    printf("a=%d",a);
    printf("b=%d",b);
    return 0;
}