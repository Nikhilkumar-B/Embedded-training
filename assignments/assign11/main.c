#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1=0,n2=1,temp;
    for(n1=0;n1<=1000;n1++)
    {
        temp=n1+n2;
        n2=temp;


    }
    printf("%d\n",temp);
    return 0;
}
