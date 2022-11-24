#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,s;

    for(i=1; i<=6; i++)
    {
        for(s=1; s<=6-i; s++)
        {
            printf(" ");
        }
        for(j=1; j<=1; j++)
        {
            printf("1");
        }

        if(i==0)
        {
            printf("\n");
            continue;
        }

        for(s=6; s>=2*(6-i); s--)
        {
            printf(" ");
        }
        for(j=2; j<=2; j++)
        {
            printf("1");
        }
        printf("\n");
    }

    return 0;
}
