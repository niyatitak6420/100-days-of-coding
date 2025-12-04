//WAP to find the sum of the series :2/3 + 4/7+ 6/11+ 8/15 +.... up to n terms.
#include <stdio.h>
int main() {
    int n, i;
    float sum = 0, num = 2, den = 3;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        sum = sum + (num / den);
        num = num + 2;
        den = den + 4;
    }
    printf("Approximate sum: %.2f", sum);
    return 0;
}