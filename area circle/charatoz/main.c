#include <stdio.h>
#include <stdlib.h>

int main()
{
    char me;
    printf("enter any charecter\n");
    scanf("%c",&me);


    if(me>'0' && me<'9')
    {
        printf("it is digit \n");
    }
    else if(me>'a' && me<'z')
    {
        printf("is an alphabet\n");
    }
    else
    {
        printf("special character\n");
    }
    return 0;
}
