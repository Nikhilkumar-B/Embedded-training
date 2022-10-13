#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=5, b=5, c=10;
    ((a&&b)>c)?(printf ("both are greater than c\n")):(printf("both are smaller than c\n"));
    ((a&&b)<c)?(printf ("both are greater than c\n")):(printf("both are smaller than c\n"));

    return 0;
}
