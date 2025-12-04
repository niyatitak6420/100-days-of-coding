//print the initials of a name.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char str[1000];
     printf("Enter String\n");
    fgets(str,1000,stdin);
    int n=strlen(str);
    if(n>0 && (str[n-1]==' '))
    {
        str[n-1]='\0';
        n--;
    }
    
    
    int i=0,j=n;

    while(str[i]==' ')
    i++;
    printf("%c.",str[i]);

    while(str[j]==' ')
    j--;

    

    while(i<j)
    {
        if(str[i]==' ' &&  (isalpha(str[i+1])))
        printf("%c.",str[i+1]);
        i++;
    }
    
    return 0;
}