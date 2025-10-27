/*W.A.P that asks user to input data in years and displays the output in months 
and days.*/
#include<stdio.h>
int main(){
    int year,months,days;
    printf("enter number of years: ");
    scanf("%d",&year);
    months=12;
    days=365;
    months=year*months;
    days=year*days;
    printf("number of months: %d\n",months);
    printf("number of days: %d\n",days);
    return 0;
}