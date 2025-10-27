#include<stdio.h>
int main()
{
    int max1=0,max2;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    for(int i=0;i<10;i++)
    {
        if(max1<=arr[i])
        {
            max2=max1;
            max1=arr[i];
        }
    }
    printf("%d",max2);
    return 0;
}