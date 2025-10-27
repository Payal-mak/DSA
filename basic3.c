//input an integer from user
#include<stdio.h>
int main(){
    int integer;
    printf("enter an integer: ");
    scanf("%d",&integer);
    printf("you entered %d\n",integer);
    printf("size of integer %d",sizeof(integer));
    return 0;
}