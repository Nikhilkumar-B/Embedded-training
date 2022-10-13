#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=10,b=20;
    int *ptr1,*ptr2;

    ptr1=&a;
    ptr2=&b;

    ptr2=ptr1+b;
    printf("pointer addition is %d\n",ptr2);
    return 0;
}
