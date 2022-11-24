#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10][10],b[10][10],i,j,r,c;

    printf("enter the rows\n");
    scanf("%d",&r);
     printf("enter the coloms\n");
    scanf("%d",&c);

    printf("enter the elements\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
        //printf("\n");
    }
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            b[i][j]=a[j][i];
            printf("%d",b[i][j]);

        }
        printf("\n");
    }
    return 0;
}
