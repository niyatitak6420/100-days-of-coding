//WAP to find the LCM of two numbers.
#include <stdio.h>
int main() {
    int a, b, num1, num2, temp, hcf, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    num1 = a;
    num2 = b;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    hcf = a;
    lcm = (num1 * num2) / hcf;
    
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);
    return 0;
}