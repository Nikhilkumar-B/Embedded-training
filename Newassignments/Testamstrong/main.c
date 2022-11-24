#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,temp,rem,sum=0,ctr;
   // printf("enter any number\n");
   // scanf("%d",&n);
    //temp=n;
    for(n=0;n<1000;n++)
    {
        rem=n%10;
        sum=sum+(rem*rem*rem);
        n=n/10;
    }
    for(n=0;n<1000;n++)
    {

        if(n==sum)
    {
       printf("sum is %d\n",n);
    }

    }


    return 0;
}
