#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k;
    for(i=1; i<5; i++)
    {


        for(j=1; j<5; j++)
        {
            if(i==1 || i==4||j==1||j==4)
            {
                printf("1");
            }
            else
            {
                printf(" ");
            }

        }
        printf(" \n");
    }
    return 0;
}
