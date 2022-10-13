#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,x;
    printf("enter value for a,b,c\n");
    scanf("%d%d%d",&a,&b,&c);
    x=(-b+sqrt((b*b)-(4*a*c)))/2*a;
    printf("x is %d\n",x);
    return 0;
}
