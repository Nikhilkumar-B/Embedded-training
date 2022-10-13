#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,n3,a,n=0,i;
    printf("enter value for n1,n2,n3 \n");
    scanf("%d%d%d",&n1,&n2,&n3);
    for(i=1;i<=n;i++)
    {
        a=((n1*n1*n1)+(n2*n2*n2)+(n3*n3*n3));
        printf("a is %d\n",a);
        n=a;
        n=n/10;
        if(a==n)
        {
            printf("it is amstrong number");
        }
        else
            printf("not amstrong number");

        break;
    }

    return 0;
}
