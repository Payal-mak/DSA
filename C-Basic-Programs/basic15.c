/*W.A.P to compute distance between two points (x1, y1) & (x2, y2) using the 
following formula.
D2 = (x2-x1)2 + (y2-y1)2*/
#include<stdio.h>
#include<math.h>
int main(){
    int x1,x2,y1,y2,distance;
    printf("enter x1 coordinate: ");
    scanf("%d",&x1);
    printf("enter y1 coordinate: ");
    scanf("%d",&y1);
    printf("enter x2 coordinate: ");
    scanf("%d",&x2);
    printf("enter y2 coordinate: ");
    scanf("%d",&y2);
    distance=pow((x2-x1),2)+pow((y2-y1),2);
    printf("distance between two points is: %d",distance);
    return 0;
}