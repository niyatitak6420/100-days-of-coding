//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include<stdio.h>
int main(){
    int length,breadth,Perimeter,Area ;
    printf("enter the length:");
    scanf("%d",&length);
    printf("enter the breadth:");
    scanf("%d",&breadth);
    Area=length*breadth;
    Perimeter=2*(length+breadth);
    printf("area of rectangle=%d\n",Area);
    printf("perimeter of a rectangle %d\n",Perimeter);
    return 0;
}

