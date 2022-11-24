#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[50],n,sum;
    printf("enter the size\n");
    scanf("%d",&n);
    int *ptr[n];
    float avg;
    printf("enter the elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        ptr[i]=&a[i];
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+*ptr[i];
    }
    printf("the sum is %d\n",sum);
    avg=sum/n;
    printf("the average is %f\n",avg);
    return 0;
}
