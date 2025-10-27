#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a,b,c;
    a=n%10;
    n=n/10;
    b=n%10;
    n=n/10;
    c=n;
    if(a==b && b==c)
    {
        printf("all are equal");
    }
    else if(a==b || b==c || a==c)
    {
        printf("neither equal nor same");
    }
    else
    {
        printf("all are different");
    }
    return 0;
}