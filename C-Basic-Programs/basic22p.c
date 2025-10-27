/*W.A.P that accepts a character from user & checks whether given character is 
uppercase, lower case, digit or special character.
1) Using ASCII values*/
#include<stdio.h>
int main(){
    char ch;
    printf("enter a character: ");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90){
        printf("%c is upper cased letter",ch);
    }
    else if(ch>=97 && ch<=122){
        printf("%c is lower cased letter",ch);
    }
    else if(ch>=48 && ch<=57){
        printf("%c is a digit",ch);
    }
    else{
        printf("%c is a special character",ch);
    }
    return 0;
}