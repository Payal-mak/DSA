#include<stdio.h>
int add(int a, int b){
    return a+b;
}
int main(){
    int a,b;
    printf("input a ");
    scanf("%d",&a);
    printf("input a ");
    scanf("%d",&b);
    int sum = add(a,b);
    printf("result is %d",sum);
}
