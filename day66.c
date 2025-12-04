/*
Write a program to take two strings s and t as inputs (assume all characters are lowercase).
The task is to determine if s and t are valid anagrams, meaning they contain the same characters
with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

*/
#include <stdio.h>
#include <string.h>
int main() {
    printf("Enter two strings\n");
    char s[1001], t[1001];
    int freq[26] = {0};

    scanf("%1000s", s);
    scanf("%1000s", t);

    if (strlen(s) != strlen(t)) {
        printf("Not Anagram\n");
        return 0;
    }

    for (int i = 0; s[i]; i++) {
        freq[s[i] - 'a']++;
        freq[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}