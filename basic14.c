/*W.A.P that asks user to enter principal amount, number of years and rate of 
interest and find the compound interest*/
#include<stdio.h>
#include<math.h>
int main(){
    float prin,time,rate,amount,ci;
    printf("enter principle amount: ");
    scanf("%f",&prin);
    printf("enter number of years: ");
    scanf("%f",&time);
    printf("enter rate of interest: ");
    scanf("%f",&rate);
    amount=prin*pow((1+rate/100),time);
    ci=amount-prin;
    printf("ci is %f",ci);
    return 0;
}