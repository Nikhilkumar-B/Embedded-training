#include <stdio.h>

int main()
{
    int n,i,j=0,k=0;
    int arr[20],arr1[20],arr2[20];
    printf("enter the size of an array\n");
    scanf("%d",&n);
    printf("enter the elements\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
        for(i=0;i<n;i++)
        {
            if(arr[i]%2==0)
            {
                arr1[j]=arr[i];
                j++;
            }
            else
            {
                arr2[k]=arr[i];
                k++;
            }
        }

    printf("\n the even elements are \n");
    for(i=0;i<j;i++)
    {
        printf("%d ",arr1[i]);
    }
    printf("\n the odd elements are \n");
    for(i=0;i<k;i++)
    {
        printf("%d ",arr2[i]);
    }

    return 0;
}
