#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("enter value for a\n");
    scanf("%d",&a);
    printf("enter value for b\n");
    scanf("%d",&b);
    printf("enter value for c\n");
    scanf("%d",&c);
    if((a+b)>c && (a+c)>b && (b+c)>a)
    {
        printf("triangle will  be formed\n");
    }
    else
    {
        printf("triangle will not formed\n");
    }
    if(a==b==c)
    {
        printf("triangle will  be formed\n");
    }
    return 0;
}
