#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i,min,s;
    printf("enter the minute\n");
    scanf("%d",&min);
    s=min*60;
    for(i=s;i>=0;i--)
    {
    printf("%d\n",i);
    }
    return 0;
}
