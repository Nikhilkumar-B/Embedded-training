#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num,rem,sum=0,temp1,temp=0,ctr,m,Y;
    printf("enter the number \n");
    scanf("%d",&num);
    temp=num;
    temp1=num;
    while(temp>0)
    {
        temp=temp/10;
        ctr++;
    }
    Y=ctr;
    while(num>0)
    {
        rem=num%10 ;
        for(int i=0; i<Y; i++)
        {
            m=pow(rem,Y);
        }

        sum=sum+m;
        num=num/10;
    }
    printf("%d\n",sum);
    if(temp1==sum)
    {
        printf("num is amstrong\n");
    }
    else
    {
        printf("num is not amstrong\n");
    }
    return 0;
}
