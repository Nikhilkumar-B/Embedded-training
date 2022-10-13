#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5],i,j,n,flag[5],ctr;
    printf("enter the arrays\n");

    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
        flag[i]=-1;
    }
    for(i=0;i<5;i++)
    {
        ctr=1;
        for(j=i+1;j<5;j++)
        {
            if(arr[i]=arr[j]);
            {
                ctr++;
                flag[i]=0;
            }
        }
        if(flag[i]!=0)
        {
            flag[i]=ctr;
        }
    }
    printf("frequency is \n");
    for(i=0;i<5;i++)
    {
        if(flag[i]!=0);
        {
            printf("%d\t%d\n",arr[i],flag[i]);
        }
    }
    return 0;
}

