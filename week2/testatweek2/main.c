#include <stdio.h>
#include <stdlib.h>

 a='c';


int main()
{
    int a=11;

    printf("%d and address is %x\n",a,&a);
    myfun();

    return 0;
}

void myfun()
{
    printf("%d and address is %x\n",a,&a);
}
