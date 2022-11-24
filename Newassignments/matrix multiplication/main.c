#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr1[20][20],arr2[20][20],arr3[20][20],n,m,r1,c1,r2,c2;
    printf("enter the number of rows\n");
    scanf("%d",&r1);
    printf("enter the number of coloms\n");
    scanf("%d",&c1);
    printf("enter the number of rows second matrix\n");
    scanf("%d",&r2);
    printf("enter the number of coloms second matrix\n");
    scanf("%d",&c2);

if(c1!=r2){
        printf("matrix not competeble for multipication\n");
}
else
{
    printf("enter the elements of first matrix\n");

    for(m=0;m<r1;m++)
    {
        for(n=0;n<c1;n++)
        {
            scanf("%d",&arr1[m][n]);
        }
    }
    printf("enter the elements of second matrix\n");

    for(m=0;m<r2;m++)
    {
        for(n=0;n<c2;n++)
        {
            scanf("%d",&arr2[m][n]);
        }
    }


    for(m=0;m<r1;m++)
    {
        for(n=0;n<c2;n++)
        {
            arr3[m][n]=0;

            for(int l=0;l<r2;l++)
            {
                arr3[m][n]+=(arr1[m][l]) * (arr2[l][n]);
            }
        }
    }
     for(m=0;m<r1;m++)
    {
        for(n=0;n<c2;n++)
        {
            printf("%d\t",arr3[m][n]);

        }
        printf("\n");
    }
}
    return 0;
}
