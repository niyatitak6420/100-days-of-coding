//WAP to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>


int main(){
    float a,b,c;
    printf("Enter value to a,b,c: ");
    scanf("%f %f %f",&a,&b,&c);
    float d=((b*b)-4*a*c);
    if(d==0)
    {
        float r=(-b+sqrt(d))/(2*a);
        printf("Roots are real and same :%.0f",r);
        
    }
    else if(d>0)
    {
        float r1=(-b+sqrt(d))/(2*a);
        float r2=(-b-sqrt(d))/(2*a); 
        printf("Roots are real and different:%.0f , %.0f ",r1,r2);   
    }
    else 
    {
        printf("Roots are complex");
    }
    return 0;
}