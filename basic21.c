/*W.A.P that accepts 3 nos. and display maximum, minimum & middle no 
entered by the user.*/
#include<stdio.h>
int main(){
    float a,b,c;
    printf("enter three numbers: \n");
    scanf("%f%f%f",&a,&b,&c);
    if(a>b && a>c){
        if (b>c){
            printf("%f is maximum number\n",a);
            printf("%f is middle number\n",b);
            printf("%f is minimum number\n",c);
        }
        else if(c>b){
            printf("%f is maximum number\n",a);
            printf("%f is middle number\n",c);
            printf("%f is minimum number\n",b);
        }
    }
    if(b>a && b>c){
        if (a>c){
            printf("%f is maximum number\n",b);
            printf("%f is middle number\n",a);
            printf("%f is minimum number\n",c);
        }
        else if(c>a){
            printf("%f is maximum number\n",b);
            printf("%f is middle number\n",c);
            printf("%f is minimum number\n",a);
        }
    }
    if(c>a && c>b){
        if (a>b){
            printf("%f is maximum number\n",c);
            printf("%f is middle number\n",a);
            printf("%f is minimum number\n",b);
        }
        else if(b>a){
            printf("%f is maximum number\n",c);
            printf("%f is middle number\n",b);
            printf("%f is minimum number\n",a);
        }
    }
    return 0;

}