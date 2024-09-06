// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
int main() {
    int i,j,k;
    char s1[]="bansal";
    char s2[]="ba";
    
    int m= strlen(s1);
    int n= strlen(s2);
    
    for(i=0; i<=m-n; i++){
        for(j=0; j<m; j++){
            if(s1[i+j]!=s2[j]){
                break;
            }
        }
        if(j==n){
            printf("s2 is substring of s1");
        }
    }
    return 0;
}