#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    printf("enter any value %d\n",a);
    scanf("%d",&a);
    ((a%3==0)||(a%7==0))?(printf("a is multiple of 3")):(printf("a is multiple of 7"));
    return 0;
}
