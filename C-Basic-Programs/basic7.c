//program to find percentage and average of 5 subjects
#include<stdio.h>
int main(){
    float a,b,c,d,e,total,avg,percentage;
    printf("enter your marks in these subjects out of 100: \n");
    printf("SPS: ");
    scanf("%f",&a);
    printf("CP: ");
    scanf("%f",&b);
    printf("AC: ");
    scanf("%f",&c);
    printf("BEE: ");
    scanf("%f",&d);
    printf("FSSI: ");
    scanf("%f",&e);
    total=a+b+c+d+e;
    avg=total/5;
    printf("average: %f\n",avg);
    percentage=(total/500)*100;
    printf("percentage: %f\n",percentage);
    return 0;
}
