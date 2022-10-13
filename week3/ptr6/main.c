#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ctr=0;
    char a[100],i;
    char *ptr=&a;

    printf("enter the string \n");
    scanf("%s",a);

    for(i=0;ptr[i]!='\0';i++)
    {
        ctr++;
    }
    printf("%d",ctr);
    return 0;
}
