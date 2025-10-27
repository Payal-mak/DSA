//find hcf
#include<stdio.h>
int main(){
    int min,num1,num2,hcf; 
    printf("enter two numbers: ");
    scanf("%d%d",&num1,&num2);
    min = (num1<num2) ? num1 : num2;
    for(int i=1; i<=min; i++)
    {
        //If i is factor of both number
        if(num1%i==0 && num2%i==0){
            hcf = i;
        }
    }

    printf("HCF of %d and %d = %d\n", num1, num2, hcf);
    return 0;
}