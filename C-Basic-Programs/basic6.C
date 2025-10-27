//convert fahrenheit degree to celsius
//(f-32)*1.8
#include<stdio.h>
int main(){
    float tempf,tempc;
    printf("enter your temperature in fahrenheit: ");
    scanf("%f",&tempf);
    tempc=(tempf-32)*5/9;
    printf("your temperature in degree celsius is: %f",tempc);
    return 0;
}
//convert degree celsius to faahrenheit
//(c*9/5)+32
#include<stdio.h>
int main(){
    float tempf,tempc;
    printf("enter your temperature in celsius: ");
    scanf("%f",&tempc);
    tempf=(tempc*9/5)+32;
    printf("your temperature in celsius is %f",tempf);
    return 0;
}