#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,sum=0;

    for(i=101;i<=1000;i++)
    {
        if(i%2!=0)
        {
            sum=sum+i;
        }
    }
    printf("result is %d\n",sum);
    return 0;
}
