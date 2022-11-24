#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,temp,n=8;
    int arr[n];
    printf("enter the elements\n");

    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++){
        for(j=0; j<n; j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    for(i=0; i<n; i++)
    {
        printf("ascending order is %d\n",arr[i]);
    }

    return 0;
}
/*enter the elements
9
8
7
6
5
4
3
2
ascending order is 2
ascending order is 3
ascending order is 4
ascending order is 5
ascending order is 6
ascending order is 7
ascending order is 8
ascending order is 9

Process returned 0 (0x0)   execution time : 9.534 s
Press any key to continue.*/
