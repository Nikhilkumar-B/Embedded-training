#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    printf("enter the size\n");
    scanf("%d",&n);
    int a[n];
    int *ptr;

    printf("enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        ptr=&a[i];

    }
    for(i=n-1;i>=0;i--){

    printf("%d",a[i]);
    }
    return 0;
}
