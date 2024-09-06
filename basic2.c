// C program to demonstrate printing of 
// our own name using scanf()
#include<stdio.h>
void main(){
  char name[50];
  printf("enter your name: ");
  scanf("%[^\n]s",name);
  printf("your name is %s",name);
}