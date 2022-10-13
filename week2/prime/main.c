#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0,i,count=0;
    printf("enter value for n\n");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        if(n%i==0)
        {

            count++;
        }
    }

    if(count==2)
    {
        printf("given num %d is  prime \n",n);

    }

    else
    {
        printf("out of range \n",n);
    }
    return 0;
}
