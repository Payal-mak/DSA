//develop a program to print your address
#include<stdio.h>
int main(){
    char a[50];
    printf("enter your address: ");
    scanf("%[^\n]s",a);
    printf("your address is: %s",a);
    return 0;
}