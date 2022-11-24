#include <stdio.h>
#include <stdlib.h>

int main()
{
    volatile a=5;
    int b;
    b=(++a)+(a++)+(a++)+(++a);
    printf("%d\n",b);
    return 0;
}
