// check if two strings are anagrams of each other.


#include <stdio.h>
int main() {
    char str1[100], str2[100];
    int count1[256] = {0};
    int count2[256] = {0};
    int i;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    for (i = 0; str1[i] != '\0'; i++) {
        count1[(unsigned char)str1[i]]++;
    }
    for (i = 0; str2[i] != '\0'; i++) {
        count2[(unsigned char)str2[i]]++;
    }
    for (i = 0; i < 256; i++) {
        if (count1[i] != count2[i]) {
            printf("strings are not anagrams.\n");
            return 0;
        }
    }

    printf("string are anagram\n");

    return 0;
}