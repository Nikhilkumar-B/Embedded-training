#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,space;
    for(i=1;i<=10;i++)
    {
        for(space=9;space>=i;space--)
        {
            printf(" ");
        }
        for(j=1;j<=1;j++)
        {
            printf("1");
        }
        if(i==1)
        {
            printf("\n");
            continue;
        }
        for(space=1;space<=2*(i-1);space++)
        {
            printf(" ");
        }
        for(j=1;j<=1;j++)
        {
            printf("1");
        }
        printf("\n");
    }
    for(i=1;i<=9;i++)
    {
        for(space=1;space<=i;space++)
        {
            printf(" ");
        }
        for(j=1;j<=1;j++)
        {
            printf("1");
        }
         if(i==9)
        {
            printf("\n");
            continue;
        }
         for(space=15;space>=2*(i-1);space--)
        {
            printf(" ");
        }
        for(j=1;j<=1;j++)
        {
            printf("1");
        }

        printf("\n");
    }

    return 0;
}
