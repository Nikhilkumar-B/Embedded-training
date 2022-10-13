#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,fact=1;
    int *ptr=&n;
    printf("enter number\n");
    scanf("%d",&n);

    for(i=1;i<=*ptr;i++)
    {
        fact=i*fact;
    }
    printf("factorial of %d is %d\n",n,fact);

    return 0;
}
