#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,n3;
    printf("enter value for n1, n2, n3\n");
    scanf("%d%d%d",&n1,&n2,&n3);
    if((n1>n2)||(n2>n3)||(n3>n1))
        printf("largest num is %d\n");
    return 0;
}
