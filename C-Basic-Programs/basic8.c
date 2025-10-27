/*W.A.P that will ask user to input a character, integer and a float value and 
display the same back to the screen.*/
#include<stdio.h>
int main(){
    int a;
    float b;
    char c;
    printf("enter a character: ");//always take character input first
    scanf("%c",&c);
    printf("enter an integer: ");
    scanf("%d",&a);
    printf("enter a float value: ");
    scanf("%f",&b);
    printf("you entered: %d,%f,%c",a,b,c);
    return 0;
}