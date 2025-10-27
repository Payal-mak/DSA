//W.A.P to input 3 numbers and print the maximum out of them.
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter three numbers: \n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c){
        printf("%d is maximum",a);
    }
    else if(b>a && b>c)
    {
        printf("%d is maximum",b);
    }
    else if(c>a && c>b){
        printf("%d is maximum",c);
    }
    return 0;
    
}