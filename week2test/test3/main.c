#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],i,n,small,large;
    printf("enter the size\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    large=small=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>large)
        {
            large=a[i];
        }
        if(a[i]<small)
        {
            small=a[i];
        }

    }
    printf("the large num is %d\n",large);
        printf("the small num is %d\n",small);

    return 0;
}
