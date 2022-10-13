#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    printf("enter mul number\n");
    scanf("%d\n",&n);

    for(i=50; i<=500; i=i+n)
    {
        printf("%d\n",i);
    }
    return 0;
}
