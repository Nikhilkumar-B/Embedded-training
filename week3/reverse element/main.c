#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size,i,j,temp=0;
    printf("enter the size\n");
    scanf("%d",&size);
    printf("enter the elements\n");
    int arr[size];

    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<=(size/2)-1; i++)
    {
        temp=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=temp;
    }
    for(i=0; i<size; i++)
    {
        printf("%d",arr[i]);
    }


    return 0;
}
