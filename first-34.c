//write a program to swap two numbers without using a third variable.

#include<stdio.h>
int main ()
{
    int a,b;
    printf("Enter Two Number:");
    scanf("%d %d",&a,&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("After Swap we get: a=%b,b=%a\n",a,b);
    return 0;

}

