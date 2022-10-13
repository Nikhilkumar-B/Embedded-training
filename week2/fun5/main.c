#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char my_fun( char a[20]);
int main()
{
    char a[20];
    printf("enter the name\n");
    scanf("%s",a);
    my_fun(a);
    return 0;
}

    char my_fun( char a[])
    {
    printf("hello %s !!",a);

}
