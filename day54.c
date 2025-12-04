/*
Write a Program to take a positive integer n as input, and find the pivot integer x such that
the sum of all elements between 1 and x inclusivelyequals the sum of all elements between x and n inclusively.
Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there
 will be at most one pivot integer for the given input.

*/

#include <stdio.h>
int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    int totalSum = n * (n + 1) / 2; 
    int leftSum = 0;

    for (int x = 1; x <= n; x++) {
        leftSum += x;
        int rightSum = totalSum - leftSum + x; 

        if (leftSum == rightSum) {
            printf("Pivot integer: %d\n", x);
            printf("Explanation: ");
            printf("Sum of numbers 1 to %d = %d, ", x, leftSum);
            printf("Sum of numbers %d to %d = %d\n", x, n, rightSum);
            return 0;
        }
    }

    printf("-1\n"); 
    printf("Explanation: It can be proved that no such integer exists.\n");

    return 0;
}