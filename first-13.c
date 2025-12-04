//WAP to find the product of odd digits of a number.
#include <stdio.h>
int main() {
    int num, digit, product = 1;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    while (num > 0) {
        digit = num % 10;
        if (digit % 2 == 1) {
            product *= digit;
        }
        num /= 10;
    }
    
    printf("Product: %d\n", product);
    return 0;
}