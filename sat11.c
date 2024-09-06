#include <stdio.h>

int main() 
{
    int rows=5,count=1;
    for(int i=1;i<=5;i++)
    {
        if(i%2==0)
        {
            for(int j=count+rows-1;j>=count;j--)
            {
                printf("%d ",j);
            }
        }
        else
        {
            for(int j=count;j<count+rows;j++)
            {
                printf("%d ",j);
            }
        }
        count=count+rows;
        printf("\n");
    }
    return 0;
}