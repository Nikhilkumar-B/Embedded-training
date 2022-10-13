#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=40,b=20;
    a=a+b;

    b=a-b;
    printf("b is %d\n",b);
    a=a-b;
    printf("a is %d\n",a);
    return 0;
}
