#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,n1=0,n2=1,temp;
    printf("enter number of elements \n");
    scanf("%d",&n);
    printf("%d %d\n",n1,n2);
    for(i=0;i<=n;i++)
    {
        temp=n1+n2;
        printf("%d\n",temp);
        n1=n2;
        n2=temp;
    }

    return 0;
}
