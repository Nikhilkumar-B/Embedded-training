#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10][10],b[10][10],i,j,r=2,c=2,d[10][10];

    printf("enter the elements of a\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the elements of b\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            d[i][j]=a[i][j]+b[i][j];
            printf("matrix d is %d\n",d[i][j]);
        }
    }
    return 0;
}
/*enter the elements of a
1
2
3
4
enter the elements of b
2
3
2
4
matrix d is 3
matrix d is 5
matrix d is 5
matrix d is 8

Process returned 0 (0x0)   execution time : 13.754 s
Press any key to continue.
*/

