#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ind1,ind2,size,temp=0,ctr=0;
    printf("enter the size \n");
    scanf("%d",&size);
    int arr[size];
    printf("enter the elements \n");

    for(int ind1=0; ind1<size; ind1++)

        scanf("%d",&arr[ind1]);
    for(int ind1=0; ind1<size; ind1++)
    {
        for(int ind2=ind1+1; ind2<size; ind2++)
        {
            if(arr[ind1]==arr[ind2])
            {
               ctr++;
            }
        }
    }
    /*printf("the ascending order is \n");
    {
        for(int ind1=0; ind1<size; ind1++)
            printf("%d\n",arr[ind1]);
    }*/

        printf("the duplicate num are %d",ctr);

    return 0;
}
