/*W.A.P that asks user to input two nos. and display addition, subtraction, 
multiplication and division of it.*/
//using switch case 
#include<stdio.h>
int main(){
    char op;
    double a,b;
    printf("choose operator[+,-,*,/]: ");
    scanf("%c",&op);
    printf("enter two numbers: ");
    scanf("%lf%lf",&a,&b);
    
    switch(op){
        case '+':
        printf("sum is: %lf+%lf=%lf",a,b,a+b);
        break;
        case '-':
        printf("difference is: %lf-%lf=%lf",a,b,a-b);
        break;
        case '*':
        printf("product is: %lf*%lf=%lf",a,b,a*b);
        break;
        case '/':
        printf("quotient is: %lf/%lf=%lf",a,b,a/b);
        break;
        default:
        printf("choose a valid operator!");
        break;
    }
    return 0;
}