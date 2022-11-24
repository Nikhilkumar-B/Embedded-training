#include <stdio.h>


int a,b,sum;

int main()
{

    printf("enter the value for a and b\n");
    scanf("%d %d",&a,&b);
    sum=add(&a,&b);
    printf("sum is %d\n",sum);
    return 0;
}
int add(int *x ,int *y)
{
    sum=*x+*y;
    return sum;
}
