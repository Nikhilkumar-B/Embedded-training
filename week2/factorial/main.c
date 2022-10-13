#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,fact=1;
    printf("enter number\n");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        fact=n*fact(n-1);
    }
    printf("factorial of %d is %d\n",n,fact);
    return 0;
}
