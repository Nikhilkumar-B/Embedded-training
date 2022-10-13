#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=30;
    int *ptr;

    ptr=&a;
    printf("address of a variable is %x\n",&a);
    return 0;
}
