#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,n,small,large;
    printf("enter the size\n");
    scanf("%d",&n);
    int a[n];
    int *ptr[n];
    printf("enter the elements\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        ptr[i]=&a[i];
    }
    small=a[0];
    for(i=0; i<n; i++)
    {
        if(a[i]<small)
        {
            *ptr=a[i];
        }

    }

    printf("the small num is %d\n",*ptr);

    return 0;
}
