#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],i,j,n,temp=0;
    printf("enter the size \n");
    scanf("%d",&n);
    int *ptr[n];
    printf("enter the elements \n");

    for( i=0; i<n; i++)

        scanf("%d",&a[i]);
        ptr[i]=&a[i];
    for( i=0; i<n; i++)
    {
        for( j=0; j<n; j++)
        {
            temp=*ptr[j];
            if(*ptr[j]>*ptr[j+1])
            {

                *ptr[j]=*ptr[j+1];
                *ptr[j+1]=temp;
            }
        }
    }
    printf("the ascending order is \n");
    return 0;
}

