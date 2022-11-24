#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100],n,sum,i,j,k,mean=0,median,temp,mode[100],ctr=0;
    printf("enter the size\n");
    scanf("%d",&n);

    printf("enter the elements\n");
    for( i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
   /* for(i=0; i<n; i++)
    {
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
    }*/
    for( i=0; i<n; i++)
    {
        sum=sum+arr[i];
    }
    printf("the sum is %d\n",sum);
    mean=sum/n;
    printf("mean is %d\n",mean);
    for( i=0; i<n; i++)
    {
        if(n%2==0)
        {
            median=(n+1)/2;
        }
        if(n%2!=0)
        {
            median=((n/2)+(n/2)+1)/2;
        }
    }
    printf("median is %d\n",median);

    for(k=0; k<n; k++)
    {
        mode[k]=-1;
    }
    for(i=0; i<n; i++)
    {
        ctr=1;
        for(j=i+1; j<n; j++)
        {

            if(arr[i]==arr[j])
            {
                temp=mode[i];
                mode[i]=mode[j];
                mode[j]=temp;
                ctr++;
                mode[j]=0;
            }
        }
        if(mode[i]!=0)
        {
            mode[i]=ctr;
        }
    }
    for(i=0; i<n; i++)
    {
        if(mode[i]!=0)
        {

            printf("%d repeated in %d times \n",arr[i],mode[i]);
        }
    }


    return 0;
}

