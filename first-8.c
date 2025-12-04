//WAP to take a number as input and print its equivalent binary representation.
#include<stdio.h>
int main(){
    int n,rem;
    int binary=0,place=1;
    printf("Enter a number:");
    scanf("%d",&n);
    while (n>0)
    {
        rem=n%2;
        binary = binary+rem*place;
        n=n/2;
        place=place*10;

    }
    printf("Binary = %d",binary);
    return 0;
    
    
    
}