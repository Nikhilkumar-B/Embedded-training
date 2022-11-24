#include <stdio.h>
#include <stdlib.h>

int main()
{
    int distance,min,bill1,bill2,rc,bill3,TB;
    printf("enter the distance\n");
    scanf("%d",&distance);

    printf("enter the minute\n");
    scanf("%d",&min);

    if(distance<=2)
    {
        bill1=30;
    }
    if(distance>2)
    {
        bill2=distance*12;
    }
    if(min>=0 && min<=20)
    {
        rc=min*0.5;
    }

    if(min>20)
    {
        rc=10;
    }
    TB=bill1+bill2+rc;
    printf("total bill is %d\n",TB);
    return 0;
}
