#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,size,temp=0;

    printf("enter the size \n");
    scanf("%d",&size);
    int a[size];
    int *ptr[size];

    printf("enter the elements \n");

    for( i=0; i<size; i++)
    {

        scanf("%d",&a[i]);
    }

    for( i=0; i<size; i++)
    {
        ptr[i]=&a[i];

    }

    for(i=0; i<size; i++)
    {
        for( j=i+1; j<size; j++)
        {
            if(*ptr[i]>*ptr[j])
            {
                temp=*ptr[i];
                *ptr[i]=*ptr[j];
                *ptr[j]=temp;

            }
        }
    }
    for(i=0; i<size; i++)
    {
        printf("the ascending order is %d\n",*ptr[i]);
    }
    return 0;
}

