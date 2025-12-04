//Remove all vowels from a string.
#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[1000];
    int n,ct=0;
    printf("Enter string :\n");

    fgets(str,sizeof(str),stdin);
    n=strlen(str);
    if ((n>0)&&(str[n-1]=='\n'))
    {
        str[n-1]='\0';
        n--;
    }

    int i=0;
    while (str[i]!='\0')
    {
        char ch=tolower(str[i]);
        if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        i++;
        else
        {
        str[ct]=str[i];
        ct++;
        i++;
        }
    }

    str[ct]='\0';

    printf(": %s",str);
    
    
    return 0;
}