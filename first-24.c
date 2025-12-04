// Count even and odd numbers in an array.
#include <stdio.h>
int main() {
    int a[100], n, i, even = 0, odd = 0;
    printf("Enter how many numbers: ");
    scanf("%d", &n);
    printf("Enter the numbers:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for(i = 0; i < n; i++) {
        if(a[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("Even numbers = %d\n", even);
    printf("Odd numbers = %d\n", odd);
    return 0;
}