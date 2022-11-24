#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[20],i,len,b,check_str[20];
    printf("enter the string\n");
    scanf("%s",str);
    len=strlen(str);
    int j=len-1;
    for(i=0;i<len;i++)
    {
        check_str[i]=str[j];
        j--;
    }

    b=strcmp(check_str,str);

    if(b==0)
    {
        printf("string is palindrome\n");
    }
    else
    {
        printf("not palindrome\n");
    }
    return 0;
}
