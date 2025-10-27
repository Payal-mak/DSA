#include<stdio.h>
int main(){
    int m=0;
    int arr4[m];
    int arr1[]={1,2,6,4,5};
    int arr2[]={1,2,7,4,5};
    int arr3[]={1,2,8,4,5};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    int n3 = sizeof(arr3)/sizeof(arr3[0]);
    
    for(int i=0 ; i<=n1 ; i++)
    {
        for(int j=0 ; j<=n2 ; j++)
        {
            if(arr1[i]==arr2[j])
            {
                for(int k=0 ; k<=n3; k++)
                {
                    if(arr2[j]==arr3[k])
                    {
                        m++;
                        arr4[m-1]=arr3[k];
                    }
                }
            }
        }
    }
    for(int l=0;l<m;l++)
    {
        printf("%d  ",arr4[l]);
    }
    printf("\n\nthe number of uncommon elements is : %d",n1+n2+n3-(3*m));
}