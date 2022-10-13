#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y;

    printf("enter year\n");
    scanf("%d",&y);
    if((y%400==0)&&(y%4==0))
        {
            printf("it is leap year \n");
            printf("the next leap year is %d",y+4);
        }
    else if (y%100!=0)
    {
        printf("not leap year \n");
    }
    return 0;
}
