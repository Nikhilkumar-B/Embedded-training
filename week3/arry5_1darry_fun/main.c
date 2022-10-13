#include <stdio.h>

int main()
{
    int a[]={1,2,3,4,5,6};
    arr_fun(a[2],a[5]);

    return 0;
}
int arr_fun(int a1, int a2)
{
    printf("%d\n",a1);
    printf("%d\n",a2);
}
