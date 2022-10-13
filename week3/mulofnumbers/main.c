#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row,col;

    for(row=1;row<=4;row++)
    {
       for(col=1;col<=row;col++)
       {
           printf("#");
       }
       printf("\n");
    }
    for(row=3;row>=1;row--)
    {
       for(col=row;col>=1;col--)
       {
           printf("#");
       }
       printf("\n");
    }
    return 0;
}
