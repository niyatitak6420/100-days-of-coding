/*
Write a program to take a string s as input. The task is to find the length of the longest
substring without repeating characters. Print the length as output.

Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int lengthOfLongestSubstring(char* s) {
    int n = strlen(s);
    int maxLength = 0;
    
    for (int i = 0; i < n; i++) {
    
        bool visited[256] = {false};
        
        for (int j = i; j < n; j++) {
    
            if (visited[(int)s[j]]) {
                break;
            }
            
            maxLength = max(maxLength, j - i + 1);
            
            visited[(int)s[j]] = true;
        }
    }
    
    return maxLength;
}

int main() {
    char s[1000];
    
    printf("Enter a string: ");
    scanf("%s", s);
    
    int result = lengthOfLongestSubstring(s);
    printf("Length of longest substring without repeating characters: %d\n", result);
    
    return 0;
}