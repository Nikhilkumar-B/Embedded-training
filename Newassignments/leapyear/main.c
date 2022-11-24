#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year,ctr;
    printf("enter the year\n");
    scanf("%d",&year);
    if(year%400==0)
    {
        ctr++;

    }
    else if(year%100==0)
    {
        ctr++;
        printf("is not leap year\n");
    }
    else if(year%4==0)
    {
        ctr++;

    }
    if(ctr==2)
    {
        printf(" is leap year\n");
    }


    return 0;
}
