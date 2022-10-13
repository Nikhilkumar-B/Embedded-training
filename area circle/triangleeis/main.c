#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("enter degrees \n");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&b==c&&c==a)
    {
        printf("equilateral triangle \n ");
    }
    else if(a==b||b==c||c==a)
    {
        printf("isosceles triangle \n");
    }
    else
    {
        printf("not triangle \n");
    }
    return 0;
}
