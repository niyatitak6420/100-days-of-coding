// Reverse a string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int n, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    n = strlen(str);

    for(i = 0; i < n; i++) {
        rev[i] = str[n - 1 - i];
    }
    rev[n] = '\0';

    printf("Reversed string: %s", rev);
    return 0;
}
