#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;

    for(a=1; a<=4; a++)
    {
        for(b=1; b<=a; b++)
        {
            printf("1",a);
        }
        printf("\n");
    }
    for(a=5; a>=1; a--)
    {
        for(b=a; b>=1; b--)
        {
            printf("1",a);
        }
        printf("\n");

    }
    return 0;
}
