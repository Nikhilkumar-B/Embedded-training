#include <stdio.h>
#include <stdlib.h>

int a;
float b,result;
int squre_fun(int x, float y)
{
    int c=x+y;
}
int main()
{

    printf("enter value for a,b\n");
    scanf("%d %f",&a,&b);
    result=squre_fun(a,b);
    printf("a is %f\n",result);
    return 0;
}
