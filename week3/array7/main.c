#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r,c,sum[20][20],a[20][20],b[20][20],i,j;

    printf("enter number of rows \n");
    scanf("%d",&r);
    printf("enter number of cols \n");
    scanf("%d",&c);
    printf("enter the elements of 1st matrix \n");

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("enter the elements a %d%d \n",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }

    printf("enter the elements of 2nd matrix \n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("enter the elements b %d%d \n",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
            printf("the sum is %d \n",sum[i][j]);
        }
    }




    return 0;
}
