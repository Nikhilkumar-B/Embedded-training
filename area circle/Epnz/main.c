#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("enter value for num\n");
    scanf("%d",&num);
    if(num>0)
        printf("num is positive %d\n",num);
    else if(num==0)
        printf("num is zero %d\n",num);
    else
        printf("num is negative %d\n",num);
    return 0;
}
