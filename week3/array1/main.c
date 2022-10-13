#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum=0,size;
    float avg;
    printf("enter the size \n");
    scanf("%d",&size);
    int arr[size];
    printf("enter the elements \n");

    for(int i=0; i<size; i++)

        scanf("%d",&arr[i]);
    {

        for(int i=0; i<size; i++)
            sum=sum+arr[i];
        printf("sum is %d\n",sum);
    }

    avg=sum/size;
    printf("average is %f\n",avg);


    return 0;
}
