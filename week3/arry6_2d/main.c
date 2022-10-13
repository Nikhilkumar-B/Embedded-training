#include <stdio.h>

const int r=4;
const int c=3;

void fun(int arr[r][c])

{
    int i, j;
    for (i=0;i<r;i++)
        for(j=0;j<c;j++)
    {
        printf("%d ",arr[i][j]);
    }
}
int main()
{
    int arr[3][3]={{2,3,4},{6,9,2},{1,6,3}};

    fun(arr);
    return 0;
}


