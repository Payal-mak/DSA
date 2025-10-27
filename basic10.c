/*W.A.P that asks user to input two nos. and swaps the value of it.
1) using 3 variables */
#include<stdio.h>
int main(){
    int a,b,temp;//a=1,b=2,temp
    printf("enter two numbers: \n");
    scanf("%d%d",&a,&b);
    printf("first number: %d\n",a);
    printf("second number: %d\n",b);
    temp=a;    //temp=1
    a=b;       //a=2
    b=temp;    //b=1 
    printf("first number: %d\n",a);
    printf("second number: %d\n",b);
    return 0;
}