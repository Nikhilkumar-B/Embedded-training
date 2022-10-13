#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;

    int *ptr1=&a;
    int *ptr2=&b;
    printf("enter the value for a and b\n");
    scanf("%d %d",&a,&b);


    if(*ptr1>*ptr2){
    printf("ptr1 is maximum %d\n",*ptr1);
    }

    else
    printf("ptr2 is maximum%d\n",*ptr2);
    return 0;
}
