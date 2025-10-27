//simple calculator using switch case 
#include<stdio.h>
int main(){
    char op;
    double a,b;
    printf("choose an operator[+,-,*,/]: ");
    scanf("%c",&op);
    printf("enter two numbers: ");
    scanf("%lf%lf",&a,&b);
    switch(op){
        case '+':
        printf("%lf + %lf = %lf",a,b,a+b);
        break;
        case '-':
        printf("%lf - %lf = %lf",a,b,a-b);
        break;
        case '*':
        printf("%lf * %lf = %lf",a,b,a*b);
        break;
        case '/':
        printf("%lf / %lf = %lf",a,b,a/b);
        break;
        default:
        printf("kindly choose a valid operator!");
        break;
    }
    return 0;
}