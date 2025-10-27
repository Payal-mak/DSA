/*W.A.P that asks user to input a character and prints its ASCII value.*/
#include<stdio.h>
int main(){
    char a;
    printf("enter a character: ");
    scanf("%c",&a);
    printf("ASCII value of %c is %d",a,a);
    return 0;
}