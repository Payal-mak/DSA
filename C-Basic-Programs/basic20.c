/*W.A.P that accepts student’s marks & calculate total percentage. Give the grade 
according to following criteria.*/
#include<stdio.h>
int main(){
    float m1,m2,m3,m4,m5,percentage; //always take float values for percentage
    printf("enter the marks of 5 subjects: \n");
    scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
    percentage=((m1+m2+m3+m4+m5)/500)*100;
    if(percentage>80){
        printf("grade A");
    }
    else if(percentage>70 && percentage<80){
        printf("grade B");
    }
    else if(percentage>60 && percentage<70){
        printf("grade C");
    }
    else if(percentage>50 && percentage<60){
        printf("grade D");
    }
    else if(percentage>40 && percentage<50){
        printf("grade E");
    }
    else{
        printf("grade F");
    }
    return 0;

}