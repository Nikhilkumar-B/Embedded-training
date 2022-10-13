#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    int length;
    printf("enter the string\n");
    scanf("%[^\n]s",&str);
    length=strlen(str);
    for(int i=0; i<length; i++)
    {
        if(str[i]>'a' && str[i]<='z')
        {
            printf("%c ",strupr[i]);
        }

    return 0;
}
