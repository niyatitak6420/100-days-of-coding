// Find the sum of array elements.
#include <stdio.h>
int main() {
    int a[100], n, i, sum = 0;
 printf("Enter how many numbers: ");
    scanf("%d", &n);
    printf("Enter the numbers:\n");
    for(i = 0; i < n; i++) 
        {scanf("%d", &a[i]); }
    
    for(i = 0; i < n; i++) 
        {sum = sum + a[i];}
    

    printf("Sum of array elements = %d\n", sum);

    return 0;
}