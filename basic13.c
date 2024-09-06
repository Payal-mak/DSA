/*W.A.P that asks user to enter principal amount, number of years and rate of 
interest and find the simple interest*/
#include<stdio.h>
int main(){
    float prin,time,rate,si;
    printf("enter principle amount: ");
    scanf("%f",&prin);
    printf("enter number of years: ");
    scanf("%f",&time);
    printf("enter rate of interest: ");
    scanf("%f",&rate);
    si=(prin*time*rate)/100;
    printf("simple interest is: %f",si);
    return 0;
}