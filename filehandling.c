#include<stdio.h>
#include<stdlib.h>
void main(){
    int *p,n,i;
    printf("enter the number of integers: ");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    if(p==NULL){
        printf("Memory not available!");
        exit(1);
    }
    for(i=0;i<n;i++){
        printf("enter an integer: ");
        scanf("%d",p+i);
    }
    for(i=0;i<n;i++){
        printf("%d\t",*(p+i));
    }
}
