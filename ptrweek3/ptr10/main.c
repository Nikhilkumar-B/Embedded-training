#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[50],n,sum;
    printf("enter the size\n");
    scanf("%d",&n);
    //int *ptr[n];
    printf("enter the elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
       // ptr[i]=&a[i];
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("the sum is %d\n",sum);
    return 0;
}
