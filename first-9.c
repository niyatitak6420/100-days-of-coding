//Wap to check if a number is an armstrong number.
#include <stdio.h>

int main() {
    int num, orginal, rem, sum = 0;
    
    printf("Enter a  number: ");
    scanf("%d", &num);
    
    orginal = num;
    
    while (num != 0) {
        rem = num % 10;
        sum = sum + (rem * rem * rem);
        num = num / 10;
    }
    
    if (sum == orginal) {
        printf("%d is an Armstrong number", orginal);
    } else {
        printf("%d is not an Armstrong number", orginal);
    }
    
    return 0;
}