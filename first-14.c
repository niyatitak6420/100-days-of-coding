// WAP to swap the first and last digit of a number.
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num < 10) {
        printf("Number after swapping: %d\n", num);
        return 0;
    }
    int digits = 1, temp = num;
    while (temp >= 10) {
        temp /= 10;
        digits *= 10;
    }  
    int firstDigit = num / digits;
    int lastDigit = num % 10;
    int middle = num % digits / 10;
    int result = lastDigit * digits + middle * 10 + firstDigit;
    printf("Original: %d\n", num);
    printf("After swap: %d\n", result);
    return 0;
}