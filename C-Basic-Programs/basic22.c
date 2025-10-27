/*W.A.P that accepts a character from user & checks whether given character is 
uppercase, lower case, digit or special character.
1) Using built in functions*/
#include<stdio.h>
#include<ctype.h>
int main(){
    char a;
    printf("enter a character: ");
    scanf("%c",&a);
    if(isupper(a)){
        printf("%c is uppercased letter",a);
    }
    else if(islower(a)){
        printf("%c is lowercased letter",a);
    }
    else if(isdigit(a)){
        printf("%c is a digit",a);
    }
    else{
        printf("%c is a special character",a);
    }
    return 0;
}