#include <stdio.h>
int main() 
{
    for(int i=1;i<=25;i= i+6)
    {
        int j = i;
            for(i;i<j+5;i++)
            {
                printf("%d ",i);
            }
        
            printf("\n");
        
            for(i=i+4;i>j+4;i--)
            {
                printf("%d ",i);
            }
        printf("\n");
    }
    return 0;
}