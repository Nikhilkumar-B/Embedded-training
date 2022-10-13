#include <stdio.h>
#include <stdlib.h>
int ctr=10;
int main()
{
    int result=myfunc();
    printf("%d",result);
    return 0;
}
int myfunc()
{
    ctr++;
    return ctr;
}
